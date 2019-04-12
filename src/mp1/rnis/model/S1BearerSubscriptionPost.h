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
 * S1BearerSubscriptionPost.h
 *
 * 
 */

#ifndef S1BearerSubscriptionPost_H_
#define S1BearerSubscriptionPost_H_


#include "ModelBase.h"

#include "S1BearerSubscriptionCriteria.h"
#include <string>
#include "EventType.h"
#include "TimeStamp.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  S1BearerSubscriptionPost
    : public ModelBase
{
public:
    S1BearerSubscriptionPost();
    virtual ~S1BearerSubscriptionPost();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// S1BearerSubscriptionPost members

    /// <summary>
    /// URL selected by the Mobile Edge application to receive notifications on the subscribed RNIS information.
    /// </summary>
    std::string getCallbackReference() const;
    void setCallbackReference(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    EventType getEventType() const;
    void setEventType(EventType const& value);
    bool eventTypeIsSet() const;
    void unsetEventType();
    /// <summary>
    /// 
    /// </summary>
    S1BearerSubscriptionCriteria getS1BearerSubscriptionCriteria() const;
    void setS1BearerSubscriptionCriteria(S1BearerSubscriptionCriteria const& value);
        /// <summary>
    /// 
    /// </summary>
    TimeStamp getExpiryDeadline() const;
    void setExpiryDeadline(TimeStamp const& value);
    bool expiryDeadlineIsSet() const;
    void unsetExpiryDeadline();

protected:
    std::string m_CallbackReference;

    EventType m_EventType;
    bool m_EventTypeIsSet;
    S1BearerSubscriptionCriteria m_S1BearerSubscriptionCriteria;

    TimeStamp m_ExpiryDeadline;
    bool m_ExpiryDeadlineIsSet;
};

}
}
}
}

#endif /* S1BearerSubscriptionPost_H_ */
