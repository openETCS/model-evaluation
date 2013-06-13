/*
 * calc_brake_build_up_time.cpp
 *
 *  Created on: 23.05.2013
 *      Author: benni
 */

#include "headers/calc_brake_build_up_time.hpp"

void calc_of_brake_build_up_time::evaluate()
{
	// convert the status boolean to an int-selector for brake models
	int special_brake_status_int=0;
	special_brake_status_int |= (eddy_current_brake_status)? EDDY_CURRENT_BRAKE : 0;
	special_brake_status_int |= (magnetic_shoe_brake_status)? MAGNETIC_SHOE_BRAKE : 0;
	special_brake_status_int |= (regenerative_brake_status)? REGENERATIVE_BRAKE : 0;
	special_brake_status_int |= (electro_pneumatic_brake_status)? ELECTRO_PNEUMATIC_BRAKE: 0;


	T_be.write(T_brake_emergency[special_brake_status_int]);
}

