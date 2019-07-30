/**
* MP1 API
* The ETSI MEC ISG MEC012 Radio Network Information API, AND The ETSI MEC ISG MEC011 Application Enablement API
* AND some additional MEC APIs described using OpenAPI
*
* The version of the OpenAPI document: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ServicesApi.h
 *
 * 
 */

#ifndef ServicesApi_H_
#define ServicesApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "ProblemDetails.h"
#include "ServiceInfo.h"
#include "ServiceInfo_Post.h"
#include "SubscriptionLinkList.h"
#include <string>
#include <curl/curl.h>

namespace llmec {
namespace mp1 {
namespace api {

using namespace llmec::mp1::model;

class  ServicesApi {
public:
	ServicesApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~ServicesApi() {}
    void init();
    const std::string base = "/mp1/v1";

private:
    void setupRoutes();

    void services_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void services_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void services_service_id_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void services_service_id_put_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;


    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// This method retrieves information about a list of meService resources. This method is typically used in \&quot;service availability query\&quot; procedure
    /// </remarks>
    /// <param name="serInstanceId">A mobile edge application instance may use multiple ser_instance_ids as an input parameter to query the availability of a list of mobile edge service instances. Either \&quot;ser_instance_id\&quot; or \&quot;ser_name\&quot; or \&quot;ser_category_id\&quot; or none of them shall be present. (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="serName">A mobile edge application instance may use multiple ser_names as an input parameter to query the availability of a list of mobile edge service instances. Either \&quot;ser_instance_id\&quot; or \&quot;ser_name\&quot; or \&quot;ser_category_id\&quot; or none of them shall be present. (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="serCategoryId">A mobile edge application instance may use ser_category_id as an input parameter to query the availability of a list of mobile edge service instances in a serCategory. Either \&quot;ser_instance_id\&quot; or \&quot;ser_name\&quot; or \&quot;ser_category_id\&quot; or none of them shall be present. (optional, default to &quot;&quot;)</param>
    virtual void services_get(const Pistache::Optional<std::vector<std::string>> &serInstanceId, const Pistache::Optional<std::vector<std::string>> &serName, const Pistache::Optional<std::string> &serCategoryId, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// This method is used to create a meService resource. This method is typically used in \&quot;service availability update and new service registration\&quot; procedure
    /// </remarks>
    /// <param name="serviceInfoPost">New ServiceInfo with updated \&quot;state\&quot; is included as entity body of the request</param>
    virtual void services_post(const ServiceInfo_Post &serviceInfoPost, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// This method retrieves information about a meService resource. This method is typically used in \&quot;service availability query\&quot; procedure
    /// </remarks>
    /// <param name="serviceId">Represents a mobile edge service instance.</param>
    virtual void services_service_id_get(const std::string &serviceId, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// This method updates the information about a meService resource
    /// </remarks>
    /// <param name="serviceId">Represents a mobile edge service instance.</param>
    /// <param name="serviceInfo">New ServiceInfo with updated \&quot;state\&quot; is included as entity body of the request</param>
    virtual void services_service_id_put(const std::string &serviceId, const ServiceInfo &serviceInfo, Pistache::Http::ResponseWriter &response) = 0;


};

}
}
}

#endif /* ServicesApi_H_ */

