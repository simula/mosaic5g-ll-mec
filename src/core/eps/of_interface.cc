#include "of_interface.h"

namespace llmec {
namespace core {
namespace eps {

//TODO OpenFlow message field wrapper specifically for LL-MEC
void OFInterface::install_flow_mod(fluid_msg::of10::PacketIn &pi, fluid_base::OFConnection* ofconn,
    uint64_t src, uint64_t dst, uint16_t out_port) {
  // Flow mod message
  uint8_t* buffer;
  /* Messages constructors allow to add all
     values in a row. The fields order follows
     the specification */
  fluid_msg::of10::FlowMod fm(pi.xid(),  //xid
      123, // cookie
      fluid_msg::of10::OFPFC_ADD, // command
      5, // idle timeout
      10, // hard timeout
      100, // priority
      pi.buffer_id(), //buffer id
      0, // outport
      0); // flags
  fluid_msg::of10::Match m;
  m.dl_src(((uint8_t*) &src) + 2);
  m.dl_dst(((uint8_t*) &dst) + 2);
  fm.match(m);
  fluid_msg::of10::OutputAction act(out_port, 1024);
  fm.add_action(act);
  buffer = fm.pack();
  ofconn->send(buffer, fm.length());
  fluid_msg::OFMsg::free_buffer(buffer);
}

void OFInterface::install_flow_mod(fluid_msg::of13::PacketIn &pi, fluid_base::OFConnection* ofconn,
    uint64_t src, uint64_t dst, uint16_t out_port) {
  // Flow mod message
  uint8_t* buffer;
  /*You can also set the message field using
    class methods which have the same names from
    the field present on the specification*/
  fluid_msg::of13::FlowMod fm;
  fm.xid(pi.xid());
  fm.cookie(123);
  fm.cookie_mask(0xffffffffffffffff);
  fm.table_id(0);
  fm.command(fluid_msg::of13::OFPFC_ADD);
  fm.idle_timeout(5);
  fm.hard_timeout(10);
  fm.priority(100);
  fm.buffer_id(pi.buffer_id());
  fm.out_port(0);
  fm.out_group(0);
  fm.flags(0);
  fluid_msg::of13::EthSrc fsrc(((uint8_t*) &src) + 2);
  fluid_msg::of13::EthDst fdst(((uint8_t*) &dst) + 2);
  fm.add_oxm_field(fsrc);
  fm.add_oxm_field(fdst);
  fluid_msg::of13::OutputAction act(out_port, 1024);
  fluid_msg::of13::ApplyActions inst;
  inst.add_action(act);
  fm.add_instruction(inst);
  buffer = fm.pack();
  ofconn->send(buffer, fm.length());
  fluid_msg::OFMsg::free_buffer(buffer);
  fluid_msg::of13::Match m;
  fluid_msg::of13::MultipartRequestFlow rf(2, 0x0, 0, fluid_msg::of13::OFPP_ANY, fluid_msg::of13::OFPG_ANY,
      0x0, 0x0, m);
  buffer = rf.pack();
  ofconn->send(buffer, rf.length());
  fluid_msg::OFMsg::free_buffer(buffer);
}

void OFInterface::install_default_flow(fluid_base::OFConnection* of_conn) {
  uint8_t* buffer;
  fluid_msg::of13::FlowMod fm(42, 0, 0xffffffffffffffff, 0, fluid_msg::of13::OFPFC_ADD, 0, 0, 0,
      0xffffffff, 0, 0, 0);
  fluid_msg::of13::OutputAction *act = new fluid_msg::of13::OutputAction(fluid_msg::of13::OFPP_NORMAL,
      fluid_msg::of13::OFPCML_NO_BUFFER);
  fluid_msg::of13::ApplyActions *inst = new fluid_msg::of13::ApplyActions();
  inst->add_action(act);
  fm.add_instruction(inst);
  buffer = fm.pack();
  of_conn->send(buffer, fm.length());
  fluid_msg::OFMsg::free_buffer(buffer);
}

} // namespace eps
} // namespace core
} // namespace llmec
