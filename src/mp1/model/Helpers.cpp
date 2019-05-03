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
#include "Helpers.h"

namespace llmec {
namespace mp1 {
namespace helpers {


std::string toStringValue(const std::string &value){
    return std::string(value);
}

std::string toStringValue(const int32_t &value){
    return std::to_string(value);
}

std::string toStringValue(const int64_t &value){
    return std::to_string(value);
}

std::string toStringValue(const bool &value){
    return value?std::string("true"):std::string("false");
}

std::string toStringValue(const float &value){
    return std::to_string(value);
}

std::string toStringValue(const double &value){
    return std::to_string(value);
}

bool fromStringValue(const std::string &inStr, std::string &value){
    value = std::string(inStr);
    return true;
}

bool fromStringValue(const std::string &inStr, int32_t &value){
    try {
        value = std::stoi( inStr );
    }
    catch (const std::invalid_argument) {
        return false;
    }
    return true;
}

bool fromStringValue(const std::string &inStr, int64_t &value){
    try {
        value = std::stol( inStr );
    }
    catch (const std::invalid_argument) {
        return false;
    }
    return true;
}

bool fromStringValue(const std::string &inStr, bool &value){
    bool result = true;
    inStr == "true"?value = true: inStr == "false"?value = false: result = false;
    return result;
}

bool fromStringValue(const std::string &inStr, float &value){
    try {
        value = std::stof( inStr );
    }
    catch (const std::invalid_argument) {
        return false;
    }
    return true;
}

bool fromStringValue(const std::string &inStr, double &value){
    try {
        value = std::stod( inStr );
    }
    catch (const std::invalid_argument) {
        return false;
    }
    return true;
}

}
}
}
