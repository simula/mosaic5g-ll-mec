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
 * S1BearerSubscriptionPost.h
 *
 * 
 */

#ifndef S1BearerSubscriptionPost_H_
#define S1BearerSubscriptionPost_H_


#include "S1BearerSubscriptionCriteria.h"
#include <string>
#include "EventType.h"
#include "TimeStamp.h"
#include <nlohmann/json.hpp>

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  S1BearerSubscriptionPost
{
public:
    S1BearerSubscriptionPost();
    virtual ~S1BearerSubscriptionPost();

    void validate();

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

    friend void to_json(nlohmann::json& j, const S1BearerSubscriptionPost& o);
    friend void from_json(const nlohmann::json& j, S1BearerSubscriptionPost& o);
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

#endif /* S1BearerSubscriptionPost_H_ */
