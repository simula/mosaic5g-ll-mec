/**
* BWM API
* The ETSI MEC ISG MEC015 Bandwidth Management API described using OpenAPI
*
* OpenAPI spec version: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * BwInfoDeltas.h
 *
 * Conform to JSON merge patch format and processing rules specified IETF RFC 7396 [8], this type represents the attributes whose value are allowed to be updated with HTTP PATCH method in content format JSON
 */

#ifndef BwInfoDeltas_H_
#define BwInfoDeltas_H_


#include "ModelBase.h"

#include "FixedBWPriority.h"
#include <string>
#include "AllocationDirection.h"
#include "RequestType.h"
#include "SessionFilterElement.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// Conform to JSON merge patch format and processing rules specified IETF RFC 7396 [8], this type represents the attributes whose value are allowed to be updated with HTTP PATCH method in content format JSON
/// </summary>
class  BwInfoDeltas
    : public ModelBase
{
public:
    BwInfoDeltas();
    virtual ~BwInfoDeltas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// BwInfoDeltas members

    /// <summary>
    /// Application instance identifier
    /// </summary>
    std::string getAppInsId() const;
    void setAppInsId(std::string const& value);
    bool appInsIdIsSet() const;
    void unsetAppInsId();
    /// <summary>
    /// 
    /// </summary>
    RequestType getRequestType() const;
    void setRequestType(RequestType const& value);
    bool requestTypeIsSet() const;
    void unsetRequestType();
    /// <summary>
    /// Session filtering criteria, applicable when requestType is set as SESSION_SPECIFIC_BW_ALLOCATION. Any filtering criteria shall define a single session only. In case multiple sessions match sessionFilter the request shall be rejected
    /// </summary>
    std::vector<SessionFilterElement>& getSessionFilter();
    bool sessionFilterIsSet() const;
    void unsetSessionFilter();
    /// <summary>
    /// 
    /// </summary>
    FixedBWPriority getFixedBWPriority() const;
    void setFixedBWPriority(FixedBWPriority const& value);
    bool fixedBWPriorityIsSet() const;
    void unsetFixedBWPriority();
    /// <summary>
    /// Size of requested fixed BW allocation in [bps]
    /// </summary>
    std::string getFixedAllocation() const;
    void setFixedAllocation(std::string const& value);
    bool fixedAllocationIsSet() const;
    void unsetFixedAllocation();
    /// <summary>
    /// 
    /// </summary>
    AllocationDirection getAllocationDirection() const;
    void setAllocationDirection(AllocationDirection const& value);
    bool allocationDirectionIsSet() const;
    void unsetAllocationDirection();

protected:
    std::string m_AppInsId;
    bool m_AppInsIdIsSet;
    RequestType m_RequestType;
    bool m_RequestTypeIsSet;
    std::vector<SessionFilterElement> m_SessionFilter;
    bool m_SessionFilterIsSet;
    FixedBWPriority m_FixedBWPriority;
    bool m_FixedBWPriorityIsSet;
    std::string m_FixedAllocation;
    bool m_FixedAllocationIsSet;
    AllocationDirection m_AllocationDirection;
    bool m_AllocationDirectionIsSet;
};

}
}
}
}

#endif /* BwInfoDeltas_H_ */