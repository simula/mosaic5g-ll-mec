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
 * S1BearerSubscriptionCriteria.h
 *
 * List of filtering criteria for the subscription.
 */

#ifndef S1BearerSubscriptionCriteria_H_
#define S1BearerSubscriptionCriteria_H_


#include "Plmn.h"
#include <string>
#include "AssociateId.h"
#include <vector>
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// List of filtering criteria for the subscription.
/// </summary>
class  S1BearerSubscriptionCriteria
{
public:
    S1BearerSubscriptionCriteria();
    virtual ~S1BearerSubscriptionCriteria();

    void validate();

    /////////////////////////////////////////////
    /// S1BearerSubscriptionCriteria members

    /// <summary>
    /// 
    /// </summary>
    AssociateId getAssociateId() const;
    void setAssociateId(AssociateId const& value);
    bool associateIdIsSet() const;
    void unsetAssociateId();
    /// <summary>
    /// 
    /// </summary>
    Plmn getPlmn() const;
    void setPlmn(Plmn const& value);
    bool plmnIsSet() const;
    void unsetPlmn();
    /// <summary>
    /// The E-UTRAN Cell Identity as a bit string (size (28)), as defined in 3GPP TS 36.413
    /// </summary>
    std::vector<std::string>& getCellId();
    bool cellIdIsSet() const;
    void unsetCellId();
    /// <summary>
    /// The element that uniquely identifies a S1 bearer for a specific UE, as defined in ETSI TS 136 413
    /// </summary>
    int32_t getErabId() const;
    void setErabId(int32_t const value);
    bool erabIdIsSet() const;
    void unsetErabId();

    friend void to_json(nlohmann::json& j, const S1BearerSubscriptionCriteria& o);
    friend void from_json(const nlohmann::json& j, S1BearerSubscriptionCriteria& o);
protected:
    AssociateId m_AssociateId;
    bool m_AssociateIdIsSet;
    Plmn m_Plmn;
    bool m_PlmnIsSet;
    std::vector<std::string> m_CellId;
    bool m_CellIdIsSet;
    int32_t m_ErabId;
    bool m_ErabIdIsSet;
};

}
}
}

#endif /* S1BearerSubscriptionCriteria_H_ */
