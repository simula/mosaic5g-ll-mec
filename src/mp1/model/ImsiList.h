/**
* MP1 API
* The ETSI MEC ISG MEC012 Radio Network Information API, AND The ETSI MEC ISG MEC011 Application Enablement API
* AND some additional MEC APIs described using OpenAPI
*
* OpenAPI spec version: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * Imsi_list.h
 *
 * 
 */

#ifndef Imsi_list_H_
#define Imsi_list_H_


#include "ModelBase.h"

#include <string>
#include <vector>

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  Imsi_list
    : public ModelBase
{
public:
    Imsi_list();
    virtual ~Imsi_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Imsi_list members

    /// <summary>
    /// 
    /// </summary>
    int32_t getResult() const;
    void setResult(int32_t const value);
    bool resultIsSet() const;
    void unsetResult();
    /// <summary>
    /// The list of UE identifiers (IMSI numbers) represented as strings for which traffic redirection for this specific service will be applied.
    /// </summary>
    std::vector<std::string>& getUeList();
    bool ueListIsSet() const;
    void unsetUe_list();
    /// <summary>
    /// The transport protocol destination port for the flow to be redirected to the MEC server.
    /// </summary>
    int32_t getPort() const;
    void setPort(int32_t const value);
    bool portIsSet() const;
    void unsetPort();
    /// <summary>
    /// The transport protocol of the traffic flows to redirect (1: TCP, 2: UDP, 0: any)
    /// </summary>
    int32_t getTransport() const;
    void setTransport(int32_t const value);
    bool transportIsSet() const;
    void unsetTransport();
    /// <summary>
    /// The original IP address of the service for which traffic will be redirected to the MEC server.
    /// </summary>
    std::string getServiceIp() const;
    void setServiceIp(std::string const& value);
    bool serviceIpIsSet() const;
    void unsetService_ip();
    /// <summary>
    /// The IP address of the MEC application instance to which traffic will be redirected.
    /// </summary>
    std::string getMecIpaddr() const;
    void setMecIpaddr(std::string const& value);
    bool mecIpaddrIsSet() const;
    void unsetMec_ipaddr();
    /// <summary>
    /// The MAC address of the MEC application instance&#39;s network interface. (This is necessary due to the redirection mechanism&#39;s internal workings and might be become optional in future versions.)
    /// </summary>
    std::string getMecMacaddr() const;
    void setMecMacaddr(std::string const& value);
    bool mecMacaddrIsSet() const;
    void unsetMec_macaddr();
    /// <summary>
    /// 
    /// </summary>
    int32_t getXType() const;
    void setXType(int32_t const value);
    bool xTypeIsSet() const;
    void unsetX_type();

protected:
    int32_t m_Result;
    bool m_ResultIsSet;
    std::vector<std::string> m_Ue_list;
    bool m_Ue_listIsSet;
    int32_t m_Port;
    bool m_PortIsSet;
    int32_t m_Transport;
    bool m_TransportIsSet;
    std::string m_Service_ip;
    bool m_Service_ipIsSet;
    std::string m_Mec_ipaddr;
    bool m_Mec_ipaddrIsSet;
    std::string m_Mec_macaddr;
    bool m_Mec_macaddrIsSet;
    int32_t m_X_type;
    bool m_X_typeIsSet;
};

}
}
}

#endif /* Imsi_list_H_ */
