/*
 * safe_deceleration.hpp
 *
 *  Created on: 29.04.2013
 *      Author: benni
 */

#ifndef SAFE_DECELERATION_HPP_
#define SAFE_DECELERATION_HPP_

#include <systemc>

#include "step_function.hpp"
#include "step_function_of_step_functions.hpp"
#include <list>
#include "track_condition.hpp"
#include "../train_related_input_modules/braking_model.hpp"


SC_MODULE(safe_deceleration)
{
	sc_core::sc_in<uint> L_TRAIN;
	sc_core::sc_in<double> EBD_foot;

	// vector is addressed via a binary selector Enum
	sc_core::sc_vector< sc_core::sc_in<step_function> > A_break_emergency_models ;
	sc_core::sc_in<bool> regenerative_brake_status;
	sc_core::sc_in<bool> eddy_current_brake_status;
	sc_core::sc_in<bool> magnetic_shoe_brake_status;
	sc_core::sc_in<bool> electro_pneumatic_brake_status;

	sc_core::sc_in<brake_position_type> brake_position;

	sc_core::sc_in<step_function> A_gradient;
	sc_core::sc_vector<sc_core::sc_in<step_function_f> > Kdry_rst;
	sc_core::sc_vector<sc_core::sc_in<step_function> > Kwet_rst;
	sc_core::sc_in<double> M_NVEBCL;
	sc_core::sc_in<double> M_NVAVADH;

	sc_core::sc_in<std::list<track_condition> > track_conditions;

	sc_core::sc_vector< sc_core::sc_in<double> > A_NVMAXREDADH;
	sc_core::sc_in<bool> slippery_rail_selected_by_driver;


	sc_core::sc_out< step_function_f> A_safe;

	step_function_f A_brake_safe;
	step_function_f A_brake_emergency;


	SC_HAS_PROCESS(safe_deceleration);
	safe_deceleration(sc_core::sc_module_name name)
	:
	sc_core::sc_module(name),
	A_break_emergency_models("brake_models",ALL_BRAKES ),
	Kdry_rst("K_dry_rst", ALL_BRAKES),
	Kwet_rst("K_wet_rst",ALL_BRAKES),
	A_NVMAXREDADH("reduced_adhesion_values", 3)


	{

		SC_METHOD(calc_a_safe);
		sensitive << L_TRAIN;
		sensitive << EBD_foot;

		sensitive << regenerative_brake_status;
		sensitive << eddy_current_brake_status;
		sensitive << magnetic_shoe_brake_status;
		sensitive << electro_pneumatic_brake_status;

		sensitive << track_conditions;

		sensitive << A_gradient;
		sensitive << slippery_rail_selected_by_driver;

	}


	void calc_a_brake_safe(double d,int brake_selector);
	void calc_a_brake_emergency();

	void calc_a_safe();
	bool check_inputs();


private:
	brake_model_selector_type convert_trackcondition_to_brake_selector(track_condition_change_type type);
};

#endif /* SAFE_DECELERATION_HPP_ */
