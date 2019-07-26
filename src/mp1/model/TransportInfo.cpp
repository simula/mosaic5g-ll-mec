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


#include "TransportInfo.h"

namespace llmec {
namespace mp1 {
namespace model {

TransportInfo::TransportInfo()
{
    m_Id = "";
    m_Name = "";
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Protocol = "";
    m_Version = "";
    m_ImplSpecificInfo = "";
    m_ImplSpecificInfoIsSet = false;
    
}

TransportInfo::~TransportInfo()
{
}

void TransportInfo::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const TransportInfo& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["name"] = o.m_Name;
    if(o.descriptionIsSet())
        j["description"] = o.m_Description;
    j["type"] = o.m_Type;
    j["protocol"] = o.m_Protocol;
    j["version"] = o.m_Version;
    j["endpoint"] = o.m_Endpoint;
    j["security"] = o.m_Security;
    if(o.implSpecificInfoIsSet())
        j["implSpecificInfo"] = o.m_ImplSpecificInfo;
}

void from_json(const nlohmann::json& j, TransportInfo& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("name").get_to(o.m_Name);
    if(j.contains("description"))
    {
        j.at("description").get_to(o.m_Description);
        o.m_DescriptionIsSet = true;
    } 
    j.at("type").get_to(o.m_Type);
    j.at("protocol").get_to(o.m_Protocol);
    j.at("version").get_to(o.m_Version);
    j.at("endpoint").get_to(o.m_Endpoint);
    j.at("security").get_to(o.m_Security);
    if(j.contains("implSpecificInfo"))
    {
        j.at("implSpecificInfo").get_to(o.m_ImplSpecificInfo);
        o.m_ImplSpecificInfoIsSet = true;
    } 
}

std::string TransportInfo::getId() const
{
    return m_Id;
}
void TransportInfo::setId(std::string const& value)
{
    m_Id = value;
    
}
std::string TransportInfo::getName() const
{
    return m_Name;
}
void TransportInfo::setName(std::string const& value)
{
    m_Name = value;
    
}
std::string TransportInfo::getDescription() const
{
    return m_Description;
}
void TransportInfo::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool TransportInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void TransportInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::string TransportInfo::getType() const
{
    return m_Type;
}
void TransportInfo::setType(std::string const& value)
{
    m_Type = value;
    
}
std::string TransportInfo::getProtocol() const
{
    return m_Protocol;
}
void TransportInfo::setProtocol(std::string const& value)
{
    m_Protocol = value;
    
}
std::string TransportInfo::getVersion() const
{
    return m_Version;
}
void TransportInfo::setVersion(std::string const& value)
{
    m_Version = value;
    
}
EndPointInfo_All TransportInfo::getEndpoint() const
{
    return m_Endpoint;
}
void TransportInfo::setEndpoint(EndPointInfo_All const& value)
{
    m_Endpoint = value;
    
}
SecurityInfo TransportInfo::getSecurity() const
{
    return m_Security;
}
void TransportInfo::setSecurity(SecurityInfo const& value)
{
    m_Security = value;
    
}
std::string TransportInfo::getImplSpecificInfo() const
{
    return m_ImplSpecificInfo;
}
void TransportInfo::setImplSpecificInfo(std::string const& value)
{
    m_ImplSpecificInfo = value;
    m_ImplSpecificInfoIsSet = true;
}
bool TransportInfo::implSpecificInfoIsSet() const
{
    return m_ImplSpecificInfoIsSet;
}
void TransportInfo::unsetImplSpecificInfo()
{
    m_ImplSpecificInfoIsSet = false;
}

}
}
}
