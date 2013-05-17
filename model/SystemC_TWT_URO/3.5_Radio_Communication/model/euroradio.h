/*
 *  EURORADIO module, part of the simulation environment
 */
#ifndef _EURORADIO_H_
#define _EURORADIO_H_

#include <systemc.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include "radio_message.h"
#include "helper.h"

namespace TE {

// This module describes the communication system of the onboard unit
SC_MODULE(EURORADIO) {

    // BEGIN connection interfaces to MoRC
    sc_port<sc_fifo_in_if<bool> > i_safe_radio_order;

    sc_port<sc_signal_inout_if<bool> > o_safe_radio_status;
    // END connection interfaces to MoRC


    // Random number generator
    std::exponential_distribution<double> distr_failure;
    std::exponential_distribution<double> distr_fixing;
    std::default_random_engine generator;

    sc_time setup_delay;

    sc_event safe_radio_on_event;
    sc_event safe_radio_off_event;

    //Threads
    void safe_radio_handler();
    void safe_radio_signal_driver();
    void failure_simulator();

    //Necessary for custom constructor
    SC_HAS_PROCESS(EURORADIO);

    EURORADIO(const sc_module_name& name,
              sc_time setup_delay,
              double failure_rate_per_hour,
              double fixing_rate_per_hour,
              unsigned seed);

};

}

#endif
