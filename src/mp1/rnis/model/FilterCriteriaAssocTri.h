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
 * FilterCriteriaAssocTri.h
 *
 * List of filtering criteria for the subscription.
 */

#ifndef FilterCriteriaAssocTri_H_
#define FilterCriteriaAssocTri_H_


#include "ModelBase.h"

#include "Plmn.h"
#include "Trigger.h"
#include <string>
#include "AssociateId.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// List of filtering criteria for the subscription.
/// </summary>
class  FilterCriteriaAssocTri
    : public ModelBase
{
public:
    FilterCriteriaAssocTri();
    virtual ~FilterCriteriaAssocTri();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// FilterCriteriaAssocTri members

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
    /// <summary>
    /// 
    /// </summary>
    Trigger getTrigger() const;
    void setTrigger(Trigger const& value);
    bool triggerIsSet() const;
    void unsetTrigger();

protected:
    std::string m_AppInsId;
    bool m_AppInsIdIsSet;
    AssociateId m_AssociateId;
    bool m_AssociateIdIsSet;
    Plmn m_Plmn;
    bool m_PlmnIsSet;
    std::vector<std::string> m_CellId;
    bool m_CellIdIsSet;
    Trigger m_Trigger;
    bool m_TriggerIsSet;
};

}
}
}
}

#endif /* FilterCriteriaAssocTri_H_ */
