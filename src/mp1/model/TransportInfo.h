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
 * TransportInfo.h
 *
 * This type represents the general information of a mobile edge service.
 */

#ifndef TransportInfo_H_
#define TransportInfo_H_


#include "EndPointInfo_All.h"
#include "TransportTypes.h"
#include <string>
#include "SecurityInfo.h"
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// This type represents the general information of a mobile edge service.
/// </summary>
class  TransportInfo
{
public:
    TransportInfo();
    virtual ~TransportInfo();

    void validate();

    /////////////////////////////////////////////
    /// TransportInfo members

    /// <summary>
    /// The identifier of this transport
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
        /// <summary>
    /// The name of this transport
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
        /// <summary>
    /// Human-readable description of this transport
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    //TransportTypes getType() const;
    //void setType(TransportTypes const& value);
    std::string getType() const;
    void setType(std::string const& value);
        /// <summary>
    /// The name of the protocol used. Shall be set to HTTP for a REST API.
    /// </summary>
    std::string getProtocol() const;
    void setProtocol(std::string const& value);
        /// <summary>
    /// The version of the protocol used
    /// </summary>
    std::string getVersion() const;
    void setVersion(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    EndPointInfo_All getEndpoint() const;
    void setEndpoint(EndPointInfo_All const& value);
        /// <summary>
    /// 
    /// </summary>
    SecurityInfo getSecurity() const;
    void setSecurity(SecurityInfo const& value);
        /// <summary>
    /// Additional implementation specific details of the transport
    /// </summary>
    std::string getImplSpecificInfo() const;
    void setImplSpecificInfo(std::string const& value);
    bool implSpecificInfoIsSet() const;
    void unsetImplSpecificInfo();

    friend void to_json(nlohmann::json& j, const TransportInfo& o);
    friend void from_json(const nlohmann::json& j, TransportInfo& o);
protected:
    std::string m_Id;

    std::string m_Name;

    std::string m_Description;
    bool m_DescriptionIsSet;
    //TransportTypes m_Type;
    std::string m_Type;

    std::string m_Protocol;

    std::string m_Version;

    EndPointInfo_All m_Endpoint;

    SecurityInfo m_Security;

    std::string m_ImplSpecificInfo;
    bool m_ImplSpecificInfoIsSet;
};

}
}
}

#endif /* TransportInfo_H_ */