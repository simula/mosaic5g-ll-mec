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


#include "Ecgi.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Ecgi::Ecgi()
{
    
}

Ecgi::~Ecgi()
{
}

void Ecgi::validate()
{
    // TODO: implement validation
}

nlohmann::json Ecgi::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["plmn"] = ModelBase::toJson(m_Plmn);
    {
        nlohmann::json jsonArray;
        for( const auto& item : m_CellId )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["cellId"] = jsonArray;
        
    }
    

    return val;
}

void Ecgi::fromJson(const nlohmann::json& val)
{
    {
        m_CellId.clear();
                    for( const auto& item : val["cellId"] )
            {
                
                if(item.is_null())
                {
                    m_CellId.push_back( std::string() );
                }
                else
                {
                    std::string newItem;
                    //newItem.fromJson(item);
                    m_CellId.push_back( newItem );
                }
                
            }
    }
    
}


Plmn Ecgi::getPlmn() const
{
    return m_Plmn;
}
void Ecgi::setPlmn(Plmn const& value)
{
    m_Plmn = value;
    
}
std::vector<std::string>& Ecgi::getCellId()
{
    return m_CellId;
}

}
}
}
}

