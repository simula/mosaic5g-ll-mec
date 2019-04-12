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


#include "InlineResponse2012.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Inline_response_201_2::Inline_response_201_2()
{
    m_MeasTaSubscriptionIsSet = false;
    
}

Inline_response_201_2::~Inline_response_201_2()
{
}

void Inline_response_201_2::validate()
{
    // TODO: implement validation
}

nlohmann::json Inline_response_201_2::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_MeasTaSubscriptionIsSet)
    {
        val["MeasTaSubscription"] = ModelBase::toJson(m_MeasTaSubscription);
    }
    

    return val;
}

void Inline_response_201_2::fromJson(const nlohmann::json& val)
{
    if(val.find("MeasTaSubscription") != val.end())
    {
        if(!val["MeasTaSubscription"].is_null())
        {
            MeasTaSubscription newItem;
            newItem.fromJson(val["MeasTaSubscription"]);
            setMeasTaSubscription( newItem );
        }
        
    }
    
}


MeasTaSubscription Inline_response_201_2::getMeasTaSubscription() const
{
    return m_MeasTaSubscription;
}
void Inline_response_201_2::setMeasTaSubscription(MeasTaSubscription const& value)
{
    m_MeasTaSubscription = value;
    m_MeasTaSubscriptionIsSet = true;
}
bool Inline_response_201_2::measTaSubscriptionIsSet() const
{
    return m_MeasTaSubscriptionIsSet;
}
void Inline_response_201_2::unsetMeasTaSubscription()
{
    m_MeasTaSubscriptionIsSet = false;
}

}
}
}
}
