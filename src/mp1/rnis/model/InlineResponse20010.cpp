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


#include "InlineResponse20010.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Inline_response_200_10::Inline_response_200_10()
{
    
}

Inline_response_200_10::~Inline_response_200_10()
{
}

void Inline_response_200_10::validate()
{
    // TODO: implement validation
}

nlohmann::json Inline_response_200_10::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["CaReConfSubscription"] = ModelBase::toJson(m_CaReConfSubscription);
    

    return val;
}

void Inline_response_200_10::fromJson(const nlohmann::json& val)
{
    
}


CaReConfSubscription Inline_response_200_10::getCaReConfSubscription() const
{
    return m_CaReConfSubscription;
}
void Inline_response_200_10::setCaReConfSubscription(CaReConfSubscription const& value)
{
    m_CaReConfSubscription = value;
    
}

}
}
}
}

