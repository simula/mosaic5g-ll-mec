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


#include "CategoryRef.h"

namespace llmec {
namespace mp1 {
namespace model {

CategoryRef::CategoryRef()
{
    m_Href = "";
    m_Id = "";
    m_Name = "";
    m_Version = "";
    
}

CategoryRef::~CategoryRef()
{
}

void CategoryRef::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const CategoryRef& o)
{
    j = nlohmann::json();
    j["href"] = o.m_Href;
    j["id"] = o.m_Id;
    j["name"] = o.m_Name;
    j["version"] = o.m_Version;
}

void from_json(const nlohmann::json& j, CategoryRef& o)
{
    j.at("href").get_to(o.m_Href);
    j.at("id").get_to(o.m_Id);
    j.at("name").get_to(o.m_Name);
    j.at("version").get_to(o.m_Version);
}

std::string CategoryRef::getHref() const
{
    return m_Href;
}
void CategoryRef::setHref(std::string const& value)
{
    m_Href = value;
    
}
std::string CategoryRef::getId() const
{
    return m_Id;
}
void CategoryRef::setId(std::string const& value)
{
    m_Id = value;
    
}
std::string CategoryRef::getName() const
{
    return m_Name;
}
void CategoryRef::setName(std::string const& value)
{
    m_Name = value;
    
}
std::string CategoryRef::getVersion() const
{
    return m_Version;
}
void CategoryRef::setVersion(std::string const& value)
{
    m_Version = value;
    
}

}
}
}

