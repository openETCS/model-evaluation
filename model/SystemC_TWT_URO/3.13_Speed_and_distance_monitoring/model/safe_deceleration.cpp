/*
 * safe_deceleration.cpp
 *
 *  Created on: 11.05.2013
 *      Author: benni
 */

#include "systemc.h"
#include "headers/safe_deceleration.hpp"
#include <list>
#include <algorithm>
#include <iterator>
#include <vector>
#include "train_related_input_modules/braking_model.hpp"
#include "headers/track_condition.hpp"

void safe_deceleration::calc_a_brake_emergency() {
	//make copy of track_conditions (since it is better for further computation copy into a vector)
	std::vector<track_condition> local_track_conditions(track_conditions.read().begin(), track_conditions.read().end());
	//track conditions need to be sorted by begin, guarantee it
	std::sort(local_track_conditions.begin(), local_track_conditions.end());

	// convert the status boolean to an int-selector for brake models
	// the Enum of Brake Selection Values is created from 2^n values to create a binary selector
	int special_brake_status_int = 0;
	special_brake_status_int |= (eddy_current_brake_status) ? EDDY_CURRENT_BRAKE : 0;
	special_brake_status_int |= (magnetic_shoe_brake_status) ? MAGNETIC_SHOE_BRAKE : 0;
	special_brake_status_int |= (regenerative_brake_status) ? REGENERATIVE_BRAKE : 0;
	special_brake_status_int |= (electro_pneumatic_brake_status) ? ELECTRO_PNEUMATIC_BRAKE : 0;

	//initialize track_conditions selector with all brakes enabled (no track_condition applied)
	int active_conditions_selector = ALL_BRAKES;
	int new_active_conditions_selector = ALL_BRAKES;

	double iterated_position = 0;
	std::list<track_condition> active_conditions;

	// init maps with value independent from track conditions
	A_brake_safe.clear();
	A_brake_emergency.clear();
	A_brake_emergency.modify_map(0, A_break_emergency_models[special_brake_status_int]);

	//TODO check whether init position is appropriate
	calc_a_brake_safe(0, special_brake_status_int);

	if (!track_conditions.read().empty()) {
		// get first track_condition
		auto i = std::begin(local_track_conditions);

		//iterate until end of track condition list or EBD_foot
		while (iterated_position < EBD_foot && (!active_conditions.empty() || i != local_track_conditions.end())) {

			active_conditions_selector = new_active_conditions_selector;
			// check whether
			if (active_conditions.empty() || (i != local_track_conditions.end() &&
					// the new condition begins before the end of the nearest end of an current active condition
					active_conditions.front().end > i->begin &&
					// the condition affect the braking selection
					convert_trackcondition_to_brake_selector(i->type) > PNEUMATIC_BRAKE)) {


				auto j = active_conditions.begin();
				for (; j != active_conditions.end(); j++) {
					// if a track condition of this type is already active, extend this condition to the end of actual track condition
					if (j->type == i->type) {
						track_condition temp = *j;
						temp.end = i->end;

						//insert the new track condition with the order of the end of the condition
						auto insert = std::upper_bound(std::begin(active_conditions), std::end(active_conditions), temp,
								[](track_condition a, track_condition b)->bool {return a.end < b.end;});
						active_conditions.insert(insert, *i);
						active_conditions.remove(*j);

						break;
					}
				}

				//if no such trackcondition is found, apply the new one
				if (j == active_conditions.end()) {

					//insert the new track condition with the order of the end of the condition
					auto insert = std::upper_bound(std::begin(active_conditions), std::end(active_conditions), *i,
							[](track_condition a, track_condition b)->bool {return a.end < b.end;});
					active_conditions.insert(insert, *i);

					//change the active conditions selector to reflect the new prohibition of a brake
					new_active_conditions_selector &= ~convert_trackcondition_to_brake_selector(i->type);
				}

				//move the iterated position to begin, because in this segment wont be any more changes
				//cornercase: if more than one condition start at this point the A_brake_emergency will be overwritten until all conditions are processed
				iterated_position = i->begin;

				i++;

			}

			//next condition begin is after the end of a currently active condition, so revoke that condition
			else {
				track_condition front = active_conditions.front();

				// change selector and revoke old condition
				new_active_conditions_selector |= convert_trackcondition_to_brake_selector(front.type);

				// move iterated to removed end position
				iterated_position = front.end;

				//remove the condition from list
				active_conditions.pop_front();

			}

			if (new_active_conditions_selector != active_conditions_selector) {
				// save new state of selection of brakes and calculate a_brake_safe
				A_brake_emergency.modify_map(iterated_position,
						A_break_emergency_models[new_active_conditions_selector & special_brake_status_int]);
				calc_a_brake_safe(iterated_position, new_active_conditions_selector & special_brake_status_int);
			}
		}
	}

}
;

void safe_deceleration::calc_a_brake_safe(double d,int brake_selector)
{

		// implement formula §3.13.6.2.1.4
		// A_brake_safe(V,d) = Kdry_rst(V, M_NVEBCL) * (Kwet_rst(V) + M_NVAVADH
		//*(1- Kwet_rst(V))) * A_brake_emergency(V,d)

		// TODO make more readable with operator overloading
		step_function factor1 = Kdry_rst[brake_selector].read().step_values.at(M_NVEBCL);

		step_function factor2 = Kwet_rst[brake_selector].read();
		factor2.multiply_scalar(-1);
		factor2.add_scalar(1);
		factor2.multiply_scalar(M_NVAVADH);
		step_function::add(factor2,factor2,Kwet_rst[brake_selector].read());


		step_function factor3 = A_brake_emergency.get_value(d);


		step_function::multiply_with(factor1,factor1,factor2);
		step_function::multiply_with(A_brake_safe.step_values[d],factor1,factor3);


};

void safe_deceleration::calc_a_safe()
{

	if(!check_inputs()) return;
	cout << sc_delta_count() << std::endl;

	calc_a_brake_emergency();

	double A_MAXREDADH;


	//choose MAXREADH depending on brake position
	//§3.13.6.2.1.6
	//TODO check whether eddy_current and magnetic_shoe brake are the only wheel/rail independent brakes
	if(brake_position.read() == P_TRAIN_IN_P)
	{
		if(eddy_current_brake_status || magnetic_shoe_brake_status)
		{
			A_MAXREDADH = A_NVMAXREDADH[0];
		}
		else
		{
			A_MAXREDADH = A_NVMAXREDADH[1];
		}
	}
	else
	{
		A_MAXREDADH = A_NVMAXREDADH[2];
	}

	// TODO implement also local areas of reduced adhesion from track condition profile


	//limit the deceleration with A_MAXREADADH
	// Part of §3.13.6.2.1.3  --> MIN(A_brake_safe(V,d) , A_MAXREDADH)
	if(slippery_rail_selected_by_driver)
	{
		for(auto i : A_brake_safe.step_values)
		{
			for(auto j : i.second.step_values)
			{
				i.second.step_values[j.first] = std::min(j.second,A_MAXREDADH);
			}

		}

	}


	//implement §3.13.6.2.1.3 formula --> A_safe(V,d) = A_brake_safe(V,d) + A_gradient(d)
	step_function_f local_a_safe;
	step_function_f::add_step_function_as_scalar_on_second_order(local_a_safe,A_brake_safe,A_gradient.read());


	A_safe.write(local_a_safe);


	//TODO hack until doing right buildup in stimulator
	if(local_a_safe.step_values.empty())
	{
		next_trigger(SC_ZERO_TIME);
	}
};

brake_model_selector_type safe_deceleration::convert_trackcondition_to_brake_selector(track_condition_change_type type)
{
	switch (type)
	{
	case NO_EDDY_CURRENT_BRAKE_EMERGENCY: return EDDY_CURRENT_BRAKE;
	case NO_MAGNETIC_SHOE_BRAKE: return MAGNETIC_SHOE_BRAKE;
	case NO_REGENRATIVE_BRAKE: return REGENERATIVE_BRAKE;
	default: return PNEUMATIC_BRAKE;
	}
}

bool safe_deceleration::check_inputs()
{
	if (A_gradient.read().step_values.empty())
		return false;

	// check whether pneumatic brake is valid
    if(A_break_emergency_models.begin()->read().step_values.empty()) return false;
    if(Kdry_rst.begin()->read().step_values.empty()) return false;
    if(Kwet_rst.begin()->read().step_values.empty()) return false;

	 return true;
}
