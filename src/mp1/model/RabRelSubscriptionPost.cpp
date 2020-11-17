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


#include "RabRelSubscriptionPost.h"

namespace llmec {
namespace mp1 {
namespace model {

RabRelSubscriptionPost::RabRelSubscriptionPost()
{
    m_CallbackReference = "";
    m_ExpiryDeadlineIsSet = false;
    
}

RabRelSubscriptionPost::~RabRelSubscriptionPost()
{
}

void RabRelSubscriptionPost::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const RabRelSubscriptionPost& o)
{
    j = nlohmann::json();
    j["callbackReference"] = o.m_CallbackReference;
    j["filterCriteria"] = o.m_FilterCriteria;
    if(o.expiryDeadlineIsSet())
        j["expiryDeadline"] = o.m_ExpiryDeadline;
}

void from_json(const nlohmann::json& j, RabRelSubscriptionPost& o)
{
    j.at("callbackReference").get_to(o.m_CallbackReference);
    j.at("filterCriteria").get_to(o.m_FilterCriteria);
    if(j.contains("expiryDeadline"))
    {
        j.at("expiryDeadline").get_to(o.m_ExpiryDeadline);
        o.m_ExpiryDeadlineIsSet = true;
    } 
}

std::string RabRelSubscriptionPost::getCallbackReference() const
{
    return m_CallbackReference;
}
void RabRelSubscriptionPost::setCallbackReference(std::string const& value)
{
    m_CallbackReference = value;
    
}
FilterCriteriaAssocQci RabRelSubscriptionPost::getFilterCriteria() const
{
    return m_FilterCriteria;
}
void RabRelSubscriptionPost::setFilterCriteria(FilterCriteriaAssocQci const& value)
{
    m_FilterCriteria = value;
    
}
TimeStamp RabRelSubscriptionPost::getExpiryDeadline() const
{
    return m_ExpiryDeadline;
}
void RabRelSubscriptionPost::setExpiryDeadline(TimeStamp const& value)
{
    m_ExpiryDeadline = value;
    m_ExpiryDeadlineIsSet = true;
}
bool RabRelSubscriptionPost::expiryDeadlineIsSet() const
{
    return m_ExpiryDeadlineIsSet;
}
void RabRelSubscriptionPost::unsetExpiryDeadline()
{
    m_ExpiryDeadlineIsSet = false;
}

}
}
}
