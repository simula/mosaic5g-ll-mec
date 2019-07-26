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
 * RabModSubscription.h
 *
 * 
 */

#ifndef RabModSubscription_H_
#define RabModSubscription_H_


#include <string>
#include "FilterCriteriaAssocQci.h"
#include "Link.h"
#include "TimeStamp.h"
#include <nlohmann/json.hpp>

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// 
/// </summary>
class  RabModSubscription
{
public:
    RabModSubscription();
    virtual ~RabModSubscription();

    void validate();

    /////////////////////////////////////////////
    /// RabModSubscription members

    /// <summary>
    /// URL selected by the Mobile Edge application to receive notifications on the subscribed RNIS information.
    /// </summary>
    std::string getCallbackReference() const;
    void setCallbackReference(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    Link getLinks() const;
    void setLinks(Link const& value);
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

    friend void to_json(nlohmann::json& j, const RabModSubscription& o);
    friend void from_json(const nlohmann::json& j, RabModSubscription& o);
protected:
    std::string m_CallbackReference;

    Link m__links;

    FilterCriteriaAssocQci m_FilterCriteria;

    TimeStamp m_ExpiryDeadline;
    bool m_ExpiryDeadlineIsSet;
};

}
}
}

#endif /* RabModSubscription_H_ */
