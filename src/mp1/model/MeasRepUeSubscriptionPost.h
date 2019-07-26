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
 * MeasRepUeSubscriptionPost.h
 *
 * 
 */

#ifndef MeasRepUeSubscriptionPost_H_
#define MeasRepUeSubscriptionPost_H_


#include "FilterCriteriaAssocTri.h"
#include <string>
#include "TimeStamp.h"
#include <nlohmann/json.hpp>

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  MeasRepUeSubscriptionPost
{
public:
    MeasRepUeSubscriptionPost();
    virtual ~MeasRepUeSubscriptionPost();

    void validate();

    /////////////////////////////////////////////
    /// MeasRepUeSubscriptionPost members

    /// <summary>
    /// URL selected by the Mobile Edge application to receive notifications on the subscribed RNIS information.
    /// </summary>
    std::string getCallbackReference() const;
    void setCallbackReference(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    FilterCriteriaAssocTri getFilterCriteria() const;
    void setFilterCriteria(FilterCriteriaAssocTri const& value);
        /// <summary>
    /// 
    /// </summary>
    TimeStamp getExpiryDeadline() const;
    void setExpiryDeadline(TimeStamp const& value);
    bool expiryDeadlineIsSet() const;
    void unsetExpiryDeadline();

    friend void to_json(nlohmann::json& j, const MeasRepUeSubscriptionPost& o);
    friend void from_json(const nlohmann::json& j, MeasRepUeSubscriptionPost& o);
protected:
    std::string m_CallbackReference;

    FilterCriteriaAssocTri m_FilterCriteria;

    TimeStamp m_ExpiryDeadline;
    bool m_ExpiryDeadlineIsSet;
};

}
}
}

#endif /* MeasRepUeSubscriptionPost_H_ */
