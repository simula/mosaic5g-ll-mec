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
 * Inline_object_9.h
 *
 * 
 */

#ifndef Inline_object_9_H_
#define Inline_object_9_H_


#include "ModelBase.h"

#include "RabEstSubscription.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Inline_object_9
    : public ModelBase
{
public:
    Inline_object_9();
    virtual ~Inline_object_9();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Inline_object_9 members

    /// <summary>
    /// 
    /// </summary>
    RabEstSubscription getRabEstSubscription() const;
    void setRabEstSubscription(RabEstSubscription const& value);
    bool rabEstSubscriptionIsSet() const;
    void unsetRabEstSubscription();

protected:
    RabEstSubscription m_RabEstSubscription;
    bool m_RabEstSubscriptionIsSet;
};

}
}
}
}

#endif /* Inline_object_9_H_ */
