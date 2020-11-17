/**
* Mp1 API
* The ETSI MEC ISG MEC011 Application Enablement API described using OpenAPI
*
* The version of the OpenAPI document: 1.1.1
* Contact: cti_support@etsi.org
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "Self.h"

namespace llmec {
namespace mp1 {
namespace model {

Self::Self()
{
    
}

Self::~Self()
{
}

void Self::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const Self& o)
{
    j = nlohmann::json();
    j["self"] = o.m_Self;
}

void from_json(const nlohmann::json& j, Self& o)
{
    j.at("self").get_to(o.m_Self);
}

LinkType Self::getSelf() const
{
    return m_Self;
}
void Self::setSelf(LinkType const& value)
{
    m_Self = value;
    
}

}
}
}
