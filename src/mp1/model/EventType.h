/**
* RNI API
* The ETSI MEC ISG MEC012 Radio Network Information API described using OpenAPI AND som additional MEC APIs
*
* OpenAPI spec version: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * EventType.h
 *
 * Description of the subscribed event.
 */

#ifndef EventType_H_
#define EventType_H_


#include "ModelBase.h"


namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// Description of the subscribed event.
/// </summary>
class  EventType
    : public ModelBase
{
public:
    EventType();
    virtual ~EventType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// EventType members


protected:
};

}
}
}

#endif /* EventType_H_ */
