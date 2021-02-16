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


#include "ProblemDetails.h"

namespace llmec {
namespace mp1 {
namespace model {

ProblemDetails::ProblemDetails()
{
    m_Type = "";
    m_TypeIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Status = 0;
    m_StatusIsSet = false;
    m_Detail = "";
    m_DetailIsSet = false;
    m_Instance = "";
    m_InstanceIsSet = false;
    
}

ProblemDetails::~ProblemDetails()
{
}

void ProblemDetails::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ProblemDetails& o)
{
    j = nlohmann::json();
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.titleIsSet())
        j["title"] = o.m_Title;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    if(o.detailIsSet())
        j["detail"] = o.m_Detail;
    if(o.instanceIsSet())
        j["instance"] = o.m_Instance;
}

void from_json(const nlohmann::json& j, ProblemDetails& o)
{
    if(j.contains("type"))
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(j.contains("title"))
    {
        j.at("title").get_to(o.m_Title);
        o.m_TitleIsSet = true;
    } 
    if(j.contains("status"))
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    if(j.contains("detail"))
    {
        j.at("detail").get_to(o.m_Detail);
        o.m_DetailIsSet = true;
    } 
    if(j.contains("instance"))
    {
        j.at("instance").get_to(o.m_Instance);
        o.m_InstanceIsSet = true;
    } 
}

std::string ProblemDetails::getType() const
{
    return m_Type;
}
void ProblemDetails::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool ProblemDetails::typeIsSet() const
{
    return m_TypeIsSet;
}
void ProblemDetails::unsetType()
{
    m_TypeIsSet = false;
}
std::string ProblemDetails::getTitle() const
{
    return m_Title;
}
void ProblemDetails::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ProblemDetails::titleIsSet() const
{
    return m_TitleIsSet;
}
void ProblemDetails::unsetTitle()
{
    m_TitleIsSet = false;
}
int32_t ProblemDetails::getStatus() const
{
    return m_Status;
}
void ProblemDetails::setStatus(int32_t const value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool ProblemDetails::statusIsSet() const
{
    return m_StatusIsSet;
}
void ProblemDetails::unsetStatus()
{
    m_StatusIsSet = false;
}
std::string ProblemDetails::getDetail() const
{
    return m_Detail;
}
void ProblemDetails::setDetail(std::string const& value)
{
    m_Detail = value;
    m_DetailIsSet = true;
}
bool ProblemDetails::detailIsSet() const
{
    return m_DetailIsSet;
}
void ProblemDetails::unsetDetail()
{
    m_DetailIsSet = false;
}
std::string ProblemDetails::getInstance() const
{
    return m_Instance;
}
void ProblemDetails::setInstance(std::string const& value)
{
    m_Instance = value;
    m_InstanceIsSet = true;
}
bool ProblemDetails::instanceIsSet() const
{
    return m_InstanceIsSet;
}
void ProblemDetails::unsetInstance()
{
    m_InstanceIsSet = false;
}

}
}
}

