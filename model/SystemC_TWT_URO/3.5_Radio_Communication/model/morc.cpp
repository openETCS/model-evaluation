#include "morc.h"


namespace SUT {

void MoRC::SMConnect::state_connection_order_received() {
    MODULE_DEBUG_OUT << "state_connection_order_received\n";
    if (parent.o_conn_status->read()) {
        MODULE_OUT << "Initiation of connection ordered, but already established. Order ignored.\n";
        next_state = NULL;
    } else next_state = &SMConnect::state_not_connected_connection_order;
}


void MoRC::SMConnect::state_not_connected_connection_order() {
    MODULE_DEBUG_OUT << "state_not_connected_connection_order\n";
    int retries = 0;
    if (!parent.i_safe_radio_status->read()) {
        for (retries = 0; !parent.i_safe_radio_status->read() && retries < 3; retries++) {
            parent.o_safe_radio_order->write(true);
            // Wait at most 40 seconds for setting up a safe radio connection
            parent.wait(40, SC_SEC, parent.i_safe_radio_status->value_changed_event());
        }
    }
    if (retries == 3) next_state = &SMConnect::state_safe_radio_failed_notify_driver;
    else next_state = &SMConnect::state_safe_radio_established;
}

void MoRC::SMConnect::state_safe_radio_established() {
    MODULE_DEBUG_OUT << "state_safe_radio_established\n";
    RadioMessage msg;
    msg.type = RadioMessage::INIT_OBU;
    parent.o_trackside->write(msg);
    next_state = &SMConnect::state_init_sent;
    waiting_time_left = time_to_wait_for_trackside_message;
}

void MoRC::SMConnect::state_init_sent() {
    MODULE_DEBUG_OUT << "state_init_sent\n";
    sc_time before_wait = sc_time_stamp();
    parent.wait(waiting_time_left, parent.i_safe_radio_status->value_changed_event() | parent.i_trackside->data_written_event());
    waiting_time_left -= sc_time_stamp() - before_wait;
    if (!parent.i_safe_radio_status->read()) {
        next_state = &SMConnect::state_init_sent_safe_radio_lost;
        return;
    }
    RadioMessage msg;
    bool res = parent.i_trackside->nb_read(msg);
    if (!res) {
        next_state = &SMConnect::state_timeout_waiting_for_trackside;
        return;
    }
    if (msg.type != RadioMessage::SYS_VER) {
        next_state = &SMConnect::state_wrong_message_from_trackside;
        return;
    }
    if (msg.payload.system_version != SYSTEM_VERSION) {
        next_state = &SMConnect::state_wrong_system_version;
        return;
    }
    next_state = &SMConnect::state_sysver_received;
}

void MoRC::SMConnect::state_sysver_received() {
    MODULE_DEBUG_OUT << "state_sysver_received\n";
    parent.conn_established_event.notify();
    RadioMessage msg;
    msg.type = RadioMessage::ESTABLISHED;
    parent.o_trackside->write(msg);
    next_state = NULL;
}

void MoRC::SMConnect::state_init_sent_safe_radio_lost() {
    MODULE_DEBUG_OUT << "state_init_sent_safe_radio_lost\n";
    sc_time before_wait = sc_time_stamp();
    if (sc_time(300,SC_SEC) < waiting_time_left)
        parent.wait(300, SC_SEC, parent.i_safe_radio_status->value_changed_event());
    else
        parent.wait(waiting_time_left, parent.i_safe_radio_status->value_changed_event());
    waiting_time_left -= sc_time_stamp() - before_wait;
    if (parent.i_safe_radio_status->read()) next_state = &SMConnect::state_init_sent;
    else next_state = &SMConnect::state_safe_radio_failed_notify_driver;
}

void MoRC::SMConnect::state_safe_radio_failed_notify_driver() {
    MODULE_DEBUG_OUT << "state_safe_radio_failed_notify_driver\n";
    MODULE_OUT << "Failed establishing a safe radio connection. NOTIFY DRIVER!\n";
    next_state = NULL;
}

void MoRC::SMConnect::state_wrong_system_version() {
    MODULE_OUT << "state_wrong_system_version\n";
    RadioMessage msg;
    msg.type = RadioMessage::NO_COMPAT_VERSION;
    parent.o_trackside->write(msg);
    MODULE_OUT << "Trackside does not support system version. NOTIFY DRIVER!\n";
    next_state = NULL;
}

void MoRC::SMConnect::state_timeout_waiting_for_trackside() {
    MODULE_DEBUG_OUT << "state_timeout_waiting_for_trackside\n";
    MODULE_OUT << "Timeout waiting for trackside message. NOTIFY DRIVER!\n";
    next_state = NULL;
}

void MoRC::SMConnect::state_wrong_message_from_trackside() {
    MODULE_DEBUG_OUT << "state_wrong_message_from_trackside\n";
    MODULE_OUT << "Received wrong message from trackside (system version expected). NOTIFY DRIVER!\n";
    next_state = NULL;
}

//Constructor with the state execution loop
MoRC::SMConnect::SMConnect(MoRC& parent) : parent(parent) {
    next_state = &SMConnect::state_connection_order_received;
    while(next_state) (this->*next_state)();
}


void MoRC::order_handler() {
    while(true) {
        bool o = i_conn_order->read();
        if (o) {
            //Create and execute connection state machine
            SMConnect(*this);
        } else {
            MODULE_OUT << "Termination of connection ordered.\n";
        }
    }
}

void MoRC::safe_radio_handler() {
    while (true) {
        wait();
        if (!i_safe_radio_status->read()) {
            wait(300, SC_SEC, i_safe_radio_status->value_changed_event());
            if (!i_safe_radio_status->read()) {
                MODULE_OUT << "Connection was terminated because safe radio connection could not be re-established within 5 minutes.\n";
                conn_lost_event.notify();
            } else MODULE_OUT << "Safe radio connection was successfully re-established.\n";
        }
    }
}

void MoRC::conn_status_signal_driver() {
    while(true) {
        wait(conn_established_event);
        o_conn_status->write(true);
        wait(conn_lost_event);
        o_conn_status->write(false);
    }
}

MoRC::MoRC(const sc_module_name& name) : sc_module(name) {
    SC_THREAD(safe_radio_handler);
    sensitive << i_safe_radio_status;
    SC_THREAD(order_handler);
    SC_THREAD(conn_status_signal_driver);
//        SC_THREAD(trackside_msg_handler);
}

}
