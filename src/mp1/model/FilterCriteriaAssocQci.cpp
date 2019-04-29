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


#include "FilterCriteriaAssocQci.h"

namespace llmec {
namespace mp1 {
namespace model {

FilterCriteriaAssocQci::FilterCriteriaAssocQci()
{
    m_AppInsId = "";
    m_AppInsIdIsSet = false;
    m_AssociateIdIsSet = false;
    m_PlmnIsSet = false;
    m_CellIdIsSet = false;
    m_Qci = 0;
    m_QciIsSet = false;
    
}

FilterCriteriaAssocQci::~FilterCriteriaAssocQci()
{
}

void FilterCriteriaAssocQci::validate()
{
    // TODO: implement validation
}

nlohmann::json FilterCriteriaAssocQci::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_AppInsIdIsSet)
    {
        val["appInsId"] = ModelBase::toJson(m_AppInsId);
    }
    if(m_AssociateIdIsSet)
    {
        val["associateId"] = ModelBase::toJson(m_AssociateId);
    }
    if(m_PlmnIsSet)
    {
        val["plmn"] = ModelBase::toJson(m_Plmn);
    }
    {
        nlohmann::json jsonArray;
        for( const auto& item : m_CellId )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["cellId"] = jsonArray;
        } 
    }
    if(m_QciIsSet)
    {
        val["qci"] = m_Qci;
    }
    

    return val;
}

void FilterCriteriaAssocQci::fromJson(const nlohmann::json& val)
{
    if(val.find("appInsId") != val.end())
    {
        setAppInsId(val.at("appInsId"));
    }
    if(val.find("associateId") != val.end())
    {
        if(!val["associateId"].is_null())
        {
            AssociateId newItem;
            newItem.fromJson(val["associateId"]);
            setAssociateId( newItem );
        }
        
    }
    if(val.find("plmn") != val.end())
    {
        if(!val["plmn"].is_null())
        {
            Plmn newItem;
            newItem.fromJson(val["plmn"]);
            setPlmn( newItem );
        }
        
    }
    {
        m_CellId.clear();
        if(val.find("cellId") != val.end())
        {
            for( const auto& item : val["cellId"] )
            {
                
                if(item.is_null())
                {
                    m_CellId.push_back( std::string() );
                }
                else
                {
                    m_CellId.push_back( item );
                }
                
            }
        }
    }
    if(val.find("qci") != val.end())
    {
        setQci(val.at("qci"));
    }
    
}


std::string FilterCriteriaAssocQci::getAppInsId() const
{
    return m_AppInsId;
}
void FilterCriteriaAssocQci::setAppInsId(std::string const& value)
{
    m_AppInsId = value;
    m_AppInsIdIsSet = true;
}
bool FilterCriteriaAssocQci::appInsIdIsSet() const
{
    return m_AppInsIdIsSet;
}
void FilterCriteriaAssocQci::unsetAppInsId()
{
    m_AppInsIdIsSet = false;
}
AssociateId FilterCriteriaAssocQci::getAssociateId() const
{
    return m_AssociateId;
}
void FilterCriteriaAssocQci::setAssociateId(AssociateId const& value)
{
    m_AssociateId = value;
    m_AssociateIdIsSet = true;
}
bool FilterCriteriaAssocQci::associateIdIsSet() const
{
    return m_AssociateIdIsSet;
}
void FilterCriteriaAssocQci::unsetAssociateId()
{
    m_AssociateIdIsSet = false;
}
Plmn FilterCriteriaAssocQci::getPlmn() const
{
    return m_Plmn;
}
void FilterCriteriaAssocQci::setPlmn(Plmn const& value)
{
    m_Plmn = value;
    m_PlmnIsSet = true;
}
bool FilterCriteriaAssocQci::plmnIsSet() const
{
    return m_PlmnIsSet;
}
void FilterCriteriaAssocQci::unsetPlmn()
{
    m_PlmnIsSet = false;
}
std::vector<std::string>& FilterCriteriaAssocQci::getCellId()
{
    return m_CellId;
}
bool FilterCriteriaAssocQci::cellIdIsSet() const
{
    return m_CellIdIsSet;
}
void FilterCriteriaAssocQci::unsetCellId()
{
    m_CellIdIsSet = false;
}
int32_t FilterCriteriaAssocQci::getQci() const
{
    return m_Qci;
}
void FilterCriteriaAssocQci::setQci(int32_t const value)
{
    m_Qci = value;
    m_QciIsSet = true;
}
bool FilterCriteriaAssocQci::qciIsSet() const
{
    return m_QciIsSet;
}
void FilterCriteriaAssocQci::unsetQci()
{
    m_QciIsSet = false;
}

}
}
}

