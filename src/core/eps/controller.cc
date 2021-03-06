#include "controller.h"

namespace llmec {
namespace core {
namespace eps {

void Controller::stop() {
  running_ = false;
  fluid_base::OFServer::stop();
}
void Controller::connection_callback(fluid_base::OFConnection* ofconn, fluid_base::OFConnection::Event type) {
  if (type == fluid_base::OFConnection::EVENT_STARTED)
    printf("Connection id=%d started\n", ofconn->get_id());

  else if (type == fluid_base::OFConnection::EVENT_ESTABLISHED) {
    printf("Connection id=%d established\n", ofconn->get_id());
  }

  else if (type == fluid_base::OFConnection::EVENT_FAILED_NEGOTIATION)
    printf("Connection id=%d failed version negotiation\n", ofconn->get_id());

  else if (type == fluid_base::OFConnection::EVENT_CLOSED) {
    printf("Connection id=%d closed by the user\n", ofconn->get_id());
    dispatch_event(new SwitchDownEvent(ofconn));
  }

  else if (type == fluid_base::OFConnection::EVENT_DEAD) {
    printf("Connection id=%d closed due to inactivity\n", ofconn->get_id());
    dispatch_event(new SwitchDownEvent(ofconn));
  }
}

void Controller::message_callback(fluid_base::OFConnection* ofconn, uint8_t type, void* data, size_t len) {
  if (type == 10) { // OFPT_PACKET_IN
    dispatch_event(new PacketInEvent(ofconn, this, data, len));
  }
  else if (type == 6) { // OFPT_FEATURES_REPLY
    dispatch_event(new SwitchUpEvent(ofconn, this, data, len));
  }
}

void Controller::register_for_event(const std::shared_ptr<llmec::app::App>& app, int event_type) {
  event_listeners_[event_type].push_back(app);
}

/*volatile sig_atomic_t quit=0;
void sigint_handler(int s) {
  quit = 1;
}

void wait_for_sigint() {
  struct sigaction sa;
  memset(&sa, 0, sizeof(sa));
  sa.sa_handler = sigint_handler;
  sigfillset(&sa.sa_mask);
  sigaction(SIGINT, &sa, NULL);

  while (1) {
    if (quit) break;
    sleep(1000);
  }
}*/

} // namespace eps
} // namespace core
} // namespace llmec
