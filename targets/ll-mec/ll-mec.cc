/*
 * Licensed to the Mosaic5G under one or more contributor license
 * agreements. See the NOTICE file distributed with this
 * work for additional information regarding copyright ownership.
 * The Mosaic5G licenses this file to You under the
 * Apache License, Version 2.0  (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the Mosaic5G:
 *  	contact@mosaic5g.io
 */

/*!
  \file
  \brief
  \author
  \company
  \email:
*/

#include <iostream>
#include <thread>
#include <memory>
#include <pistache/endpoint.h>

#include "controller.h"
#include "sgwc.h"
#include "switch_manager.h"
#include "stats_manager.h"
#include "ue_manager.h"
#include "of_interface.h"
#include "controller_event.h"
#include "rest_manager.h"
#include "stats_rest_calls.h"
#include "ue_rest_calls.h"
#include "context_manager.h"
#include "input_parser.h"
#include "conf.h"
#include "spdlog.h"
#include "mp1-api-server.h"

#define DEFAULT_CONFIG "llmec_config.json"
#define LOG_NAME "ll-mec"
using namespace org::openapitools::server::api;
int main(int argc, char **argv){
  /* Initialize logger*/
  auto console = spdlog::stdout_color_mt(LOG_NAME);
  spdlog::set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");

  /* initialize command arguments parser*/
  Input_parser input(argc, argv);
  Conf* llmec_config = Conf::getInstance();
  llmec_config->config_path = DEFAULT_CONFIG;

  /* Start parsing command line arguments */
  if (input.cmd_option_exists("-h")) {
    Input_parser::print_help();
    return 0;
  }
  /* Read the config file path*/
  else if (input.cmd_option_exists("-c")) {
    std::string config_path = input.get_cmd_option("-c");
    if (!config_path.empty()) {
      llmec_config->config_path = config_path;
      spdlog::get("ll-mec")->info("Configuration file {} loaded", config_path);
    }
    else {
      spdlog::get("ll-mec")->info("No configuration file specified. Default config path loaded");
    }
  }
  llmec_config->parse_config();

  /* Initial the controller based on the config */
  llmec::core::eps::Controller::create_instance(llmec_config->X["llmec"]["address"].get<std::string>().c_str(), llmec_config->X["llmec"]["port"].get<int>(), llmec_config->X["llmec"]["number_of_workers"].get<int>(), llmec_config->X["llmec"]["secure_connection"].get<bool>());
  llmec::core::eps::Controller* ctrl = llmec::core::eps::Controller::get_instance();
  llmec::data::Context_manager::create_instance();

  //OpenFlow driver interface init
  llmec::core::eps::OFInterface of_interface;

  //Initialize application
  auto switch_manager = std::make_shared<llmec::app::switch_manager::Switch_manager>(of_interface);
  auto stats_manager = std::make_shared<llmec::app::stats::Stats_manager>(of_interface);
  llmec::app::uplane::Ue_manager::create_instance(of_interface);
  llmec::app::uplane::Ue_manager* ue_manager = llmec::app::uplane::Ue_manager::get_instance();
//  auto ue_manager = std::make_shared<llmec::app::uplane::Ue_manager>(of_interface);

  //Register event for application
  ctrl->register_for_event(switch_manager, llmec::core::eps::EVENT_SWITCH_UP);
  ctrl->register_for_event(stats_manager, llmec::core::eps::EVENT_MULTIPART_REPLY);

  std::thread stats_manager_app(&llmec::app::stats::Stats_manager::run, stats_manager);

   //northbound api initial
  Pistache::Port port(llmec_config->X["northbound_api"]["port"].get<int>());
  Pistache::Address addr(Pistache::Ipv4::any(), port);
  llmec::north_api::Rest_manager rest_manager(addr);

  //rest calls setup
  llmec::north_api::Stats_rest_calls stats_rest_calls(std::dynamic_pointer_cast<llmec::app::stats::Stats_manager>(stats_manager));
  llmec::north_api::Ue_rest_calls ue_rest_calls;

  //calls register
  rest_manager.register_calls(stats_rest_calls);
  rest_manager.register_calls(ue_rest_calls);

  rest_manager.init(1);
  std::thread rest_manager_app(&llmec::north_api::Rest_manager::start, rest_manager);

  //start Mp1 API
   Pistache::Address addr_mp1(Pistache::Ipv4::any(), Pistache::Port(8888));
   Mp1Manager mp1Manager(addr_mp1);
   mp1Manager.init(2);
   mp1Manager.start();
   mp1Manager.shutdown();

  //start Mp2 API
 
  //Controller start
  ctrl->start(true);

  return 0;
}
