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
/*
 * Mp1SubscriptionLinkList.h
 *
 * This type represents a list of links related to currently existing subscriptions for a mobile edge application instance. This information is returned when sending a request to receive current subscriptions.
 */

#ifndef Mp1SubscriptionLinkList_H_
#define Mp1SubscriptionLinkList_H_

#include "Mp1SubscriptionLinkList_Links.h"
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// This type represents a list of links related to currently existing subscriptions for a mobile edge application instance. This information is returned when sending a request to receive current subscriptions.
/// </summary>
class  Mp1SubscriptionLinkList
{
public:
    Mp1SubscriptionLinkList();
    virtual ~Mp1SubscriptionLinkList();

    void validate();

    /////////////////////////////////////////////
    /// Mp1SubscriptionLinkList members

    /// <summary>
    /// 
    /// </summary>
    Mp1SubscriptionLinkList_Links getLinks() const;
    void setLinks(Mp1SubscriptionLinkList_Links const& value);
    
    friend void to_json(nlohmann::json& j, const Mp1SubscriptionLinkList& o);
    friend void from_json(const nlohmann::json& j, Mp1SubscriptionLinkList& o);
protected:
    Mp1SubscriptionLinkList_Links m__links;

};

}
}
}

#endif /* Mp1SubscriptionLinkList_H_ */