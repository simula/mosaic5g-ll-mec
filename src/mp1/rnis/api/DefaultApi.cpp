/**
* RNI API
* The ETSI MEC ISG MEC012 Radio Network Information API described using OpenAPI
*
* OpenAPI spec version: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "DefaultApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

DefaultApi::DefaultApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
};

void DefaultApi::init() {
    setupRoutes();
}

void DefaultApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(*router, base + "/subscriptions/ca_reconf/:subscriptionId", Routes::bind(&DefaultApi::ca_re_conf_subscription_subscriptions_get_handler, this));
    Routes::Post(*router, base + "/subscriptions/ca_reconf", Routes::bind(&DefaultApi::ca_re_conf_subscription_subscriptions_post_handler, this));
    Routes::Put(*router, base + "/subscriptions/ca_reconf/:subscriptionId", Routes::bind(&DefaultApi::ca_re_conf_subscription_subscriptions_put_handler, this));
    Routes::Delete(*router, base + "/subscriptions/ca_reconf/:subscriptionId", Routes::bind(&DefaultApi::ca_re_conf_subscriptions_subscr_id_delete_handler, this));
    Routes::Get(*router, base + "/subscriptions/cell_change/:subscriptionId", Routes::bind(&DefaultApi::cell_change_subscriptions_get_handler, this));
    Routes::Post(*router, base + "/subscriptions/cell_change", Routes::bind(&DefaultApi::cell_change_subscriptions_post_handler, this));
    Routes::Put(*router, base + "/subscriptions/cell_change/:subscriptionId", Routes::bind(&DefaultApi::cell_change_subscriptions_put_handler, this));
    Routes::Delete(*router, base + "/subscriptions/cell_change/:subscriptionId", Routes::bind(&DefaultApi::cell_change_subscriptions_subscr_id_delete_handler, this));
    Routes::Put(*router, base + "/subscriptions/meas_rep_ue/:subscriptionId", Routes::bind(&DefaultApi::meas_rep_ue_report_subscriptions_put_handler, this));
    Routes::Get(*router, base + "/subscriptions/meas_rep_ue/:subscriptionId", Routes::bind(&DefaultApi::meas_rep_ue_subscriptions_get_handler, this));
    Routes::Post(*router, base + "/subscriptions/meas_rep_ue", Routes::bind(&DefaultApi::meas_rep_ue_subscriptions_post_handler, this));
    Routes::Delete(*router, base + "/subscriptions/meas_rep_ue/:subscriptionId", Routes::bind(&DefaultApi::meas_rep_ue_subscriptions_subscr_id_delete_handler, this));
    Routes::Get(*router, base + "/subscriptions/ta/:subscriptionId", Routes::bind(&DefaultApi::meas_ta_subscriptions_get_handler, this));
    Routes::Post(*router, base + "/subscriptions/ta", Routes::bind(&DefaultApi::meas_ta_subscriptions_post_handler, this));
    Routes::Put(*router, base + "/subscriptions/ta/:subscriptionId", Routes::bind(&DefaultApi::meas_ta_subscriptions_put_handler, this));
    Routes::Delete(*router, base + "/subscriptions/ta/:subscriptionId", Routes::bind(&DefaultApi::meas_ta_subscriptions_subscr_id_delete_handler, this));
    Routes::Get(*router, base + "/queries/plmn_info", Routes::bind(&DefaultApi::plmn_info_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/rab_est/:subscriptionId", Routes::bind(&DefaultApi::rab_est_subscription_subscriptions_get_handler, this));
    Routes::Post(*router, base + "/subscriptions/rab_est", Routes::bind(&DefaultApi::rab_est_subscription_subscriptions_post_handler, this));
    Routes::Put(*router, base + "/subscriptions/rab_est/:subscriptionId", Routes::bind(&DefaultApi::rab_est_subscription_subscriptions_put_handler, this));
    Routes::Delete(*router, base + "/subscriptions/rab_est/:subscriptionId", Routes::bind(&DefaultApi::rab_est_subscriptions_subscr_id_delete_handler, this));
    Routes::Get(*router, base + "/queries/rab_info", Routes::bind(&DefaultApi::rab_info_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/rab_mod/:subscriptionId", Routes::bind(&DefaultApi::rab_mod_subscription_subscriptions_get_handler, this));
    Routes::Post(*router, base + "/subscriptions/rab_mod", Routes::bind(&DefaultApi::rab_mod_subscription_subscriptions_post_handler, this));
    Routes::Put(*router, base + "/subscriptions/rab_mod/:subscriptionId", Routes::bind(&DefaultApi::rab_mod_subscription_subscriptions_put_handler, this));
    Routes::Delete(*router, base + "/subscriptions/rab_mod/:subscriptionId", Routes::bind(&DefaultApi::rab_mod_subscriptions_subscr_id_delete_handler, this));
    Routes::Get(*router, base + "/subscriptions/rab_rel/:subscriptionId", Routes::bind(&DefaultApi::rab_rel_subscription_subscriptions_get_handler, this));
    Routes::Post(*router, base + "/subscriptions/rab_rel", Routes::bind(&DefaultApi::rab_rel_subscription_subscriptions_post_handler, this));
    Routes::Put(*router, base + "/subscriptions/rab_rel/:subscriptionId", Routes::bind(&DefaultApi::rab_rel_subscription_subscriptions_put_handler, this));
    Routes::Delete(*router, base + "/subscriptions/rab_rel/:subscriptionId", Routes::bind(&DefaultApi::rab_rel_subscriptions_subscr_id_delete_handler, this));
    Routes::Get(*router, base + "/queries/s1_bearer_info", Routes::bind(&DefaultApi::s1_bearer_info_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/s1_bearer/:subscriptionId", Routes::bind(&DefaultApi::s1_bearer_subscription_subscriptions_get_handler, this));
    Routes::Post(*router, base + "/subscriptions/s1_bearer", Routes::bind(&DefaultApi::s1_bearer_subscription_subscriptions_post_handler, this));
    Routes::Put(*router, base + "/subscriptions/s1_bearer/:subscriptionId", Routes::bind(&DefaultApi::s1_bearer_subscription_subscriptions_put_handler, this));
    Routes::Delete(*router, base + "/subscriptions/s1_bearer/:subscriptionId", Routes::bind(&DefaultApi::s1_bearer_subscriptions_subscr_id_delete_handler, this));
    Routes::Get(*router, base + "/subscriptions/cell_change", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_cc_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/ca_reconf", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_cr_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/meas_rep_ue", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_mr_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/rab_est", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_re_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/rab_mod", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_rm_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/rab_rel", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_rr_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/s1_bearer", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_s1_get_handler, this));
    Routes::Get(*router, base + "/subscriptions/ta", Routes::bind(&DefaultApi::subscription_link_list_subscriptions_ta_get_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&DefaultApi::default_api_default_handler, this));
}

void DefaultApi::ca_re_conf_subscription_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->ca_re_conf_subscription_subscriptions_get(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::ca_re_conf_subscription_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    Inline_object_14 inlineObject14;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject14.fromJson(request_body);
    
      this->ca_re_conf_subscription_subscriptions_post(inlineObject14, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::ca_re_conf_subscription_subscriptions_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    // Getting the body param
    
    Inline_object_15 inlineObject15;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject15.fromJson(request_body);
    
      this->ca_re_conf_subscription_subscriptions_put(subscriptionId, inlineObject15, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::ca_re_conf_subscriptions_subscr_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->ca_re_conf_subscriptions_subscr_id_delete(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::cell_change_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->cell_change_subscriptions_get(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::cell_change_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    Inline_object inlineObject;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject.fromJson(request_body);
    
      this->cell_change_subscriptions_post(inlineObject, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::cell_change_subscriptions_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    // Getting the body param
    
    Inline_object_1 inlineObject1;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject1.fromJson(request_body);
    
      this->cell_change_subscriptions_put(subscriptionId, inlineObject1, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::cell_change_subscriptions_subscr_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->cell_change_subscriptions_subscr_id_delete(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::meas_rep_ue_report_subscriptions_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    // Getting the body param
    
    Inline_object_7 inlineObject7;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject7.fromJson(request_body);
    
      this->meas_rep_ue_report_subscriptions_put(subscriptionId, inlineObject7, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::meas_rep_ue_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->meas_rep_ue_subscriptions_get(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::meas_rep_ue_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    Inline_object_6 inlineObject6;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject6.fromJson(request_body);
    
      this->meas_rep_ue_subscriptions_post(inlineObject6, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::meas_rep_ue_subscriptions_subscr_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->meas_rep_ue_subscriptions_subscr_id_delete(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::meas_ta_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->meas_ta_subscriptions_get(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::meas_ta_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    Inline_object_4 inlineObject4;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject4.fromJson(request_body);
    
      this->meas_ta_subscriptions_post(inlineObject4, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::meas_ta_subscriptions_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    // Getting the body param
    
    Inline_object_5 inlineObject5;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject5.fromJson(request_body);
    
      this->meas_ta_subscriptions_put(subscriptionId, inlineObject5, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::meas_ta_subscriptions_subscr_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->meas_ta_subscriptions_subscr_id_delete(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::plmn_info_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto appInsIdQuery = request.query().get("app_ins_id");
    Pistache::Optional<std::vector<std::string>> appInsId;
    if(!appInsIdQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(appInsIdQuery.get(), value)){
            appInsId = Pistache::Some(value);
        }
    }
    
    try {
      this->plmn_info_get(appInsId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_est_subscription_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->rab_est_subscription_subscriptions_get(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_est_subscription_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    Inline_object_8 inlineObject8;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject8.fromJson(request_body);
    
      this->rab_est_subscription_subscriptions_post(inlineObject8, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_est_subscription_subscriptions_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    // Getting the body param
    
    Inline_object_9 inlineObject9;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject9.fromJson(request_body);
    
      this->rab_est_subscription_subscriptions_put(subscriptionId, inlineObject9, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_est_subscriptions_subscr_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->rab_est_subscriptions_subscr_id_delete(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_info_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto appInsIdQuery = request.query().get("app_ins_id");
    Pistache::Optional<std::string> appInsId;
    if(!appInsIdQuery.isEmpty()){
        std::string value;
        if(fromStringValue(appInsIdQuery.get(), value)){
            appInsId = Pistache::Some(value);
        }
    }
    auto cellIdQuery = request.query().get("cell_id");
    Pistache::Optional<std::vector<std::string>> cellId;
    if(!cellIdQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(cellIdQuery.get(), value)){
            cellId = Pistache::Some(value);
        }
    }
    auto ueIpv4AddressQuery = request.query().get("ue_ipv4_address");
    Pistache::Optional<std::vector<std::string>> ueIpv4Address;
    if(!ueIpv4AddressQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(ueIpv4AddressQuery.get(), value)){
            ueIpv4Address = Pistache::Some(value);
        }
    }
    auto ueIpv6AddressQuery = request.query().get("ue_ipv6_address");
    Pistache::Optional<std::vector<std::string>> ueIpv6Address;
    if(!ueIpv6AddressQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(ueIpv6AddressQuery.get(), value)){
            ueIpv6Address = Pistache::Some(value);
        }
    }
    auto natedIpAddressQuery = request.query().get("nated_ip_address");
    Pistache::Optional<std::vector<std::string>> natedIpAddress;
    if(!natedIpAddressQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(natedIpAddressQuery.get(), value)){
            natedIpAddress = Pistache::Some(value);
        }
    }
    auto gtpTeidQuery = request.query().get("gtp_teid");
    Pistache::Optional<std::vector<std::string>> gtpTeid;
    if(!gtpTeidQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(gtpTeidQuery.get(), value)){
            gtpTeid = Pistache::Some(value);
        }
    }
    auto erabIdQuery = request.query().get("erab_id");
    Pistache::Optional<int32_t> erabId;
    if(!erabIdQuery.isEmpty()){
        int32_t value;
        if(fromStringValue(erabIdQuery.get(), value)){
            erabId = Pistache::Some(value);
        }
    }
    auto qciQuery = request.query().get("qci");
    Pistache::Optional<int32_t> qci;
    if(!qciQuery.isEmpty()){
        int32_t value;
        if(fromStringValue(qciQuery.get(), value)){
            qci = Pistache::Some(value);
        }
    }
    auto erabGbrDlQuery = request.query().get("erab_gbr_dl");
    Pistache::Optional<int32_t> erabGbrDl;
    if(!erabGbrDlQuery.isEmpty()){
        int32_t value;
        if(fromStringValue(erabGbrDlQuery.get(), value)){
            erabGbrDl = Pistache::Some(value);
        }
    }
    auto erabGbrUlQuery = request.query().get("erab_gbr_ul");
    Pistache::Optional<int32_t> erabGbrUl;
    if(!erabGbrUlQuery.isEmpty()){
        int32_t value;
        if(fromStringValue(erabGbrUlQuery.get(), value)){
            erabGbrUl = Pistache::Some(value);
        }
    }
    auto erabMbrDlQuery = request.query().get("erab_mbr_dl");
    Pistache::Optional<int32_t> erabMbrDl;
    if(!erabMbrDlQuery.isEmpty()){
        int32_t value;
        if(fromStringValue(erabMbrDlQuery.get(), value)){
            erabMbrDl = Pistache::Some(value);
        }
    }
    auto erabMbrUlQuery = request.query().get("erab_mbr_ul");
    Pistache::Optional<int32_t> erabMbrUl;
    if(!erabMbrUlQuery.isEmpty()){
        int32_t value;
        if(fromStringValue(erabMbrUlQuery.get(), value)){
            erabMbrUl = Pistache::Some(value);
        }
    }
    
    try {
      this->rab_info_get(appInsId, cellId, ueIpv4Address, ueIpv6Address, natedIpAddress, gtpTeid, erabId, qci, erabGbrDl, erabGbrUl, erabMbrDl, erabMbrUl, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_mod_subscription_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->rab_mod_subscription_subscriptions_get(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_mod_subscription_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    Inline_object_10 inlineObject10;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject10.fromJson(request_body);
    
      this->rab_mod_subscription_subscriptions_post(inlineObject10, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_mod_subscription_subscriptions_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    // Getting the body param
    
    Inline_object_11 inlineObject11;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject11.fromJson(request_body);
    
      this->rab_mod_subscription_subscriptions_put(subscriptionId, inlineObject11, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_mod_subscriptions_subscr_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->rab_mod_subscriptions_subscr_id_delete(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_rel_subscription_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->rab_rel_subscription_subscriptions_get(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_rel_subscription_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    Inline_object_12 inlineObject12;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject12.fromJson(request_body);
    
      this->rab_rel_subscription_subscriptions_post(inlineObject12, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_rel_subscription_subscriptions_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    // Getting the body param
    
    Inline_object_13 inlineObject13;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject13.fromJson(request_body);
    
      this->rab_rel_subscription_subscriptions_put(subscriptionId, inlineObject13, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::rab_rel_subscriptions_subscr_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->rab_rel_subscriptions_subscr_id_delete(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::s1_bearer_info_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto tempUeIdQuery = request.query().get("temp_ue_id");
    Pistache::Optional<std::vector<std::string>> tempUeId;
    if(!tempUeIdQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(tempUeIdQuery.get(), value)){
            tempUeId = Pistache::Some(value);
        }
    }
    auto ueIpv4AddressQuery = request.query().get("ue_ipv4_address");
    Pistache::Optional<std::vector<std::string>> ueIpv4Address;
    if(!ueIpv4AddressQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(ueIpv4AddressQuery.get(), value)){
            ueIpv4Address = Pistache::Some(value);
        }
    }
    auto ueIpv6AddressQuery = request.query().get("ue_ipv6_address");
    Pistache::Optional<std::vector<std::string>> ueIpv6Address;
    if(!ueIpv6AddressQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(ueIpv6AddressQuery.get(), value)){
            ueIpv6Address = Pistache::Some(value);
        }
    }
    auto natedIpAddressQuery = request.query().get("nated_ip_address");
    Pistache::Optional<std::vector<std::string>> natedIpAddress;
    if(!natedIpAddressQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(natedIpAddressQuery.get(), value)){
            natedIpAddress = Pistache::Some(value);
        }
    }
    auto gtpTeidQuery = request.query().get("gtp_teid");
    Pistache::Optional<std::vector<std::string>> gtpTeid;
    if(!gtpTeidQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(gtpTeidQuery.get(), value)){
            gtpTeid = Pistache::Some(value);
        }
    }
    auto cellIdQuery = request.query().get("cell_id");
    Pistache::Optional<std::vector<std::string>> cellId;
    if(!cellIdQuery.isEmpty()){
        std::vector<std::string> value;
        if(fromStringValue(cellIdQuery.get(), value)){
            cellId = Pistache::Some(value);
        }
    }
    auto erabIdQuery = request.query().get("erab_id");
    Pistache::Optional<std::vector<int32_t>> erabId;
    if(!erabIdQuery.isEmpty()){
        std::vector<int32_t> value;
        if(fromStringValue(erabIdQuery.get(), value)){
            erabId = Pistache::Some(value);
        }
    }
    
    try {
      this->s1_bearer_info_get(tempUeId, ueIpv4Address, ueIpv6Address, natedIpAddress, gtpTeid, cellId, erabId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::s1_bearer_subscription_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->s1_bearer_subscription_subscriptions_get(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::s1_bearer_subscription_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    Inline_object_2 inlineObject2;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject2.fromJson(request_body);
    
      this->s1_bearer_subscription_subscriptions_post(inlineObject2, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::s1_bearer_subscription_subscriptions_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    // Getting the body param
    
    Inline_object_3 inlineObject3;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      inlineObject3.fromJson(request_body);
    
      this->s1_bearer_subscription_subscriptions_put(subscriptionId, inlineObject3, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::s1_bearer_subscriptions_subscr_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->s1_bearer_subscriptions_subscr_id_delete(subscriptionId, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_cc_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_cc_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_cr_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_cr_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_mr_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_mr_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_re_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_re_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_rm_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_rm_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_rr_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_rr_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_s1_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_s1_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void DefaultApi::subscription_link_list_subscriptions_ta_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->subscription_link_list_subscriptions_ta_get(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void DefaultApi::default_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}

