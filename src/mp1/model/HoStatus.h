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
/*
 * HoStatus.h
 *
 * Description of the subscribed to event
 */

#ifndef HoStatus_H_
#define HoStatus_H_


#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// Description of the subscribed to event
/// </summary>
class  HoStatus
{
public:
    HoStatus();
    virtual ~HoStatus();

    void validate();

    /////////////////////////////////////////////
    /// HoStatus members


    friend void to_json(nlohmann::json& j, const HoStatus& o);
    friend void from_json(const nlohmann::json& j, HoStatus& o);
protected:
};

}
}
}

#endif /* HoStatus_H_ */