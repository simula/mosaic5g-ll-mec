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


#include "Mp1Traffic.h"

namespace llmec {
namespace mp1 {
namespace model {

Mp1_traffic::Mp1_traffic()
{
    m_Url = "";
    m_Mec_ipaddr = "";
    m_Mec_macaddr = "";
    m_Type = 0;
    
}

Mp1_traffic::~Mp1_traffic()
{
}

void Mp1_traffic::validate()
{
    // TODO: implement validation
}

nlohmann::json Mp1_traffic::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["url"] = ModelBase::toJson(m_Url);
    val["mec_ipaddr"] = ModelBase::toJson(m_Mec_ipaddr);
    val["mec_macaddr"] = ModelBase::toJson(m_Mec_macaddr);
    val["type"] = m_Type;
    

    return val;
}

void Mp1_traffic::fromJson(const nlohmann::json& val)
{
    setUrl(val.at("url"));
    setMecIpaddr(val.at("mec_ipaddr"));
    setMecMacaddr(val.at("mec_macaddr"));
    setType(val.at("type"));
    
}


std::string Mp1_traffic::getUrl() const
{
    return m_Url;
}
void Mp1_traffic::setUrl(std::string const& value)
{
    m_Url = value;
    
}
std::string Mp1_traffic::getMecIpaddr() const
{
    return m_Mec_ipaddr;
}
void Mp1_traffic::setMecIpaddr(std::string const& value)
{
    m_Mec_ipaddr = value;
    
}
std::string Mp1_traffic::getMecMacaddr() const
{
    return m_Mec_macaddr;
}
void Mp1_traffic::setMecMacaddr(std::string const& value)
{
    m_Mec_macaddr = value;
    
}
int32_t Mp1_traffic::getType() const
{
    return m_Type;
}
void Mp1_traffic::setType(int32_t const value)
{
    m_Type = value;
    
}

}
}
}

