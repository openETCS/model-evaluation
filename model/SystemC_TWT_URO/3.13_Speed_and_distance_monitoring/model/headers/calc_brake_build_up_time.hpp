/*
 * calc_brake_build_up_time.hpp
 *
 *  Created on: 22.05.2013
 *      Author: benni
 */

#ifndef CALC_BRAKE_BUILD_UP_TIME_HPP_
#define CALC_BRAKE_BUILD_UP_TIME_HPP_


#include <systemc>


#include "../train_related_input_modules/braking_model.hpp"

SC_MODULE(calc_of_brake_build_up_time)
{
	sc_core::sc_vector<sc_core::sc_in<double> > T_brake_emergency;

	sc_core::sc_in<bool> regenerative_brake_status;
	sc_core::sc_in<bool> eddy_current_brake_status;
	sc_core::sc_in<bool> magnetic_shoe_brake_status;
	sc_core::sc_in<bool> electro_pneumatic_brake_status;


	sc_core::sc_out<double> T_be;

	SC_HAS_PROCESS(calc_of_brake_build_up_time);

	calc_of_brake_build_up_time()
	:
		T_brake_emergency("T_brake_emergency",ALL_BRAKES)
	{
		SC_METHOD(evaluate);
		sensitive << regenerative_brake_status;
		sensitive << eddy_current_brake_status;
		sensitive << magnetic_shoe_brake_status;
		sensitive << electro_pneumatic_brake_status;
	}

	void evaluate();

};




#endif /* CALC_BRAKE_BUILD_UP_TIME_HPP_ */
