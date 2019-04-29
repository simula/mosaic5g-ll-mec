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


#include "FilterCriteriaAssocHo.h"

namespace llmec {
namespace mp1 {
namespace model {

FilterCriteriaAssocHo::FilterCriteriaAssocHo()
{
    m_AppInsId = "";
    m_AppInsIdIsSet = false;
    m_AssociateIdIsSet = false;
    m_PlmnIsSet = false;
    m_CellIdIsSet = false;
    m_HoStatusIsSet = false;
    
}

FilterCriteriaAssocHo::~FilterCriteriaAssocHo()
{
}

void FilterCriteriaAssocHo::validate()
{
    // TODO: implement validation
}

nlohmann::json FilterCriteriaAssocHo::toJson() const
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
    if(m_HoStatusIsSet)
    {
        val["hoStatus"] = ModelBase::toJson(m_HoStatus);
    }
    

    return val;
}

void FilterCriteriaAssocHo::fromJson(const nlohmann::json& val)
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
    if(val.find("hoStatus") != val.end())
    {
        if(!val["hoStatus"].is_null())
        {
            HoStatus newItem;
            newItem.fromJson(val["hoStatus"]);
            setHoStatus( newItem );
        }
        
    }
    
}


std::string FilterCriteriaAssocHo::getAppInsId() const
{
    return m_AppInsId;
}
void FilterCriteriaAssocHo::setAppInsId(std::string const& value)
{
    m_AppInsId = value;
    m_AppInsIdIsSet = true;
}
bool FilterCriteriaAssocHo::appInsIdIsSet() const
{
    return m_AppInsIdIsSet;
}
void FilterCriteriaAssocHo::unsetAppInsId()
{
    m_AppInsIdIsSet = false;
}
AssociateId FilterCriteriaAssocHo::getAssociateId() const
{
    return m_AssociateId;
}
void FilterCriteriaAssocHo::setAssociateId(AssociateId const& value)
{
    m_AssociateId = value;
    m_AssociateIdIsSet = true;
}
bool FilterCriteriaAssocHo::associateIdIsSet() const
{
    return m_AssociateIdIsSet;
}
void FilterCriteriaAssocHo::unsetAssociateId()
{
    m_AssociateIdIsSet = false;
}
Plmn FilterCriteriaAssocHo::getPlmn() const
{
    return m_Plmn;
}
void FilterCriteriaAssocHo::setPlmn(Plmn const& value)
{
    m_Plmn = value;
    m_PlmnIsSet = true;
}
bool FilterCriteriaAssocHo::plmnIsSet() const
{
    return m_PlmnIsSet;
}
void FilterCriteriaAssocHo::unsetPlmn()
{
    m_PlmnIsSet = false;
}
std::vector<std::string>& FilterCriteriaAssocHo::getCellId()
{
    return m_CellId;
}
bool FilterCriteriaAssocHo::cellIdIsSet() const
{
    return m_CellIdIsSet;
}
void FilterCriteriaAssocHo::unsetCellId()
{
    m_CellIdIsSet = false;
}
HoStatus FilterCriteriaAssocHo::getHoStatus() const
{
    return m_HoStatus;
}
void FilterCriteriaAssocHo::setHoStatus(HoStatus const& value)
{
    m_HoStatus = value;
    m_HoStatusIsSet = true;
}
bool FilterCriteriaAssocHo::hoStatusIsSet() const
{
    return m_HoStatusIsSet;
}
void FilterCriteriaAssocHo::unsetHoStatus()
{
    m_HoStatusIsSet = false;
}

}
}
}

