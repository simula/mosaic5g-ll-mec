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
 * Plmn.h
 *
 * 
 */

#ifndef Plmn_H_
#define Plmn_H_


#include <string>
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  Plmn
{
public:
    Plmn();
    virtual ~Plmn();

    void validate();

    /////////////////////////////////////////////
    /// Plmn members

    /// <summary>
    /// The Mobile Country Code part of PLMN Identity as defined in 3GPP TS 36.413
    /// </summary>
    std::string getMcc() const;
    void setMcc(std::string const& value);
        /// <summary>
    /// The Mobile Network Code part of PLMN Identity as defined in 3GPP TS 36.413
    /// </summary>
    std::string getMnc() const;
    void setMnc(std::string const& value);
    
    friend void to_json(nlohmann::json& j, const Plmn& o);
    friend void from_json(const nlohmann::json& j, Plmn& o);
protected:
    std::string m_Mcc;

    std::string m_Mnc;

};

}
}
}

#endif /* Plmn_H_ */
