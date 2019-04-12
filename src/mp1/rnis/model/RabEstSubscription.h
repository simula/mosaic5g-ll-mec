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
 * RabEstSubscription.h
 *
 * 
 */

#ifndef RabEstSubscription_H_
#define RabEstSubscription_H_


#include "ModelBase.h"

#include <string>
#include "FilterCriteriaAssocQci.h"
#include "Link.h"
#include "TimeStamp.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RabEstSubscription
    : public ModelBase
{
public:
    RabEstSubscription();
    virtual ~RabEstSubscription();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// RabEstSubscription members

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
}

#endif /* RabEstSubscription_H_ */
