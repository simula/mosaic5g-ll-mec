/* The MIT License (MIT)

   Copyright (c) 2018 Anta Huang (anta.huang@eurecom.fr)

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.
*/
#include <iostream>

#include "ue_manager.h"
#include "context_manager.h"
#include "spdlog.h"

namespace llmec {
namespace app {
namespace uplane {

void Ue_manager::event_callback(llmec::core::eps::ControllerEvent* ev)
{
}

void Ue_manager::start()
{
/*  while(true){
  }*/
}

bool Ue_manager::add_bearer(json context)
{
  llmec::core::eps::Controller* ctrl = llmec::core::eps::Controller::get_instance();
  fluid_base::OFConnection *of_conn_ = ctrl->get_ofconnection(ctrl->conn_id);
  llmec::data::Context_manager* context_manager = llmec::data::Context_manager::get_instance();

  /* Return if connection does not exist */
  if (of_conn_ == nullptr || !of_conn_->is_alive())
    return false;

  uint64_t id = context_manager->get_id(context["imsi"].get<std::string>(), context["eps_bearer_id"].get<int>());

  spdlog::get("ll-mec")->info("bearer {}", id);
  /* Bearer already exists. Remove it and then add (Overwrite) */
  if (id != 0) {
    context_manager->delete_bearer(id);
    this->of_interface.flush_flow(of_conn_, id);
    context_manager->add_bearer(id, context);
    spdlog::get("ll-mec")->info("Overwrite UE bearer {}: {}", id, context.dump());
  }
  else {
    context_manager->add_bearer(context);
    id = context_manager->get_id(context["imsi"].get<std::string>(), context["eps_bearer_id"].get<int>());
    spdlog::get("ll-mec")->info("Add UE bearer {}: {}", id, context.dump());
  }

  this->of_interface.install_default_UE_ul_flow(of_conn_, id, context["s1_ul_teid"].get<int>());
  this->of_interface.install_default_UE_dl_flow(of_conn_, id, context["ue_ip"].get<std::string>(), context["s1_dl_teid"].get<int>(), context["enb_ip"].get<std::string>());
  return true;
}

bool Ue_manager::add_redirect_bearer(uint64_t id, json context) {
  llmec::data::Context_manager* context_manager = llmec::data::Context_manager::get_instance();

  /* No such ue context */
  if (context_manager->id_exist(id) == false)
    return false;

  llmec::core::eps::Controller* ctrl = llmec::core::eps::Controller::get_instance();
  fluid_base::OFConnection *of_conn_ = ctrl->get_ofconnection(ctrl->conn_id);


  /* Return if connection does not exist */
  if (of_conn_ == nullptr || !of_conn_->is_alive())
    return false;

  /* Add redirect information in database */
  context_manager->add_redirect_bearer(id, context);
  json bearer = context_manager->get_bearer_context(id);

  this->of_interface.redirect_edge_service_ul_flow(of_conn_, id, bearer["s1_ul_teid"].get<int>(), context["from"].get<std::string>(), context["to"].get<std::string>());
  this->of_interface.redirect_edge_service_dl_flow(of_conn_, id, bearer["ue_ip"].get<std::string>(), bearer["s1_dl_teid"].get<int>(), bearer["enb_ip"].get<std::string>(), context["from"].get<std::string>(), context["to"].get<std::string>());

  spdlog::get("ll-mec")->info("Redirect bearer id={} from {} to {}", id, context["from"].get<std::string>(), context["to"].get<std::string>());
  return true;
}

bool Ue_manager::delete_redirect_bearer(uint64_t id) {
  llmec::core::eps::Controller* ctrl = llmec::core::eps::Controller::get_instance();
  fluid_base::OFConnection *of_conn_ = ctrl->get_ofconnection(ctrl->conn_id);
  llmec::data::Context_manager* context_manager = llmec::data::Context_manager::get_instance();

  /* No such ue context */
  if (context_manager->id_exist(id) == false)
    return false;

  /* Return if connection does not exist */
  if (of_conn_ == nullptr || !of_conn_->is_alive())
    return false;

  json bearer = context_manager->get_bearer_context(id);
  this->of_interface.flush_flow(of_conn_, id);
  this->of_interface.install_default_UE_ul_flow(of_conn_, id, bearer["s1_ul_teid"].get<int>());
  this->of_interface.install_default_UE_dl_flow(of_conn_, id, bearer["ue_ip"].get<std::string>(), bearer["s1_dl_teid"].get<int>(), bearer["enb_ip"].get<std::string>());

  /* Remove redirect information in UE context */
  context_manager->delete_redirect_bearer(id);

  spdlog::get("ll-mec")->info("No redirected traffic for UE id={}", id);
  return true;
}

json Ue_manager::get_bearer(uint64_t id) {
  llmec::data::Context_manager* context_manager = llmec::data::Context_manager::get_instance();
  json response = context_manager->get_bearer_context(id);
  return response;
}

json Ue_manager::get_bearer_all() {
  json response = json::array();
  llmec::data::Context_manager* context_manager = llmec::data::Context_manager::get_instance();
  std::vector<uint64_t> id_list = context_manager->get_id_list();
  for (auto each:id_list)
    response.push_back(context_manager->get_bearer_context(each));
  return response;
}

bool Ue_manager::delete_bearer(uint64_t id) {
  llmec::core::eps::Controller* ctrl = llmec::core::eps::Controller::get_instance();
  fluid_base::OFConnection *of_conn_ = ctrl->get_ofconnection(ctrl->conn_id);
  llmec::data::Context_manager* context_manager = llmec::data::Context_manager::get_instance();

  /* Return if connection does not exist */
  if (of_conn_ == nullptr || !of_conn_->is_alive())
    return false;

  /* Remove the ue context */
  context_manager->delete_bearer(id);

  /* Flush the bearer */
  this->of_interface.flush_flow(of_conn_, id);

  spdlog::get("ll-mec")->info("Removed UE id={}", id);

  return true;
}

bool Ue_manager::delete_bearer_all() {
  llmec::core::eps::Controller* ctrl = llmec::core::eps::Controller::get_instance();
  fluid_base::OFConnection *of_conn_ = ctrl->get_ofconnection(ctrl->conn_id);
  llmec::data::Context_manager* context_manager = llmec::data::Context_manager::get_instance();

  /* Return if connection does not exist */
  if (of_conn_ == nullptr || !of_conn_->is_alive())
    return false;

  /* flush flow for each ue and clear the map */
  std::vector<uint64_t> id_list = context_manager->get_id_list();
  for (auto each:id_list) {
    this->of_interface.flush_flow(of_conn_, each);
  }
  context_manager->clean();

  spdlog::get("ll-mec")->info("Removed all bearers");
  return true;
}

Ue_manager* Ue_manager::instance = 0;

void Ue_manager::create_instance(llmec::core::eps::OFInterface &of_interface)
  {
    if (instance == 0) {
      instance = new Ue_manager(of_interface);
    }
  }

Ue_manager* Ue_manager::get_instance()
{
  assert(instance);
  return instance;
}


} // namespace uplane
} // namespace app
} // namespace llmec
