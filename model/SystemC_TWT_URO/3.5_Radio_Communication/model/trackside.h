/*
 *  Trackside module, part of the simulation environment
 */
#ifndef _TRACKSIDE_H_
#define _TRACKSIDE_H_

#include <systemc.h>
#include "radio_message.h"
#include "euroradio.h"

namespace TE {

SC_MODULE(Trackside) {

    // BEGIN connection interfaces to MoRC
    sc_port<sc_fifo_in_if<RadioMessage> > i_obu_trackside;

    sc_port<sc_fifo_out_if<RadioMessage> > o_trackside_obu;

    sc_port<sc_signal_in_if<bool> > i_conn_status;
    // END connection interfaces to MoRC

    // BEGIN connection interfaces to EURORADIO
    sc_port<sc_signal_in_if<bool> > i_safe_radio_status;
    // END connection interfaces to MoRC


    //Threads
    void msg_handler();

    //Necessary for custom constructor
    SC_HAS_PROCESS(Trackside);

    Trackside(const sc_module_name& name);

};

}

#endif
