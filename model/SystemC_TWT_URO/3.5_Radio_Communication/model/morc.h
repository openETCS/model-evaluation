/*
 *  Management of Radio Communication Module (MoRC)
 */
#ifndef _MORC_H_
#define _MORC_H_

#define DEBUG

#include <systemc.h>
#include <iostream>
#include <iomanip>
#include "radio_message.h"
#include "helper.h"

namespace SUT {

// This module describes the communication system of the onboard unit
SC_MODULE(MoRC) {

    // Input from OBU to order the establishment or termination of a connection (true -> establish, false -> terminate)
    sc_port<sc_fifo_in_if<bool> > i_conn_order;

    // Output to OBU to indicate whether a connection is established
    sc_port<sc_signal_inout_if<bool> > o_conn_status;

    // Output to EURORADIO to order the setup or termination of a safe radio connection (true -> establish, false -> terminate)
    sc_port<sc_fifo_out_if<bool> > o_safe_radio_order;

    // Input from EURORADIO to indicate whether a safe radio connection is active
    sc_port<sc_signal_in_if<bool> > i_safe_radio_status;

    // Output interface to send messages to trackside (via EURORADIO)
    sc_port<sc_fifo_out_if<RadioMessage> > o_trackside;

    // Input interface to receive messages from trackside (via EUROADIO)
    sc_port<sc_fifo_in_if<RadioMessage> > i_trackside;

    sc_event conn_established_event;
    sc_event conn_lost_event;

#define SYSTEM_VERSION 1

    // State machine for connection setup
    struct SMConnect {

        // Reference to the parent class (the MoRC)
        MoRC& parent;

        // How long do we wait for a trackside response?
        const sc_time time_to_wait_for_trackside_message = sc_time(400, SC_SEC);

        // Variable indicating the time left in waiting for a trackside response
        sc_time waiting_time_left;

        // Function pointer referring to the next state function; if NULL the state machine terminates
        void (SMConnect:: *next_state) ();

        // Provide name function for proper output
        std::string name() {
            return parent.name() + std::string("::SMConnect");
        }

        //State functions
        void state_connection_order_received();
        void state_not_connected_connection_order();
        void state_safe_radio_established();
        void state_init_sent();
        void state_sysver_received();
        void state_init_sent_safe_radio_lost();
        void state_safe_radio_failed_notify_driver();
        void state_wrong_system_version();
        void state_timeout_waiting_for_trackside();
        void state_wrong_message_from_trackside();

        //Constructor with the state execution loop
        SMConnect(MoRC& parent);

    };


    //THREADS
    void order_handler();
    void safe_radio_handler();
    void conn_status_signal_driver();

    //Necessary for custom constructor
    SC_HAS_PROCESS(MoRC);

    //Constructor
    MoRC(const sc_module_name& name);

};

}

#endif
