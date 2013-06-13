/*
 * calc_EBD.hpp
 *
 *  Created on: 26.05.2013
 *      Author: benni
 */

#ifndef CALC_EBD_HPP_
#define CALC_EBD_HPP_

#include <systemc>
#include "parabola_curve.hpp"
#include "step_function_of_step_functions.hpp"

SC_MODULE(Calc_ebd)
{

	sc_core::sc_in<step_function_f> A_save;
	sc_core::sc_in<double> target_position;
	sc_core::sc_in<double> target_speed;

	sc_core::sc_in<double> d_est_front;


	sc_core::sc_in<bool> MRSP_AND_NOT_LOA_TARGET;

	sc_core::sc_out<parabola_curve> EBD;
	sc_core::sc_out<double> EBD_foot;


	void eval();

	SC_CTOR(Calc_ebd)
	{
		SC_METHOD(eval);
		sensitive  << A_save;
		sensitive  << target_position;
		sensitive  << target_speed;
		sensitive  << MRSP_AND_NOT_LOA_TARGET;

	}



};


#endif /* CALC_EBD_HPP_ */
