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

nlohmann::json RabRelSubscriptionPost::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["callbackReference"] = ModelBase::toJson(m_CallbackReference);
    val["filterCriteria"] = ModelBase::toJson(m_FilterCriteria);
    if(m_ExpiryDeadlineIsSet)
    {
        val["expiryDeadline"] = ModelBase::toJson(m_ExpiryDeadline);
    }
    

    return val;
}

void RabRelSubscriptionPost::fromJson(const nlohmann::json& val)
{
    setCallbackReference(val.at("callbackReference"));
    if(val.find("expiryDeadline") != val.end())
    {
        if(!val["expiryDeadline"].is_null())
        {
            TimeStamp newItem;
            newItem.fromJson(val["expiryDeadline"]);
            setExpiryDeadline( newItem );
        }
        
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

