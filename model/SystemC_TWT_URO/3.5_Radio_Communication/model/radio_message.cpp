#include "radio_message.h"


void sc_trace(sc_trace_file* tf, const RadioMessage& m, const std::string& NAME) {
    sc_trace(tf, m.type, NAME + ".type");
}

ostream& operator << (ostream& os, RadioMessage const& m) {
    os << "(" << std::string(RadioMessage::type_to_str(m.type)) << ")";
    return os;
}
