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


#include "MeasRepUeSubscription.h"

namespace llmec {
namespace mp1 {
namespace model {

MeasRepUeSubscription::MeasRepUeSubscription()
{
    m_CallbackReference = "";
    m_ExpiryDeadlineIsSet = false;
    
}

MeasRepUeSubscription::~MeasRepUeSubscription()
{
}

void MeasRepUeSubscription::validate()
{
    // TODO: implement validation
}

nlohmann::json MeasRepUeSubscription::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["callbackReference"] = ModelBase::toJson(m_CallbackReference);
    val["_links"] = ModelBase::toJson(m__links);
    val["filterCriteria"] = ModelBase::toJson(m_FilterCriteria);
    if(m_ExpiryDeadlineIsSet)
    {
        val["expiryDeadline"] = ModelBase::toJson(m_ExpiryDeadline);
    }
    

    return val;
}

void MeasRepUeSubscription::fromJson(const nlohmann::json& val)
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


std::string MeasRepUeSubscription::getCallbackReference() const
{
    return m_CallbackReference;
}
void MeasRepUeSubscription::setCallbackReference(std::string const& value)
{
    m_CallbackReference = value;
    
}
Link MeasRepUeSubscription::getLinks() const
{
    return m__links;
}
void MeasRepUeSubscription::setLinks(Link const& value)
{
    m__links = value;
    
}
FilterCriteriaAssocTri MeasRepUeSubscription::getFilterCriteria() const
{
    return m_FilterCriteria;
}
void MeasRepUeSubscription::setFilterCriteria(FilterCriteriaAssocTri const& value)
{
    m_FilterCriteria = value;
    
}
TimeStamp MeasRepUeSubscription::getExpiryDeadline() const
{
    return m_ExpiryDeadline;
}
void MeasRepUeSubscription::setExpiryDeadline(TimeStamp const& value)
{
    m_ExpiryDeadline = value;
    m_ExpiryDeadlineIsSet = true;
}
bool MeasRepUeSubscription::expiryDeadlineIsSet() const
{
    return m_ExpiryDeadlineIsSet;
}
void MeasRepUeSubscription::unsetExpiryDeadline()
{
    m_ExpiryDeadlineIsSet = false;
}

}
}
}

