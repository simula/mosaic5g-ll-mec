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
 * Trigger.h
 *
 * Unique identifier for the mobile edge application instance
 */

#ifndef Trigger_H_
#define Trigger_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Unique identifier for the mobile edge application instance
/// </summary>
class  Trigger
    : public ModelBase
{
public:
    Trigger();
    virtual ~Trigger();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Trigger members


protected:
};

}
}
}
}

#endif /* Trigger_H_ */