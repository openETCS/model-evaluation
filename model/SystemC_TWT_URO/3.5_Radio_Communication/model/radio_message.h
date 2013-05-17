#ifndef _RADIO_MESSAGE_H_
#define _RADIO_MESSAGE_H_

#include <systemc.h>

struct RadioMessage {

    enum Type {
        INIT_OBU = 155,
        INIT_TRACKSIDE = 38,
        SYS_VER = 32,
        ESTABLISHED = 159,
        NO_COMPAT_VERSION = 154,
        TERM = 156,
        TERM_ACK = 39
    };

    static const char* type_to_str(Type type) {
        switch (type) {
        case INIT_OBU:
            return "INIT_OBU";
        case INIT_TRACKSIDE:
            return "INIT_TRACKSIDE";
        case SYS_VER:
            return "SYS_VER";
        case ESTABLISHED:
            return "ESTABLISHED";
        case NO_COMPAT_VERSION:
            return "NO_COMPAT_VERSION";
        case TERM:
            return "TERM";
        case TERM_ACK:
            return "TERM_ACK";
        default:
            return "UNKNOWN";
        };
    }



    Type type;

    // Union for possible payloads
    union {

        int system_version;

    } payload;

};


void sc_trace(sc_trace_file* tf, const RadioMessage& m, const std::string& NAME);
ostream& operator << (ostream& os, RadioMessage const& m);

#endif
