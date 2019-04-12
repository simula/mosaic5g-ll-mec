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


#include "PlmnInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PlmnInfo::PlmnInfo()
{
    m_TimeStampIsSet = false;
    m_AppInsId = "";
    
}

PlmnInfo::~PlmnInfo()
{
}

void PlmnInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json PlmnInfo::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_TimeStampIsSet)
    {
        val["timeStamp"] = ModelBase::toJson(m_TimeStamp);
    }
    val["appInsId"] = ModelBase::toJson(m_AppInsId);
    val["ecgi"] = ModelBase::toJson(m_Ecgi);
    

    return val;
}

void PlmnInfo::fromJson(const nlohmann::json& val)
{
    if(val.find("timeStamp") != val.end())
    {
        if(!val["timeStamp"].is_null())
        {
            TimeStamp newItem;
            newItem.fromJson(val["timeStamp"]);
            setTimeStamp( newItem );
        }
        
    }
    setAppInsId(val.at("appInsId"));
    
}


TimeStamp PlmnInfo::getTimeStamp() const
{
    return m_TimeStamp;
}
void PlmnInfo::setTimeStamp(TimeStamp const& value)
{
    m_TimeStamp = value;
    m_TimeStampIsSet = true;
}
bool PlmnInfo::timeStampIsSet() const
{
    return m_TimeStampIsSet;
}
void PlmnInfo::unsetTimeStamp()
{
    m_TimeStampIsSet = false;
}
std::string PlmnInfo::getAppInsId() const
{
    return m_AppInsId;
}
void PlmnInfo::setAppInsId(std::string const& value)
{
    m_AppInsId = value;
    
}
Ecgi PlmnInfo::getEcgi() const
{
    return m_Ecgi;
}
void PlmnInfo::setEcgi(Ecgi const& value)
{
    m_Ecgi = value;
    
}

}
}
}
}
