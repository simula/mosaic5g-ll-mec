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


#include "InlineResponse2013.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Inline_response_201_3::Inline_response_201_3()
{
    m_MeasRepUeSubscriptionIsSet = false;
    
}

Inline_response_201_3::~Inline_response_201_3()
{
}

void Inline_response_201_3::validate()
{
    // TODO: implement validation
}

nlohmann::json Inline_response_201_3::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_MeasRepUeSubscriptionIsSet)
    {
        val["MeasRepUeSubscription"] = ModelBase::toJson(m_MeasRepUeSubscription);
    }
    

    return val;
}

void Inline_response_201_3::fromJson(const nlohmann::json& val)
{
    if(val.find("MeasRepUeSubscription") != val.end())
    {
        if(!val["MeasRepUeSubscription"].is_null())
        {
            MeasRepUeSubscription newItem;
            newItem.fromJson(val["MeasRepUeSubscription"]);
            setMeasRepUeSubscription( newItem );
        }
        
    }
    
}


MeasRepUeSubscription Inline_response_201_3::getMeasRepUeSubscription() const
{
    return m_MeasRepUeSubscription;
}
void Inline_response_201_3::setMeasRepUeSubscription(MeasRepUeSubscription const& value)
{
    m_MeasRepUeSubscription = value;
    m_MeasRepUeSubscriptionIsSet = true;
}
bool Inline_response_201_3::measRepUeSubscriptionIsSet() const
{
    return m_MeasRepUeSubscriptionIsSet;
}
void Inline_response_201_3::unsetMeasRepUeSubscription()
{
    m_MeasRepUeSubscriptionIsSet = false;
}

}
}
}
}
