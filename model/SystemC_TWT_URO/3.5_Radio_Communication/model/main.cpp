#include <systemc.h>
#include "morc.h"
#include "euroradio.h"
#include "trackside.h"


int sc_main(int argc, char* argv[]) {
    SUT::MoRC morc("MoRC");
    TE::EURORADIO euroradio("EURORADIO", sc_time(1,SC_SEC), 60, 30, 3);
    TE::Trackside trackside("Trackside");

    //Connections from MoRC to rest of OBU
    sc_fifo<bool> conn_order;
    sc_signal<bool> conn_status;

    //Connections between MoRC and EURORADIO
    sc_fifo<bool> safe_radio_order;
    sc_fifo<RadioMessage> obu_trackside;
    sc_fifo<RadioMessage> trackside_obu;
    sc_signal<bool> safe_radio_status;

    //Connect channels
    morc.i_conn_order(conn_order);
    morc.o_conn_status(conn_status);
    morc.o_safe_radio_order(safe_radio_order);
    morc.i_safe_radio_status(safe_radio_status);
    morc.o_trackside(obu_trackside);
    morc.i_trackside(trackside_obu);

    euroradio.i_safe_radio_order(safe_radio_order);
    euroradio.o_safe_radio_status(safe_radio_status);
    trackside.i_obu_trackside(obu_trackside);
    trackside.o_trackside_obu(trackside_obu);
    trackside.i_safe_radio_status(safe_radio_status);
    trackside.i_conn_status(conn_status);

    //Setup simulation tracing
    sc_trace_file* trace_file;
    trace_file = sc_create_vcd_trace_file("simulation.trace");
    trace_file->set_time_unit(1, SC_SEC);
    sc_trace(trace_file, safe_radio_status, "safe_radio_status");
    sc_trace(trace_file, conn_status, "conn_status");

    //+++++++++++ SIMULATION BEGIN +++++++++++
    conn_order.write(1);
    sc_start(900, SC_SEC);

    //++++++++++++ SIMULATION END ++++++++++++

    //Close trace file
    sc_close_vcd_trace_file(trace_file);

}

