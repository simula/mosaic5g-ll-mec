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


#include "S1UeInfo.h"

namespace llmec {
namespace mp1 {
namespace model {

S1UeInfo::S1UeInfo()
{
    m_AssociateIdIsSet = false;
    
}

S1UeInfo::~S1UeInfo()
{
}

void S1UeInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json S1UeInfo::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    {
        nlohmann::json jsonArray;
        for( const auto& item : m_TempUeId )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["tempUeId"] = jsonArray;
        
    }
    {
        nlohmann::json jsonArray;
        for( const auto& item : m_AssociateId )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["associateId"] = jsonArray;
        } 
    }
    {
        nlohmann::json jsonArray;
        for( const auto& item : m_Ecgi )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["ecgi"] = jsonArray;
        
    }
    {
        nlohmann::json jsonArray;
        for( const auto& item : m_S1BearerInfoDetailed )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["s1BearerInfoDetailed"] = jsonArray;
        
    }
    

    return val;
}

void S1UeInfo::fromJson(const nlohmann::json& val)
{
    {
        m_TempUeId.clear();
                    for( const auto& item : val["tempUeId"] )
            {
                
                if(item.is_null())
                {
                    m_TempUeId.push_back( TempUeId() );
                }
                else
                {
                    TempUeId newItem;
                    newItem.fromJson(item);
                    m_TempUeId.push_back( newItem );
                }
                
            }
    }
    {
        m_AssociateId.clear();
        if(val.find("associateId") != val.end())
        {
            for( const auto& item : val["associateId"] )
            {
                
                if(item.is_null())
                {
                    m_AssociateId.push_back( AssociateId() );
                }
                else
                {
                    AssociateId newItem;
                    newItem.fromJson(item);
                    m_AssociateId.push_back( newItem );
                }
                
            }
        }
    }
    {
        m_Ecgi.clear();
                    for( const auto& item : val["ecgi"] )
            {
                
                if(item.is_null())
                {
                    m_Ecgi.push_back( Ecgi() );
                }
                else
                {
                    Ecgi newItem;
                    newItem.fromJson(item);
                    m_Ecgi.push_back( newItem );
                }
                
            }
    }
    {
        m_S1BearerInfoDetailed.clear();
                    for( const auto& item : val["s1BearerInfoDetailed"] )
            {
                
                if(item.is_null())
                {
                    m_S1BearerInfoDetailed.push_back( S1BearerInfoDetailed() );
                }
                else
                {
                    S1BearerInfoDetailed newItem;
                    newItem.fromJson(item);
                    m_S1BearerInfoDetailed.push_back( newItem );
                }
                
            }
    }
    
}


std::vector<TempUeId>& S1UeInfo::getTempUeId()
{
    return m_TempUeId;
}
std::vector<AssociateId>& S1UeInfo::getAssociateId()
{
    return m_AssociateId;
}
bool S1UeInfo::associateIdIsSet() const
{
    return m_AssociateIdIsSet;
}
void S1UeInfo::unsetAssociateId()
{
    m_AssociateIdIsSet = false;
}
std::vector<Ecgi>& S1UeInfo::getEcgi()
{
    return m_Ecgi;
}
std::vector<S1BearerInfoDetailed>& S1UeInfo::getS1BearerInfoDetailed()
{
    return m_S1BearerInfoDetailed;
}

}
}
}

