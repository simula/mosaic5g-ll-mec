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
 * ErabQosParameters.h
 *
 * 
 */

#ifndef ErabQosParameters_H_
#define ErabQosParameters_H_


#include "ModelBase.h"

#include "QosInformation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ErabQosParameters
    : public ModelBase
{
public:
    ErabQosParameters();
    virtual ~ErabQosParameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ErabQosParameters members

    /// <summary>
    /// QoS Class Identifier as defined in TS 23.401
    /// </summary>
    int32_t getQci() const;
    void setQci(int32_t const value);
    bool qciIsSet() const;
    void unsetQci();
    /// <summary>
    /// 
    /// </summary>
    QosInformation getQosInformation() const;
    void setQosInformation(QosInformation const& value);
    bool qosInformationIsSet() const;
    void unsetQos_information();

protected:
    int32_t m_Qci;
    bool m_QciIsSet;
    QosInformation m_Qos_information;
    bool m_Qos_informationIsSet;
};

}
}
}
}

#endif /* ErabQosParameters_H_ */