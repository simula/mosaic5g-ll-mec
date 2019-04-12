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


#include "InlineResponse2006.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Inline_response_200_6::Inline_response_200_6()
{
    
}

Inline_response_200_6::~Inline_response_200_6()
{
}

void Inline_response_200_6::validate()
{
    // TODO: implement validation
}

nlohmann::json Inline_response_200_6::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["MeasRepUeSubscription"] = ModelBase::toJson(m_MeasRepUeSubscription);
    

    return val;
}

void Inline_response_200_6::fromJson(const nlohmann::json& val)
{
    
}


MeasRepUeSubscription Inline_response_200_6::getMeasRepUeSubscription() const
{
    return m_MeasRepUeSubscription;
}
void Inline_response_200_6::setMeasRepUeSubscription(MeasRepUeSubscription const& value)
{
    m_MeasRepUeSubscription = value;
    
}

}
}
}
}
