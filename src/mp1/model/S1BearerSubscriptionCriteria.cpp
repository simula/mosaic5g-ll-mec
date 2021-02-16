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


#include "S1BearerSubscriptionCriteria.h"

namespace llmec {
namespace mp1 {
namespace model {

S1BearerSubscriptionCriteria::S1BearerSubscriptionCriteria()
{
    m_AssociateIdIsSet = false;
    m_PlmnIsSet = false;
    m_CellIdIsSet = false;
    m_ErabId = 0;
    m_ErabIdIsSet = false;
    
}

S1BearerSubscriptionCriteria::~S1BearerSubscriptionCriteria()
{
}

void S1BearerSubscriptionCriteria::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const S1BearerSubscriptionCriteria& o)
{
    j = nlohmann::json();
    if(o.associateIdIsSet())
        j["associateId"] = o.m_AssociateId;
    if(o.plmnIsSet())
        j["plmn"] = o.m_Plmn;
    if(o.cellIdIsSet())
        j["cellId"] = o.m_CellId;
    if(o.erabIdIsSet())
        j["erabId"] = o.m_ErabId;
}

void from_json(const nlohmann::json& j, S1BearerSubscriptionCriteria& o)
{
    if(j.contains("associateId"))
    {
        j.at("associateId").get_to(o.m_AssociateId);
        o.m_AssociateIdIsSet = true;
    } 
    if(j.contains("plmn"))
    {
        j.at("plmn").get_to(o.m_Plmn);
        o.m_PlmnIsSet = true;
    } 
    if(j.contains("cellId"))
    {
        j.at("cellId").get_to(o.m_CellId);
        o.m_CellIdIsSet = true;
    } 
    if(j.contains("erabId"))
    {
        j.at("erabId").get_to(o.m_ErabId);
        o.m_ErabIdIsSet = true;
    } 
}

AssociateId S1BearerSubscriptionCriteria::getAssociateId() const
{
    return m_AssociateId;
}
void S1BearerSubscriptionCriteria::setAssociateId(AssociateId const& value)
{
    m_AssociateId = value;
    m_AssociateIdIsSet = true;
}
bool S1BearerSubscriptionCriteria::associateIdIsSet() const
{
    return m_AssociateIdIsSet;
}
void S1BearerSubscriptionCriteria::unsetAssociateId()
{
    m_AssociateIdIsSet = false;
}
Plmn S1BearerSubscriptionCriteria::getPlmn() const
{
    return m_Plmn;
}
void S1BearerSubscriptionCriteria::setPlmn(Plmn const& value)
{
    m_Plmn = value;
    m_PlmnIsSet = true;
}
bool S1BearerSubscriptionCriteria::plmnIsSet() const
{
    return m_PlmnIsSet;
}
void S1BearerSubscriptionCriteria::unsetPlmn()
{
    m_PlmnIsSet = false;
}
std::vector<std::string>& S1BearerSubscriptionCriteria::getCellId()
{
    return m_CellId;
}
bool S1BearerSubscriptionCriteria::cellIdIsSet() const
{
    return m_CellIdIsSet;
}
void S1BearerSubscriptionCriteria::unsetCellId()
{
    m_CellIdIsSet = false;
}
int32_t S1BearerSubscriptionCriteria::getErabId() const
{
    return m_ErabId;
}
void S1BearerSubscriptionCriteria::setErabId(int32_t const value)
{
    m_ErabId = value;
    m_ErabIdIsSet = true;
}
bool S1BearerSubscriptionCriteria::erabIdIsSet() const
{
    return m_ErabIdIsSet;
}
void S1BearerSubscriptionCriteria::unsetErabId()
{
    m_ErabIdIsSet = false;
}

}
}
}

