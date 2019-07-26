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
 * FilterCriteriaAssoc.h
 *
 * List of filtering criteria for the subscription.
 */

#ifndef FilterCriteriaAssoc_H_
#define FilterCriteriaAssoc_H_


#include "Plmn.h"
#include <string>
#include "AssociateId.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// List of filtering criteria for the subscription.
/// </summary>
class  FilterCriteriaAssoc
{
public:
    FilterCriteriaAssoc();
    virtual ~FilterCriteriaAssoc();

    void validate();

    /////////////////////////////////////////////
    /// FilterCriteriaAssoc members

    /// <summary>
    /// Unique identifier for the mobile edge application instance
    /// </summary>
    std::string getAppInsId() const;
    void setAppInsId(std::string const& value);
    bool appInsIdIsSet() const;
    void unsetAppInsId();
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

    friend void to_json(nlohmann::json& j, const FilterCriteriaAssoc& o);
    friend void from_json(const nlohmann::json& j, FilterCriteriaAssoc& o);
protected:
    std::string m_AppInsId;
    bool m_AppInsIdIsSet;
    AssociateId m_AssociateId;
    bool m_AssociateIdIsSet;
    Plmn m_Plmn;
    bool m_PlmnIsSet;
    std::vector<std::string> m_CellId;
    bool m_CellIdIsSet;
};

}
}
}

#endif /* FilterCriteriaAssoc_H_ */
