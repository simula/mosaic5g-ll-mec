/**
* BWM API
* The ETSI MEC ISG MEC015 Bandwidth Management API described using OpenAPI
*
* The version of the OpenAPI document: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "BwManagementApi.h"
#include "Mp2Helpers.h"

namespace llmec {
namespace mp2 {
namespace api {

//using namespace llmec::mp2::helpers;
using namespace llmec::mp2::model;

BwManagementApi::BwManagementApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
}

void BwManagementApi::init() {
    setupRoutes();
}

void BwManagementApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Delete(*router, base + "/bw_allocations/:allocationId", Routes::bind(&BwManagementApi::bw_allocations_allocation_id_delete_handler, this));
    Routes::Get(*router, base + "/bw_allocations/:allocationId", Routes::bind(&BwManagementApi::bw_allocations_allocation_id_get_handler, this));
    Routes::Patch(*router, base + "/bw_allocations/:allocationId", Routes::bind(&BwManagementApi::bw_allocations_allocation_id_patch_handler, this));
    Routes::Put(*router, base + "/bw_allocations/:allocationId", Routes::bind(&BwManagementApi::bw_allocations_allocation_id_put_handler, this));
    Routes::Get(*router, base + "/bw_allocations", Routes::bind(&BwManagementApi::bw_allocations_get_handler, this));
    Routes::Post(*router, base + "/bw_allocations", Routes::bind(&BwManagementApi::bw_allocations_post_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&BwManagementApi::bw_management_api_default_handler, this));
}

void BwManagementApi::bw_allocations_allocation_id_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto allocationId = request.param(":allocationId").as<std::string>();
    
    try {
      this->bw_allocations_allocation_id_delete(allocationId, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void BwManagementApi::bw_allocations_allocation_id_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto allocationId = request.param(":allocationId").as<std::string>();
    
    try {
      this->bw_allocations_allocation_id_get(allocationId, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void BwManagementApi::bw_allocations_allocation_id_patch_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto allocationId = request.param(":allocationId").as<std::string>();
    
    // Getting the body param
    
    BwInfoDeltas bwInfoDeltas;
    
    try {
      nlohmann::json::parse(request.body()).get_to(bwInfoDeltas);
      this->bw_allocations_allocation_id_patch(allocationId, bwInfoDeltas, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void BwManagementApi::bw_allocations_allocation_id_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto allocationId = request.param(":allocationId").as<std::string>();
    
    // Getting the body param
    
    BwInfo bwInfo;
    
    try {
      nlohmann::json::parse(request.body()).get_to(bwInfo);
      this->bw_allocations_allocation_id_put(allocationId, bwInfo, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void BwManagementApi::bw_allocations_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto appInsIdQuery = request.query().get("app_ins_id");
    Pistache::Optional<std::string> appInsId;
    if(!appInsIdQuery.isEmpty()){
        std::string value;
        if(llmec::mp2::helpers::fromStringValue(appInsIdQuery.get(), value)){
            appInsId = Pistache::Some(value);
        }
    }
    auto applicationNameQuery = request.query().get("application_name");
    Pistache::Optional<std::vector<std::string>> applicationName;
    if(!applicationNameQuery.isEmpty()){
        std::vector<std::string> value;
        if(llmec::mp2::helpers::fromStringValue(applicationNameQuery.get(), value)){
            applicationName = Pistache::Some(value);
        }
    }
    auto sessionIdQuery = request.query().get("session_id");
    Pistache::Optional<std::vector<std::string>> sessionId;
    if(!sessionIdQuery.isEmpty()){
        std::vector<std::string> value;
        if(llmec::mp2::helpers::fromStringValue(sessionIdQuery.get(), value)){
            sessionId = Pistache::Some(value);
        }
    }
    
    try {
      this->bw_allocations_get(appInsId, applicationName, sessionId, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}
void BwManagementApi::bw_allocations_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param
    
    BwInfo bwInfo;
    
    try {
      nlohmann::json::parse(request.body()).get_to(bwInfo);
      this->bw_allocations_post(bwInfo, response);
    } catch (nlohmann::detail::exception &e) {
        //send a 400 error
        response.send(Pistache::Http::Code::Bad_Request, e.what());
        return;
    } catch (std::exception &e) {
        //send a 500 error
        response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
        return;
    }

}

void BwManagementApi::bw_management_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
