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
 * Inline_response_403.h
 *
 * 
 */

#ifndef Inline_response_403_H_
#define Inline_response_403_H_


#include "ModelBase.h"

#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Inline_response_403
    : public ModelBase
{
public:
    Inline_response_403();
    virtual ~Inline_response_403();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Inline_response_403 members

    /// <summary>
    /// 
    /// </summary>
    ProblemDetails getProblemDetails() const;
    void setProblemDetails(ProblemDetails const& value);
    
protected:
    ProblemDetails m_ProblemDetails;

};

}
}
}
}

#endif /* Inline_response_403_H_ */
