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
/*
 * Inline_response_201_2.h
 *
 * 
 */

#ifndef Inline_response_201_2_H_
#define Inline_response_201_2_H_


#include "ModelBase.h"

#include "MeasTaSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Inline_response_201_2
    : public ModelBase
{
public:
    Inline_response_201_2();
    virtual ~Inline_response_201_2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Inline_response_201_2 members

    /// <summary>
    /// 
    /// </summary>
    MeasTaSubscription getMeasTaSubscription() const;
    void setMeasTaSubscription(MeasTaSubscription const& value);
    bool measTaSubscriptionIsSet() const;
    void unsetMeasTaSubscription();

protected:
    MeasTaSubscription m_MeasTaSubscription;
    bool m_MeasTaSubscriptionIsSet;
};

}
}
}
}

#endif /* Inline_response_201_2_H_ */