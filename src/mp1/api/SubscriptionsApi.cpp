/**
* Mp1 API
* The ETSI MEC ISG MEC011 Application Enablement API described using OpenAPI
*
* The version of the OpenAPI document: 1.1.1
* Contact: cti_support@etsi.org
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "SubscriptionsApi.h"
#include "Helpers.h"

namespace llmec {
namespace mp1 {
namespace api {

using namespace llmec::mp1::helpers;
using namespace llmec::mp1::model;

SubscriptionsApi::SubscriptionsApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
}

void SubscriptionsApi::init() {
    setupRoutes();
}

void SubscriptionsApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Delete(*router, base + "/applications/:appInstanceId/subscriptions/:subscriptionType/:subscriptionId", Routes::bind(&SubscriptionsApi::applications_subscription_delete_handler, this));
    /**
     * @api {Delete} /applications/:appInstanceId/subscriptions/:subscriptionType/:subscriptionId Delete a subscription
     * @apiName DeleteApplicationSubscription
     * @apiGroup Mp1Subscriptions
     * @apiParam {String} appInstanceId Id of the ME application.
     * @apiParam {String} subscriptionId Id of the subscription.
     * @apiExample Example usage:
     *     curl -X DELETE http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/subscriptions/AppTerminationNotificationSubscription/subscriptionappInstanceId1appTermination1
     * @apiSuccessExample Success-Response:
     *     HTTP/1.1 200 OK
     *
     *
     */

    Routes::Get(*router, base + "/applications/:appInstanceId/subscriptions/:subscriptionType/:subscriptionId", Routes::bind(&SubscriptionsApi::applications_subscription_get_handler, this));
    /**
     * @api {Get} /applications/:appInstanceId/subscriptions/:subscriptionType/:subscriptionId Retrieve information about a subscription for one specific app instance
     * @apiName GetApplicationSubscription
     * @apiGroup Mp1Subscriptions
     * @apiParam {String} appInstanceId Id of the ME application.
     * @apiParam {String} subscriptionType Represents a subscription type to the notifications from the ME platform (AppTerminationNotificationSubscription or SerAvailabilityNotificationSubscription).
     * @apiParam {String} subscriptionId Id of the subscription.
     * @apiExample Example usage:
     *     curl -X GET http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/subscriptions/AppTerminationNotificationSubscription/subscriptionappInstanceId1appTermination1
     * @apiSuccessExample Success-Response:
     *     HTTP/1.1 200 OK
     *
     *     {"_links":{"self":{"href":"/mp1/v1/applications/appInstanceId1"}},"appInstanceId":"appInstanceId1","callbackReference":"http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/notifications/","subscriptionType":"AppTerminationNotificationSubscription"}
     *
     *
     */

    Routes::Get(*router, base + "/applications/:appInstanceId/subscriptions", Routes::bind(&SubscriptionsApi::applications_subscriptions_get_handler, this));
    /**
     * @api {Get} /applications/:appInstanceId/subscriptions Retrieve information about all subscriptions for one specific app instance
     * @apiName GetApplicationSubscriptions
     * @apiGroup Mp1Subscriptions
     * @apiParam {String} appInstanceId Id of the ME application.
     * @apiExample Example usage:
     *     curl -X GET http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/subscriptions
     * @apiSuccessExample Success-Response:
     *     HTTP/1.1 200 OK
     *
     *     {"_links":{"self":"127.0.0.1:8888/applications/appInstanceId1/subscriptions","subscription":[{"href":"127.0.0.1:8888/applications/appInstanceId1/subscriptions/SerAvailabilityNotificationSubscription/subscriptionappInstanceId1serAvailability1","rel":"SerAvailabilityNotificationSubscription"},{"href":"127.0.0.1:8888/applications/appInstanceId1/subscriptions/AppTerminationNotificationSubscription/subscriptionappInstanceId1appTermination2","rel":"AppTerminationNotificationSubscription"}]}}
     *
     *
     */
    Routes::Post(*router, base + "/applications/:appInstanceId/subscriptions", Routes::bind(&SubscriptionsApi::applications_subscriptions_post_handler, this));
    /**
     * @api {post} /applications/:appInstanceId/subscriptions  Create a subscription
     * @apiName SubscribeApplicationSubscription
     * @apiGroup Mp1Subscriptions
     * @apiParam {String} appInstanceId Id of the ME application.
     * @apiDescription Ceate a new subscription to the ME service availability notifications (SerAvailabilityNotificationSubscription) or the ME application termination notifications (AppTerminationNotificationSubscription).
     * @apiParam {SerAvailabilityNotificationSubscription} SerAvailabilityNotificationSubscription subscription to the ME service availability notifications.
     * @apiParam {AppTerminationNotificationSubscription} AppTerminationNotificationSubscription subscription to the ME application termination notifications.
     *
     * @apiExample {curl} Example usage:
     *     curl -X POST http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/subscriptions -d '{"subscriptionType":"SerAvailabilityNotificationSubscription", "callbackReference":"http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/notifications/", "_links":{"self":{"href":"mp1/v1/applications/appInstanceId1"}},"filteringCriteria":{"serCategory":{"href":"catRNI","id":"RNI1","name":"RNI","version":"version1"},"serName":"PLMN Information","serializer":"JSON","state":null,"transportInfo":{"description":"REST API","endpoint":{"addresses":[{"host":"127.0.0.1","port":8888}],"uris":["mp1/v1/queries/plmn_info"]},"id":"TransId1","name":"REST","protocol":"HTTP","security":{"oAuth2Info":{"grantTypes":["OAUTH2_CLIENT_CREDENTIALS"],"tokenEndpoint":"/mp1/v1/security/TokenEndPoint"}},"type":"REST_HTTP","version":"2.0"},"version":"ServiceVersion1"}}'
     *     curl -X POST http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/subscriptions -d '{"subscriptionType":"AppTerminationNotificationSubscription", "callbackReference":"http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/notifications/", "_links":{"self":{"href":"mp1/v1/applications/appInstanceId1"}}, "appInstanceId":"appInstanceId1"}'
     *
     * @apiSuccessExample Success-Response:
     *     HTTP/1.1 200 OK
     *     {"_links":{"self":{"href":"mp1/v1/applications/appInstanceId1"}},"callbackReference":"http://127.0.0.1:8888/mp1/v1/applications/appInstanceId1/notifications/","filteringCriteria":{"serCategory":{"href":"catRNI","id":"RNI1","name":"RNI","version":"version1"},"serName":"PLMN Information","serializer":"JSON","state":null,"transportInfo":{"description":"REST API","endpoint":{"addresses":[{"host":"127.0.0.1","port":8888}],"uris":["mp1/v1/queries/plmn_info"]},"id":"TransId1","name":"REST","protocol":"HTTP","security":{"oAuth2Info":{"grantTypes":["OAUTH2_CLIENT_CREDENTIALS"],"tokenEndpoint":"/mp1/v1/security/TokenEndPoint"}},"type":"REST_HTTP","version":"2.0"},"version":"ServiceVersion1"},"subscriptionType":"SerAvailabilityNotificationSubscription"}
     *
     */

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&SubscriptionsApi::subscriptions_api_default_handler, this));
}

void SubscriptionsApi::applications_subscription_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto appInstanceId = request.param(":appInstanceId").as<std::string>();
    auto subscriptionType = request.param(":subscriptionType").as<std::string>();
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->applications_subscription_delete(appInstanceId, subscriptionType, subscriptionId, response);
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
void SubscriptionsApi::applications_subscription_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto appInstanceId = request.param(":appInstanceId").as<std::string>();
    auto subscriptionType = request.param(":subscriptionType").as<std::string>();
    auto subscriptionId = request.param(":subscriptionId").as<std::string>();
    
    try {
      this->applications_subscription_get(appInstanceId, subscriptionType, subscriptionId, response);
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
void SubscriptionsApi::applications_subscriptions_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto appInstanceId = request.param(":appInstanceId").as<std::string>();
    
    try {
      this->applications_subscriptions_get(appInstanceId, response);
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
void SubscriptionsApi::applications_subscriptions_post_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto appInstanceId = request.param(":appInstanceId").as<std::string>();
    
    // Getting the body param
    NotificationSubscription body;
    
    try {
      nlohmann::json::parse(request.body()).get_to(body);
      if (body.getSubscriptionType() == "AppTerminationNotificationSubscription"){
    	  AppTerminationNotificationSubscription appTerminationNotificationSubscription;
    	  nlohmann::json::parse(request.body()).get_to(appTerminationNotificationSubscription);
    	  this->applications_subscriptions_post(appInstanceId, appTerminationNotificationSubscription, response);
      } else if (body.getSubscriptionType() == "SerAvailabilityNotificationSubscription"){
    	  SerAvailabilityNotificationSubscription serAvailabilityNotificationSubscription;
    	  nlohmann::json::parse(request.body()).get_to(serAvailabilityNotificationSubscription);
    	  this->applications_subscriptions_post(appInstanceId, serAvailabilityNotificationSubscription, response);
      }

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

void SubscriptionsApi::subscriptions_api_default_handler(const Pistache::Rest::Request &, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
