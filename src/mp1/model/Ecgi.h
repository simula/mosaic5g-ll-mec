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
 * Ecgi.h
 *
 * E-UTRAN CelI Global Identifier as defined in 3GPP TS 36.413
 */

#ifndef Ecgi_H_
#define Ecgi_H_


#include "Plmn.h"
#include <string>
#include <vector>
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// E-UTRAN CelI Global Identifier as defined in 3GPP TS 36.413
/// </summary>
class  Ecgi
{
public:
    Ecgi();
    virtual ~Ecgi();

    void validate();

    /////////////////////////////////////////////
    /// Ecgi members

    /// <summary>
    /// 
    /// </summary>
    Plmn getPlmn() const;
    void setPlmn(Plmn const& value);
        /// <summary>
    /// The E-UTRAN Cell Identity as a bit string (size (28)), as defined in 3GPP TS 36.413
    /// </summary>
    std::vector<std::string>& getCellId();
    
    friend void to_json(nlohmann::json& j, const Ecgi& o);
    friend void from_json(const nlohmann::json& j, Ecgi& o);
protected:
    Plmn m_Plmn;

    std::vector<std::string> m_CellId;

};

}
}
}

#endif /* Ecgi_H_ */