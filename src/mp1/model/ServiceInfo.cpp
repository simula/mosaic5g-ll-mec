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


#include "ServiceInfo.h"

namespace llmec {
namespace mp1 {
namespace model {

ServiceInfo::ServiceInfo()
{
    m_SerInstanceId = "";
    m_SerInstanceIdIsSet = false;
    m_SerName = "";
    m_SerCategoryIsSet = false;
    m_Version = "";
    
}

ServiceInfo::~ServiceInfo()
{
}

void ServiceInfo::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ServiceInfo& o)
{
    j = nlohmann::json();
    if(o.serInstanceIdIsSet())
        j["serInstanceId"] = o.m_SerInstanceId;
    j["serName"] = o.m_SerName;
    if(o.serCategoryIsSet())
        j["serCategory"] = o.m_SerCategory;
    j["version"] = o.m_Version;
    j["state"] = o.m_State;
    j["transportInfo"] = o.m_TransportInfo;
    j["serializer"] = o.m_Serializer;
}

void from_json(const nlohmann::json& j, ServiceInfo& o)
{
    if(j.contains("serInstanceId"))
    {
        j.at("serInstanceId").get_to(o.m_SerInstanceId);
        o.m_SerInstanceIdIsSet = true;
    } 
    j.at("serName").get_to(o.m_SerName);
    if(j.contains("serCategory"))
    {
        j.at("serCategory").get_to(o.m_SerCategory);
        o.m_SerCategoryIsSet = true;
    } 
    j.at("version").get_to(o.m_Version);
    j.at("state").get_to(o.m_State);
    j.at("transportInfo").get_to(o.m_TransportInfo);
    j.at("serializer").get_to(o.m_Serializer);
}

std::string ServiceInfo::getSerInstanceId() const
{
    return m_SerInstanceId;
}
void ServiceInfo::setSerInstanceId(std::string const& value)
{
    m_SerInstanceId = value;
    m_SerInstanceIdIsSet = true;
}
bool ServiceInfo::serInstanceIdIsSet() const
{
    return m_SerInstanceIdIsSet;
}
void ServiceInfo::unsetSerInstanceId()
{
    m_SerInstanceIdIsSet = false;
}
std::string ServiceInfo::getSerName() const
{
    return m_SerName;
}
void ServiceInfo::setSerName(std::string const& value)
{
    m_SerName = value;
    
}
CategoryRef ServiceInfo::getSerCategory() const
{
    return m_SerCategory;
}
void ServiceInfo::setSerCategory(CategoryRef const& value)
{
    m_SerCategory = value;
    m_SerCategoryIsSet = true;
}
bool ServiceInfo::serCategoryIsSet() const
{
    return m_SerCategoryIsSet;
}
void ServiceInfo::unsetSerCategory()
{
    m_SerCategoryIsSet = false;
}
std::string ServiceInfo::getVersion() const
{
    return m_Version;
}
void ServiceInfo::setVersion(std::string const& value)
{
    m_Version = value;
    
}
ServiceInfo_State ServiceInfo::getState() const
{
    return m_State;
}
void ServiceInfo::setState(ServiceInfo_State const& value)
{
    m_State = value;
    
}
TransportInfo ServiceInfo::getTransportInfo() const
{
    return m_TransportInfo;
}
void ServiceInfo::setTransportInfo(TransportInfo const& value)
{
    m_TransportInfo = value;
    
}
std::string ServiceInfo::getSerializer() const
{
    return m_Serializer;
}
void ServiceInfo::setSerializer(std::string const& value)
{
    m_Serializer = value;
    
}

}
}
}
