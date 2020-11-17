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
 * SecurityInfo_OAuth2Info.h
 *
 * Parameters related to use of OAuth 2.0
 */

#ifndef SecurityInfo_OAuth2Info_H_
#define SecurityInfo_OAuth2Info_H_


#include <string>
#include "SecurityInfo_OAuth2Info_GrantTypes.h"
#include <vector>
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// Parameters related to use of OAuth 2.0
/// </summary>
class  SecurityInfo_OAuth2Info
{
public:
    SecurityInfo_OAuth2Info();
    virtual ~SecurityInfo_OAuth2Info();

    void validate();

    /////////////////////////////////////////////
    /// SecurityInfo_OAuth2Info members

    /// <summary>
    /// List of supported OAuth 2.0 grant types.
    /// </summary>
    //std::vector<SecurityInfo_OAuth2Info_GrantTypes>& getGrantTypes();
    std::vector<std::string>& getGrantTypes();
        /// <summary>
    /// The token endpoint
    /// </summary>
    std::string getTokenEndpoint() const;
    void setTokenEndpoint(std::string const& value);
    
    friend void to_json(nlohmann::json& j, const SecurityInfo_OAuth2Info& o);
    friend void from_json(const nlohmann::json& j, SecurityInfo_OAuth2Info& o);
protected:
    std::vector<std::string> m_GrantTypes;

    std::string m_TokenEndpoint;

};

}
}
}

#endif /* SecurityInfo_OAuth2Info_H_ */