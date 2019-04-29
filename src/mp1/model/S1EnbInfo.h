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
 * S1EnbInfo.h
 *
 * 
 */

#ifndef S1EnbInfo_H_
#define S1EnbInfo_H_


#include "ModelBase.h"

#include <string>

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  S1EnbInfo
    : public ModelBase
{
public:
    S1EnbInfo();
    virtual ~S1EnbInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// S1EnbInfo members

    /// <summary>
    /// eNB transport layer address of this S1 bearer.
    /// </summary>
    std::string getIpAddress() const;
    void setIpAddress(std::string const& value);
        /// <summary>
    /// eNB GTP-U TEID of this S1 bearer.
    /// </summary>
    std::string getTunnelId() const;
    void setTunnelId(std::string const& value);
    
protected:
    std::string m_IpAddress;

    std::string m_TunnelId;

};

}
}
}

#endif /* S1EnbInfo_H_ */
