/**
* RNI API
* The ETSI MEC ISG MEC012 Radio Network Information API described using OpenAPI AND som additional MEC APIs
*
* OpenAPI spec version: 1.1.1
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CaReConfSubscriptionPost.h
 *
 * 
 */

#ifndef CaReConfSubscriptionPost_H_
#define CaReConfSubscriptionPost_H_


#include "ModelBase.h"

#include "FilterCriteriaAssoc.h"
#include <string>
#include "TimeStamp.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  CaReConfSubscriptionPost
    : public ModelBase
{
public:
    CaReConfSubscriptionPost();
    virtual ~CaReConfSubscriptionPost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// CaReConfSubscriptionPost members

    /// <summary>
    /// URL selected by the Mobile Edge application to receive notifications on the subscribed RNIS information.
    /// </summary>
    std::string getCallbackReference() const;
    void setCallbackReference(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    FilterCriteriaAssoc getFilterCriteria() const;
    void setFilterCriteria(FilterCriteriaAssoc const& value);
        /// <summary>
    /// 
    /// </summary>
    TimeStamp getExpiryDeadline() const;
    void setExpiryDeadline(TimeStamp const& value);
    bool expiryDeadlineIsSet() const;
    void unsetExpiryDeadline();

protected:
    std::string m_CallbackReference;

    FilterCriteriaAssoc m_FilterCriteria;

    TimeStamp m_ExpiryDeadline;
    bool m_ExpiryDeadlineIsSet;
};

}
}
}

#endif /* CaReConfSubscriptionPost_H_ */
