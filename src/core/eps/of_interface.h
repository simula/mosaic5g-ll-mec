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

#ifndef __OF_INTERFACE_H__
#define __OF_INTERFACE_H__

#include <fluid/OFServer.hh>
#include <fluid/of10msg.hh>
#include <fluid/of13msg.hh>

//LL-MEC OpenFlow interface
namespace llmec {
namespace core {
namespace eps {

class OFInterface {
  public:
    void install_flow_mod(fluid_msg::of10::PacketIn &pi, fluid_base::OFConnection* of_conn, uint64_t src, uint64_t dst, uint16_t out_port);
    void install_flow_mod(fluid_msg::of13::PacketIn &pi, fluid_base::OFConnection* of_conn, uint64_t src, uint64_t dst, uint16_t out_port);
    void install_default_flow(fluid_base::OFConnection* of_conn);
    void install_default_UE_ul_flow(fluid_base::OFConnection* of_conn, uint64_t flow_id, uint64_t ul_tunnel_id);
    void install_default_UE_dl_flow(fluid_base::OFConnection* of_conn, uint64_t flow_id, std::string UE_ip, uint64_t dl_tunnel_id, std::string ENB_ip);
    void redirect_edge_service_ul_flow(fluid_base::OFConnection* of_conn, uint64_t flow_id, uint64_t ul_tunnel_id, std::string from, std::string to);
    void redirect_edge_service_dl_flow(fluid_base::OFConnection* of_conn, uint64_t flow_id, std::string UE_ip, uint64_t dl_tunnel_id, std::string ENB_ip, std::string from, std::string to);
    void get_flow_stats(fluid_base::OFConnection* of_conn, uint32_t xid, uint8_t table_id, uint64_t cookie, uint64_t cookie_mask);
    void flush_flow(fluid_base::OFConnection* of_conn, uint64_t flow_id);
};

} // namespace eps
} // namespace core
} // namespace llmec
#endif
