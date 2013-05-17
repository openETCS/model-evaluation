#include "trackside.h"
#include "helper.h"

namespace TE {


void Trackside::msg_handler() {
    while(true) {
        RadioMessage m = i_obu_trackside->read();
        if (!i_safe_radio_status->read()) {
            MODULE_OUT << "Received message " << m << " from MoRC although safe radio was not established.\n";

        }
        MODULE_OUT << "Received message " << m << "." << endl;
        RadioMessage msg;
        switch (m.type) {
        case RadioMessage::INIT_OBU:
            msg.type = RadioMessage::SYS_VER;
            msg.payload.system_version = 1;
            wait(200, SC_SEC);
            o_trackside_obu->write(msg);
            break;
        case RadioMessage::ESTABLISHED:
            break;
        case RadioMessage::NO_COMPAT_VERSION:
            break;
        case RadioMessage::TERM:
            break;
        default:
            MODULE_OUT << "Message invalid.\n";
        };
    }
}

Trackside::Trackside(const sc_module_name& name) : sc_module(name) {
    SC_THREAD(msg_handler);

}

}

