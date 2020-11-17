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


#include "SubscriptionLinkList.h"

namespace llmec {
namespace mp1 {
namespace model {

SubscriptionLinkList::SubscriptionLinkList()
{
    m_SubscriptionIsSet = false;
    
}

SubscriptionLinkList::~SubscriptionLinkList()
{
}

void SubscriptionLinkList::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const SubscriptionLinkList& o)
{
    j = nlohmann::json();
    j["_links"] = o.m__links;
    if(o.subscriptionIsSet())
        j["subscription"] = o.m_Subscription;
}

void from_json(const nlohmann::json& j, SubscriptionLinkList& o)
{
    j.at("_links").get_to(o.m__links);
    if(j.contains("subscription"))
    {
        j.at("subscription").get_to(o.m_Subscription);
        o.m_SubscriptionIsSet = true;
    } 
}

Link SubscriptionLinkList::getLinks() const
{
    return m__links;
}
void SubscriptionLinkList::setLinks(Link const& value)
{
    m__links = value;
    
}
std::vector<Subscription>& SubscriptionLinkList::getSubscription()
{
    return m_Subscription;
}
bool SubscriptionLinkList::subscriptionIsSet() const
{
    return m_SubscriptionIsSet;
}
void SubscriptionLinkList::unsetSubscription()
{
    m_SubscriptionIsSet = false;
}

}
}
}
