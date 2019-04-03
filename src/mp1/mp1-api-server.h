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


#include "pistache/endpoint.h"
#include "pistache/http.h"
#include "pistache/router.h"
#ifdef __linux__
#include <vector>
#include <signal.h>
#include <unistd.h>
#endif
#include "DefaultApiImpl.h"
using namespace org::openapitools::server::api;
class Mp1_manager {
public:
	Mp1_manager(Pistache::Address address) : m_httpEndpoint(std::make_shared<Pistache::Http::Endpoint>(address)) {
		m_router = std::make_shared<Pistache::Rest::Router>();
		DefaultApiserver = std::make_shared<DefaultApiImpl> (m_router);


	}
	void init(size_t thr = 1);
	void start();
	void shutdown();


private:
	std::shared_ptr<Pistache::Http::Endpoint> m_httpEndpoint;
	std::shared_ptr<Pistache::Rest::Router> m_router;
	std::shared_ptr<DefaultApiImpl> DefaultApiserver;
};


