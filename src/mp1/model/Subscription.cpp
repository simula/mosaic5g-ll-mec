/**
* RNI API
* The ETSI MEC ISG MEC012 Radio Network Information API described using OpenAPI AND som additional MEC APIs
*
* OpenAPI spec version: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "Subscription.h"

namespace llmec {
namespace mp1 {
namespace model {

Subscription::Subscription()
{
    m_Href = "";
    
}

Subscription::~Subscription()
{
}

void Subscription::validate()
{
    // TODO: implement validation
}

nlohmann::json Subscription::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["href"] = ModelBase::toJson(m_Href);
    val["subscriptionType"] = ModelBase::toJson(m_SubscriptionType);
    

    return val;
}

void Subscription::fromJson(const nlohmann::json& val)
{
    setHref(val.at("href"));
    
}


std::string Subscription::getHref() const
{
    return m_Href;
}
void Subscription::setHref(std::string const& value)
{
    m_Href = value;
    
}
SubscriptionType Subscription::getSubscriptionType() const
{
    return m_SubscriptionType;
}
void Subscription::setSubscriptionType(SubscriptionType const& value)
{
    m_SubscriptionType = value;
    
}

}
}
}
