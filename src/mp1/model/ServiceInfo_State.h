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
 * ServiceInfo_State.h
 *
 * Contains the state
 */

#ifndef ServiceInfo_State_H_
#define ServiceInfo_State_H_


#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// Contains the state
/// </summary>
class  ServiceInfo_State
{
public:
    ServiceInfo_State();
    virtual ~ServiceInfo_State();

    void validate();

    /////////////////////////////////////////////
    /// ServiceInfo_State members


    friend void to_json(nlohmann::json& j, const ServiceInfo_State& o);
    friend void from_json(const nlohmann::json& j, ServiceInfo_State& o);
protected:
};

}
}
}

#endif /* ServiceInfo_State_H_ */
