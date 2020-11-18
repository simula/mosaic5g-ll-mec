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
#include "Mp1ApiImpl.h"
#include "ServicesApiImpl.h"
#include "SubscriptionsApiImpl.h"
#include "rib.h"
#include "subscription.h"

using namespace llmec::mp1::api;
class Mp1Manager {
public:
	Mp1Manager(Pistache::Address address,
             llmec::mp1::rib::Rib& rib,
             llmec::event::subscription &ev)
      : m_httpEndpoint(std::make_shared<Pistache::Http::Endpoint>(address)) {
		m_router = std::make_shared<Pistache::Rest::Router>();
		m_mp1Apiserver = std::make_shared<Mp1ApiImpl> (m_router, rib, ev);
		m_subscriptionsApiserver = std::make_shared<SubscriptionsApiImpl> (m_router, rib);
		m_servicesApiserver = std::make_shared<ServicesApiImpl> (m_router, rib);

	}
	void init(size_t thr = 1);
	void start();
	void shutdown();

	std::shared_ptr<Mp1ApiImpl> getMp1ApiServer();

private:
	std::shared_ptr<Pistache::Http::Endpoint> m_httpEndpoint;
	std::shared_ptr<Pistache::Rest::Router> m_router;
	std::shared_ptr<Mp1ApiImpl> m_mp1Apiserver;
	std::shared_ptr <SubscriptionsApiImpl> m_subscriptionsApiserver;
	std::shared_ptr <ServicesApiImpl> m_servicesApiserver;
};


