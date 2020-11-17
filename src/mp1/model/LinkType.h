/**
* Mp1 API
* The ETSI MEC ISG MEC011 Application Enablement API described using OpenAPI
*
* The version of the OpenAPI document: 1.1.1
* Contact: cti_support@etsi.org
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * LinkType.h
 *
 * This type represents a type of link and may be referenced from data structures
 */

#ifndef LinkType_H_
#define LinkType_H_


#include <string>
#include "json.h"

namespace llmec {
namespace mp1 {
namespace model {

/// <summary>
/// This type represents a type of link and may be referenced from data structures
/// </summary>
class  LinkType
{
public:
    LinkType();
    virtual ~LinkType();

    void validate();

    /////////////////////////////////////////////
    /// LinkType members

    /// <summary>
    /// URI referring to a resource
    /// </summary>
    std::string getHref() const;
    void setHref(std::string const& value);
    bool hrefIsSet() const;
    void unsetHref();

    friend void to_json(nlohmann::json& j, const LinkType& o);
    friend void from_json(const nlohmann::json& j, LinkType& o);
protected:
    std::string m_Href;
    bool m_HrefIsSet;
};

}
}
}

#endif /* LinkType_H_ */