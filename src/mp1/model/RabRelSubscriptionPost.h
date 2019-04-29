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
 * RabRelSubscriptionPost.h
 *
 * 
 */

#ifndef RabRelSubscriptionPost_H_
#define RabRelSubscriptionPost_H_


#include "ModelBase.h"

#include <string>
#include "FilterCriteriaAssocQci.h"
#include "TimeStamp.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  RabRelSubscriptionPost
    : public ModelBase
{
public:
    RabRelSubscriptionPost();
    virtual ~RabRelSubscriptionPost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// RabRelSubscriptionPost members

    /// <summary>
    /// URL selected by the Mobile Edge application to receive notifications on the subscribed RNIS information.
    /// </summary>
    std::string getCallbackReference() const;
    void setCallbackReference(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    FilterCriteriaAssocQci getFilterCriteria() const;
    void setFilterCriteria(FilterCriteriaAssocQci const& value);
        /// <summary>
    /// 
    /// </summary>
    TimeStamp getExpiryDeadline() const;
    void setExpiryDeadline(TimeStamp const& value);
    bool expiryDeadlineIsSet() const;
    void unsetExpiryDeadline();

protected:
    std::string m_CallbackReference;

    FilterCriteriaAssocQci m_FilterCriteria;

    TimeStamp m_ExpiryDeadline;
    bool m_ExpiryDeadlineIsSet;
};

}
}
}

#endif /* RabRelSubscriptionPost_H_ */
