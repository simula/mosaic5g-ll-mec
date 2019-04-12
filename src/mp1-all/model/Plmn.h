/**
* RNI API
* The ETSI MEC ISG MEC012 Radio Network Information API described using OpenAPI
*
* OpenAPI spec version: 1.1.1
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


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Plmn
    : public ModelBase
{
public:
    Plmn();
    virtual ~Plmn();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

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
    
protected:
    std::string m_Mcc;

    std::string m_Mnc;

};

}
}
}
}

#endif /* Plmn_H_ */