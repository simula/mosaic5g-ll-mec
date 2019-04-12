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


#include "MeasTaSubscriptionPost.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

MeasTaSubscriptionPost::MeasTaSubscriptionPost()
{
    m_CallbackReference = "";
    m_ExpiryDeadlineIsSet = false;
    
}

MeasTaSubscriptionPost::~MeasTaSubscriptionPost()
{
}

void MeasTaSubscriptionPost::validate()
{
    // TODO: implement validation
}

nlohmann::json MeasTaSubscriptionPost::toJson() const
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

void MeasTaSubscriptionPost::fromJson(const nlohmann::json& val)
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


std::string MeasTaSubscriptionPost::getCallbackReference() const
{
    return m_CallbackReference;
}
void MeasTaSubscriptionPost::setCallbackReference(std::string const& value)
{
    m_CallbackReference = value;
    
}
FilterCriteriaAssoc MeasTaSubscriptionPost::getFilterCriteria() const
{
    return m_FilterCriteria;
}
void MeasTaSubscriptionPost::setFilterCriteria(FilterCriteriaAssoc const& value)
{
    m_FilterCriteria = value;
    
}
TimeStamp MeasTaSubscriptionPost::getExpiryDeadline() const
{
    return m_ExpiryDeadline;
}
void MeasTaSubscriptionPost::setExpiryDeadline(TimeStamp const& value)
{
    m_ExpiryDeadline = value;
    m_ExpiryDeadlineIsSet = true;
}
bool MeasTaSubscriptionPost::expiryDeadlineIsSet() const
{
    return m_ExpiryDeadlineIsSet;
}
void MeasTaSubscriptionPost::unsetExpiryDeadline()
{
    m_ExpiryDeadlineIsSet = false;
}

}
}
}
}

