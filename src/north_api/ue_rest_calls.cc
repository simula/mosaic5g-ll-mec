#include <pistache/http.h>
#include "ue_rest_calls.h"
#include "json.h"
#include <iostream>
#include <string>

using json = nlohmann::json;

namespace llmec {
namespace north_api {

  void Ue_rest_calls::register_calls(Pistache::Rest::Router& router) {
    Pistache::Rest::Routes::Post(router, "/ue", Pistache::Rest::Routes::bind(&llmec::north_api::Ue_rest_calls::add_ue, this));
    Pistache::Rest::Routes::Get(router, "/ue/:id", Pistache::Rest::Routes::bind(&llmec::north_api::Ue_rest_calls::get_ue, this));
    Pistache::Rest::Routes::Get(router, "/ue/all", Pistache::Rest::Routes::bind(&llmec::north_api::Ue_rest_calls::get_ue_all, this));
    Pistache::Rest::Routes::Post(router, "/ue/redirect", Pistache::Rest::Routes::bind(&llmec::north_api::Ue_rest_calls::redirect_ue, this));
    // TODO Move flush_flow to another rest call
    Pistache::Rest::Routes::Post(router, "/flow/flush", Pistache::Rest::Routes::bind(&llmec::north_api::Ue_rest_calls::flush_flow, this));
  }

  void Ue_rest_calls::add_ue(const Pistache::Rest::Request& request, Pistache::Http::ResponseWriter response) {
    std::string resp;
    if (request.body().empty()) {
      resp = "UE identities required.";
      response.send(Pistache::Http::Code::Bad_Request, resp);
      return;
    }
    json ue_identities_json = json::parse(request.body());
    if ( (ue_identities_json["eps_bearer_id"].empty() || !ue_identities_json["eps_bearer_id"].is_number())
        || (ue_identities_json["imsi"].empty() || !ue_identities_json["imsi"].is_string())
        || (ue_identities_json["s1_ul_teid"].empty() || !ue_identities_json["s1_ul_teid"].is_string())
        || (ue_identities_json["s1_dl_teid"].empty() || !ue_identities_json["s1_dl_teid"].is_string())
        || (ue_identities_json["ue_ip"].empty() || !ue_identities_json["ue_ip"].is_string())
        || (ue_identities_json["enb_ip"].empty() || !ue_identities_json["enb_ip"].is_string())
        ) {
      resp = "Format error.";
      response.send(Pistache::Http::Code::Bad_Request, resp);
      return;
    }
    std::cout<<ue_identities_json["s1_ul_teid"].get<std::string>()<<std::endl;
    std::cout<<ue_identities_json["s1_dl_teid"].get<std::string>()<<std::endl;
    uint64_t s1_ul_teid = std::stoul(ue_identities_json["s1_ul_teid"].get<std::string>(), nullptr, 16);
    uint64_t s1_dl_teid = std::stoul(ue_identities_json["s1_dl_teid"].get<std::string>(), nullptr, 16);
    std::cout<<s1_ul_teid<<std::endl;
    std::cout<<s1_dl_teid<<std::endl;
    std::string ue_ip = ue_identities_json["ue_ip"];
    std::string enb_ip = ue_identities_json["enb_ip"];
    uint64_t eps_bearer_id = ue_identities_json["eps_bearer_id"].get<int>();
    std::string imsi = ue_identities_json["imsi"].get<std::string>();
    std::cout<<eps_bearer_id<<" "<<imsi<<" "<<s1_ul_teid<<" "<<s1_dl_teid<<" "<<ue_ip<<" "<<enb_ip<<std::endl;
    if (this->ue_manager->add_ue(eps_bearer_id, imsi, s1_ul_teid, s1_dl_teid, ue_ip, enb_ip) == false) {
      resp = "Switch connection lost.";
      response.send(Pistache::Http::Code::Service_Unavailable, resp);
      return;
    }
    resp = "OK";
    response.send(Pistache::Http::Code::Ok, resp);
    return;
  }
  void Ue_rest_calls::redirect_ue(const Pistache::Rest::Request& request, Pistache::Http::ResponseWriter response) {
    std::string resp;
    if (request.body().empty()) {
      resp = "UE identities required.";
      response.send(Pistache::Http::Code::Bad_Request, resp);
      return;
    }
    json payload = json::parse(request.body());
    if ( (payload["s1_ul_teid"].empty() || !payload["s1_ul_teid"].is_string())
        || (payload["s1_dl_teid"].empty() || !payload["s1_dl_teid"].is_string())
        || (payload["ue_ip"].empty() || !payload["ue_ip"].is_string())
        || (payload["enb_ip"].empty() || !payload["enb_ip"].is_string())
        || (payload["from"].empty() || !payload["from"].is_string())
        || (payload["to"].empty() || !payload["to"].is_string())
        ) {
      resp = "Format error.";
      response.send(Pistache::Http::Code::Bad_Request, resp);
      return;
    }
    uint64_t s1_ul_teid = std::stoul(payload["s1_ul_teid"].dump(), nullptr, 16);
    uint64_t s1_dl_teid = std::stoul(payload["s1_dl_teid"].dump(), nullptr, 16);
    std::string ue_ip = payload["ue_ip"];
    std::string enb_ip = payload["enb_ip"];
    std::string from = payload["from"];
    std::string to = payload["to"];
    if (this->ue_manager->redirect_ue(s1_ul_teid, s1_dl_teid, ue_ip, enb_ip, from, to) == false) {
      resp = "Switch connection lost.";
      response.send(Pistache::Http::Code::Service_Unavailable, resp);
      return;
    }
    resp = "OK";
    response.send(Pistache::Http::Code::Ok, resp);
    return;
  }
  void Ue_rest_calls::get_ue(const Pistache::Rest::Request& request, Pistache::Http::ResponseWriter response) {
    std::string resp = "Not implemented yet.";
    response.send(Pistache::Http::Code::Not_Implemented, resp);
  }
  void Ue_rest_calls::get_ue_all(const Pistache::Rest::Request& request, Pistache::Http::ResponseWriter response) {
    std::string resp = "Not implemented yet.";
    response.send(Pistache::Http::Code::Not_Implemented, resp);
  }
  // TODO Move this to another rest call
  void Ue_rest_calls::flush_flow(const Pistache::Rest::Request& request, Pistache::Http::ResponseWriter response) {
    std::string resp;
    if (request.body().empty()) {
      resp = "UE identities required.";
      response.send(Pistache::Http::Code::Bad_Request, resp);
      return;
    }
    json ue_identities_json = json::parse(request.body());
    if (ue_identities_json["eps_bearer_id"].empty() || ue_identities_json["eps_bearer_id"].is_number()) {
      resp = "Format error.";
      response.send(Pistache::Http::Code::Bad_Request, resp);
      return;
    }
    uint64_t eps_bearer_id = ue_identities_json["eps_bearer_id"].get<int>();
    if (this->ue_manager->flush_flow(eps_bearer_id) == false) {
      resp = "Switch connection lost.";
      response.send(Pistache::Http::Code::Service_Unavailable, resp);
      return;
    }
    resp = "OK";
    response.send(Pistache::Http::Code::Ok, resp);
    return;
  }
}
}
