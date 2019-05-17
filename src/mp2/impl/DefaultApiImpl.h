/**
* BWM API
* The ETSI MEC ISG MEC015 Bandwidth Management API described using OpenAPI
*
* OpenAPI spec version: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* DefaultApiImpl.h
*
* 
*/

#ifndef DEFAULT_API_IMPL_H_
#define DEFAULT_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <DefaultApi.h>

#include <pistache/optional.h>

#include "BwInfo.h"
#include "BwInfoDeltas.h"
//#include "Object.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class DefaultApiImpl : public org::openapitools::server::api::DefaultApi {
public:
    DefaultApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~DefaultApiImpl() {}

    void bw_allocations_allocation_id_delete(const std::string &allocationId, Pistache::Http::ResponseWriter &response);
    void bw_allocations_allocation_id_get(const std::string &allocationId, Pistache::Http::ResponseWriter &response);
    void bw_allocations_allocation_id_patch(const std::string &allocationId, const BwInfoDeltas &bwInfoDeltas, Pistache::Http::ResponseWriter &response);
    void bw_allocations_allocation_id_put(const std::string &allocationId, const BwInfo &bwInfo, Pistache::Http::ResponseWriter &response);
    void bw_allocations_get(const Pistache::Optional<std::string> &appInsId, const Pistache::Optional<std::vector<std::string>> &applicationName, const Pistache::Optional<std::vector<std::string>> &sessionId, Pistache::Http::ResponseWriter &response);
    void bw_allocations_post(const BwInfo &bwInfo, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif