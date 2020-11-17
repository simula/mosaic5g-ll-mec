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
 * S1BearerInfoDetailed.h
 *
 * Information on UEs in the specific cell.
 */

#ifndef S1BearerInfoDetailed_H_
#define S1BearerInfoDetailed_H_


#include "SGwInfo.h"
#include "S1EnbInfo.h"
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// Information on UEs in the specific cell.
/// </summary>
class  S1BearerInfoDetailed
{
public:
    S1BearerInfoDetailed();
    virtual ~S1BearerInfoDetailed();

    void validate();

    /////////////////////////////////////////////
    /// S1BearerInfoDetailed members

    /// <summary>
    /// The element that uniquely identifies a S1 bearer for a specific UE, as defined in ETSI TS 136 413
    /// </summary>
    int32_t getErabId() const;
    void setErabId(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    S1EnbInfo getS1EnbInfo() const;
    void setS1EnbInfo(S1EnbInfo const& value);
        /// <summary>
    /// 
    /// </summary>
    SGwInfo getSGwInfo() const;
    void setSGwInfo(SGwInfo const& value);
    bool sGwInfoIsSet() const;
    void unsetSGwInfo();

    friend void to_json(nlohmann::json& j, const S1BearerInfoDetailed& o);
    friend void from_json(const nlohmann::json& j, S1BearerInfoDetailed& o);
protected:
    int32_t m_ErabId;

    S1EnbInfo m_S1EnbInfo;

    SGwInfo m_SGwInfo;
    bool m_SGwInfoIsSet;
};

}
}
}

#endif /* S1BearerInfoDetailed_H_ */