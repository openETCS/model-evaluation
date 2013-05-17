#include "euroradio.h"

namespace TE {

void EURORADIO::safe_radio_handler() {
    while(true) {
        bool o = i_safe_radio_order->read();
        if (o) {
            MODULE_OUT << "Setup of safe radio ordered.\n";
            wait(setup_delay);
            safe_radio_on_event.notify();
        } else {
            MODULE_OUT << "Termination of safe radio ordered.\n";
            wait(500, SC_MS);
            safe_radio_off_event.notify();
        }
    }
}


void EURORADIO::safe_radio_signal_driver() {
    while(true) {
        wait(safe_radio_on_event);
        o_safe_radio_status->write(true);
        wait(safe_radio_off_event);
        o_safe_radio_status->write(false);
    }
}

void EURORADIO::failure_simulator() {
    while(true) {
        while(!o_safe_radio_status->read()) wait();
        unsigned long time_to_failure = distr_failure(generator) * 3600;
        wait(time_to_failure, SC_SEC);
        if (!o_safe_radio_status->read()) continue;
        MODULE_OUT << "Begin of simulated safe radio failure.\n";
        safe_radio_off_event.notify();
        unsigned long time_to_fix = distr_fixing(generator) * 3600;
        wait(time_to_fix, SC_SEC);
        safe_radio_on_event.notify();
        MODULE_OUT << "End of simulated safe radio failure.\n";
    }
}


EURORADIO::EURORADIO(const sc_module_name& name,
                     sc_time setup_delay = sc_time(1, SC_SEC),
                     double failure_rate_per_hour = 1, double fixing_rate_per_hour = 60, unsigned seed = 17)
    : sc_module(name),
      setup_delay(setup_delay),
      distr_failure(failure_rate_per_hour),
      distr_fixing(fixing_rate_per_hour),
      generator(seed)
{
    SC_THREAD(safe_radio_handler);
    SC_THREAD(failure_simulator);
    sensitive << o_safe_radio_status;
    SC_THREAD(safe_radio_signal_driver);
}


}
