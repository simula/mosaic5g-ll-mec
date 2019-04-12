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

#include "InlineObject.h"
#include "InlineObject1.h"
#include "InlineObject10.h"
#include "InlineObject11.h"
#include "InlineObject12.h"
#include "InlineObject13.h"
#include "InlineObject14.h"
#include "InlineObject15.h"
#include "InlineObject2.h"
#include "InlineObject3.h"
#include "InlineObject4.h"
#include "InlineObject5.h"
#include "InlineObject6.h"
#include "InlineObject7.h"
#include "InlineObject8.h"
#include "InlineObject9.h"
#include "InlineResponse200.h"
#include "InlineResponse2001.h"
#include "InlineResponse20010.h"
#include "InlineResponse2002.h"
#include "InlineResponse2003.h"
#include "InlineResponse2004.h"
#include "InlineResponse2005.h"
#include "InlineResponse2006.h"
#include "InlineResponse2007.h"
#include "InlineResponse2008.h"
#include "InlineResponse2009.h"
#include "InlineResponse201.h"
#include "InlineResponse2011.h"
#include "InlineResponse2012.h"
#include "InlineResponse2013.h"
#include "InlineResponse2014.h"
#include "InlineResponse2015.h"
#include "InlineResponse2016.h"
#include "InlineResponse2017.h"
#include "InlineResponse400.h"
#include "InlineResponse403.h"
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

    void ca_re_conf_subscription_subscriptions_get(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void ca_re_conf_subscription_subscriptions_post(const Inline_object_14 &inlineObject14, Pistache::Http::ResponseWriter &response);
    void ca_re_conf_subscription_subscriptions_put(const std::string &subscriptionId, const Inline_object_15 &inlineObject15, Pistache::Http::ResponseWriter &response);
    void ca_re_conf_subscriptions_subscr_id_delete(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void cell_change_subscriptions_get(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void cell_change_subscriptions_post(const Inline_object &inlineObject, Pistache::Http::ResponseWriter &response);
    void cell_change_subscriptions_put(const std::string &subscriptionId, const Inline_object_1 &inlineObject1, Pistache::Http::ResponseWriter &response);
    void cell_change_subscriptions_subscr_id_delete(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void meas_rep_ue_report_subscriptions_put(const std::string &subscriptionId, const Inline_object_7 &inlineObject7, Pistache::Http::ResponseWriter &response);
    void meas_rep_ue_subscriptions_get(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void meas_rep_ue_subscriptions_post(const Inline_object_6 &inlineObject6, Pistache::Http::ResponseWriter &response);
    void meas_rep_ue_subscriptions_subscr_id_delete(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void meas_ta_subscriptions_get(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void meas_ta_subscriptions_post(const Inline_object_4 &inlineObject4, Pistache::Http::ResponseWriter &response);
    void meas_ta_subscriptions_put(const std::string &subscriptionId, const Inline_object_5 &inlineObject5, Pistache::Http::ResponseWriter &response);
    void meas_ta_subscriptions_subscr_id_delete(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void plmn_info_get(const Pistache::Optional<std::vector<std::string>> &appInsId, Pistache::Http::ResponseWriter &response);
    void rab_est_subscription_subscriptions_get(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void rab_est_subscription_subscriptions_post(const Inline_object_8 &inlineObject8, Pistache::Http::ResponseWriter &response);
    void rab_est_subscription_subscriptions_put(const std::string &subscriptionId, const Inline_object_9 &inlineObject9, Pistache::Http::ResponseWriter &response);
    void rab_est_subscriptions_subscr_id_delete(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void rab_info_get(const Pistache::Optional<std::string> &appInsId, const Pistache::Optional<std::vector<std::string>> &cellId, const Pistache::Optional<std::vector<std::string>> &ueIpv4Address, const Pistache::Optional<std::vector<std::string>> &ueIpv6Address, const Pistache::Optional<std::vector<std::string>> &natedIpAddress, const Pistache::Optional<std::vector<std::string>> &gtpTeid, const Pistache::Optional<int32_t> &erabId, const Pistache::Optional<int32_t> &qci, const Pistache::Optional<int32_t> &erabGbrDl, const Pistache::Optional<int32_t> &erabGbrUl, const Pistache::Optional<int32_t> &erabMbrDl, const Pistache::Optional<int32_t> &erabMbrUl, Pistache::Http::ResponseWriter &response);
    void rab_mod_subscription_subscriptions_get(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void rab_mod_subscription_subscriptions_post(const Inline_object_10 &inlineObject10, Pistache::Http::ResponseWriter &response);
    void rab_mod_subscription_subscriptions_put(const std::string &subscriptionId, const Inline_object_11 &inlineObject11, Pistache::Http::ResponseWriter &response);
    void rab_mod_subscriptions_subscr_id_delete(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void rab_rel_subscription_subscriptions_get(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void rab_rel_subscription_subscriptions_post(const Inline_object_12 &inlineObject12, Pistache::Http::ResponseWriter &response);
    void rab_rel_subscription_subscriptions_put(const std::string &subscriptionId, const Inline_object_13 &inlineObject13, Pistache::Http::ResponseWriter &response);
    void rab_rel_subscriptions_subscr_id_delete(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void s1_bearer_info_get(const Pistache::Optional<std::vector<std::string>> &tempUeId, const Pistache::Optional<std::vector<std::string>> &ueIpv4Address, const Pistache::Optional<std::vector<std::string>> &ueIpv6Address, const Pistache::Optional<std::vector<std::string>> &natedIpAddress, const Pistache::Optional<std::vector<std::string>> &gtpTeid, const Pistache::Optional<std::vector<std::string>> &cellId, const Pistache::Optional<std::vector<int32_t>> &erabId, Pistache::Http::ResponseWriter &response);
    void s1_bearer_subscription_subscriptions_get(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void s1_bearer_subscription_subscriptions_post(const Inline_object_2 &inlineObject2, Pistache::Http::ResponseWriter &response);
    void s1_bearer_subscription_subscriptions_put(const std::string &subscriptionId, const Inline_object_3 &inlineObject3, Pistache::Http::ResponseWriter &response);
    void s1_bearer_subscriptions_subscr_id_delete(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_cc_get(Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_cr_get(Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_get(Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_mr_get(Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_re_get(Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_rm_get(Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_rr_get(Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_s1_get(Pistache::Http::ResponseWriter &response);
    void subscription_link_list_subscriptions_ta_get(Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif
