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


#include "ImsiList.h"

namespace llmec {
namespace mp1 {
namespace model {

Imsi_list::Imsi_list()
{
    m_Result = 0;
    m_ResultIsSet = false;
    m_Ue_listIsSet = false;
    m_Port = 0;
    m_PortIsSet = false;
    m_Transport = 0;
    m_TransportIsSet = false;
    m_Service_ip = "";
    m_Service_ipIsSet = false;
    m_Mec_ipaddr = "";
    m_Mec_ipaddrIsSet = false;
    m_Mec_macaddr = "";
    m_Mec_macaddrIsSet = false;
    m_X_type = 0;
    m_X_typeIsSet = false;
    
}

Imsi_list::~Imsi_list()
{
}

void Imsi_list::validate()
{
    // TODO: implement validation
}

nlohmann::json Imsi_list::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_ResultIsSet)
    {
        val["result"] = m_Result;
    }
    {
        nlohmann::json jsonArray;
        for( const auto& item : m_Ue_list )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["ue_list"] = jsonArray;
        } 
    }
    if(m_PortIsSet)
    {
        val["port"] = m_Port;
    }
    if(m_TransportIsSet)
    {
        val["transport"] = m_Transport;
    }
    if(m_Service_ipIsSet)
    {
        val["service_ip"] = ModelBase::toJson(m_Service_ip);
    }
    if(m_Mec_ipaddrIsSet)
    {
        val["mec_ipaddr"] = ModelBase::toJson(m_Mec_ipaddr);
    }
    if(m_Mec_macaddrIsSet)
    {
        val["mec_macaddr"] = ModelBase::toJson(m_Mec_macaddr);
    }
    if(m_X_typeIsSet)
    {
        val["x-type"] = m_X_type;
    }
    

    return val;
}

void Imsi_list::fromJson(const nlohmann::json& val)
{
    if(val.find("result") != val.end())
    {
        setResult(val.at("result"));
    }
    {
        m_Ue_list.clear();
        if(val.find("ue_list") != val.end())
        {
            for( const auto& item : val["ue_list"] )
            {
                m_Ue_list.push_back(item);
                
            }
        }
    }
    if(val.find("port") != val.end())
    {
        setPort(val.at("port"));
    }
    if(val.find("transport") != val.end())
    {
        setTransport(val.at("transport"));
    }
    if(val.find("service_ip") != val.end())
    {
        setServiceIp(val.at("service_ip"));
    }
    if(val.find("mec_ipaddr") != val.end())
    {
        setMecIpaddr(val.at("mec_ipaddr"));
    }
    if(val.find("mec_macaddr") != val.end())
    {
        setMecMacaddr(val.at("mec_macaddr"));
    }
    if(val.find("x-type") != val.end())
    {
        setXType(val.at("x-type"));
    }
    
}


int32_t Imsi_list::getResult() const
{
    return m_Result;
}
void Imsi_list::setResult(int32_t const value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool Imsi_list::resultIsSet() const
{
    return m_ResultIsSet;
}
void Imsi_list::unsetResult()
{
    m_ResultIsSet = false;
}
std::vector<std::string>& Imsi_list::getUeList()
{
    return m_Ue_list;
}
bool Imsi_list::ueListIsSet() const
{
    return m_Ue_listIsSet;
}
void Imsi_list::unsetUe_list()
{
    m_Ue_listIsSet = false;
}
int32_t Imsi_list::getPort() const
{
    return m_Port;
}
void Imsi_list::setPort(int32_t const value)
{
    m_Port = value;
    m_PortIsSet = true;
}
bool Imsi_list::portIsSet() const
{
    return m_PortIsSet;
}
void Imsi_list::unsetPort()
{
    m_PortIsSet = false;
}
int32_t Imsi_list::getTransport() const
{
    return m_Transport;
}
void Imsi_list::setTransport(int32_t const value)
{
    m_Transport = value;
    m_TransportIsSet = true;
}
bool Imsi_list::transportIsSet() const
{
    return m_TransportIsSet;
}
void Imsi_list::unsetTransport()
{
    m_TransportIsSet = false;
}
std::string Imsi_list::getServiceIp() const
{
    return m_Service_ip;
}
void Imsi_list::setServiceIp(std::string const& value)
{
    m_Service_ip = value;
    m_Service_ipIsSet = true;
}
bool Imsi_list::serviceIpIsSet() const
{
    return m_Service_ipIsSet;
}
void Imsi_list::unsetService_ip()
{
    m_Service_ipIsSet = false;
}
std::string Imsi_list::getMecIpaddr() const
{
    return m_Mec_ipaddr;
}
void Imsi_list::setMecIpaddr(std::string const& value)
{
    m_Mec_ipaddr = value;
    m_Mec_ipaddrIsSet = true;
}
bool Imsi_list::mecIpaddrIsSet() const
{
    return m_Mec_ipaddrIsSet;
}
void Imsi_list::unsetMec_ipaddr()
{
    m_Mec_ipaddrIsSet = false;
}
std::string Imsi_list::getMecMacaddr() const
{
    return m_Mec_macaddr;
}
void Imsi_list::setMecMacaddr(std::string const& value)
{
    m_Mec_macaddr = value;
    m_Mec_macaddrIsSet = true;
}
bool Imsi_list::mecMacaddrIsSet() const
{
    return m_Mec_macaddrIsSet;
}
void Imsi_list::unsetMec_macaddr()
{
    m_Mec_macaddrIsSet = false;
}
int32_t Imsi_list::getXType() const
{
    return m_X_type;
}
void Imsi_list::setXType(int32_t const value)
{
    m_X_type = value;
    m_X_typeIsSet = true;
}
bool Imsi_list::xTypeIsSet() const
{
    return m_X_typeIsSet;
}
void Imsi_list::unsetX_type()
{
    m_X_typeIsSet = false;
}

}
}
}
