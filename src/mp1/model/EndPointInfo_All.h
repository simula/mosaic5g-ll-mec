/**
* MP1 API
* The ETSI MEC ISG MEC012 Radio Network Information API, AND The ETSI MEC ISG MEC011 Application Enablement API
* AND some additional MEC APIs described using OpenAPI
*
* The version of the OpenAPI document: 1.1.1
* Contact: cti_support@etsi.org
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * EndPointInfo_All.h
 *
 * 
 */

#ifndef EndPointInfo_All_H_
#define EndPointInfo_All_H_


#include <string>
#include "EndPointInfo_Address.h"
#include <vector>
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  EndPointInfo_All
{
public:
    EndPointInfo_All();
    virtual ~EndPointInfo_All();

    void validate();

    /////////////////////////////////////////////
    /// EndPointInfo_All members

    /// <summary>
    /// Entry point information of the service as string, formatted according to URI syntax
    /// </summary>
    std::vector<std::string>& getUris();
    bool urisIsSet() const;
    void unsetUris();
    /// <summary>
    /// Entry point information of the service as one or more pairs of IP address and port
    /// </summary>
    std::vector<EndPointInfo_Address>& getAddresses();
    bool addressesIsSet() const;
    void unsetAddresses();

    friend void to_json(nlohmann::json& j, const EndPointInfo_All& o);
    friend void from_json(const nlohmann::json& j, EndPointInfo_All& o);
protected:
    std::vector<std::string> m_Uris;
    bool m_UrisIsSet;
    std::vector<EndPointInfo_Address> m_Addresses;
    bool m_AddressesIsSet;
};

}
}
}

#endif /* EndPointInfo_All_H_ */