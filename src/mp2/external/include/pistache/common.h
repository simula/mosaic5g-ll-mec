/* common.h
   Mathieu Stefani, 12 August 2015

   A collection of macro / utilities / constants
*/

#pragma once

#include <sstream>
#include <stdexcept>
#include <iostream>

#include <cstring>

#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>

#define TRY(...) \
    do { \
        auto ret = __VA_ARGS__; \
        if (ret < 0) { \
            const char* str = #__VA_ARGS__; \
            std::ostringstream oss; \
            oss << str << ": "; \
            if (errno == 0) { \
                oss << gai_strerror(ret); \
            } else { \
                oss << strerror(errno); \
            } \
            oss << " (" << __FILE__ << ":" << __LINE__ << ")"; \
            throw std::runtime_error(oss.str()); \
        } \
    } while (0)

#define TRY_RET(...) \
    [&]() { \
        auto ret = __VA_ARGS__; \
        if (ret < 0) { \
            const char *str = #__VA_ARGS__; \
            std::ostringstream oss; \
            oss << str << ": " << strerror(errno); \
            oss << " (" << __FILE__ << ":" << __LINE__ << ")"; \
            throw std::runtime_error(oss.str()); \
        } \
        return ret; \
    }(); \
    (void) 0

struct PrintException {
    void operator()(std::exception_ptr exc) const {
        try {
            std::rethrow_exception(exc);
        } catch (const std::exception& e) {
            std::cerr << "An exception occured: " << e.what() << std::endl;
        }
    }
};

#define unreachable() __builtin_unreachable()

// Until we require C++17 compiler with [[maybe_unused]]
#define UNUSED(x) (void)(x);

