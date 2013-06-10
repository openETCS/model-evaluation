/*
 * calc_EBD.cpp
 *
 *  Created on: 26.05.2013
 *      Author: benni
 */

#include "headers/calc_EBD.hpp"
void Calc_ebd::eval()
{
	parabola_curve local_EBD;
	arc current_arc;

	//TODO implement EBD_foot_calculation for MRSP or LoA
	EBD_foot = target_position;



	std::map<double,step_function>::iterator i;
	//TODO remove senseless copy (solve const error)
	step_function_f local = A_save.read();

	// TODO find better solution for empty A_save in build up phase
	if(A_save.read().step_values.empty())return;

	local.get_iterator_on_step_return_whether_last_step(target_position,i);


	double position = target_position;
	double speed=target_speed;

	current_arc.begin= position;
	current_arc.end = position;
	current_arc.slope=0;
	current_arc.value = 0;
	local_EBD.arcs[position]=current_arc;


	// calculation runs from EBD_foot and accelerates until current d_est_front
	while (position >= d_est_front.read())
	{
		std::map<double,double>::iterator j;

		bool is_last_speed_step = i->second.get_iterator_on_step_return_whether_last(speed,j);
		//double actual_speed_step = j->first;
		double actual_deceleration = j->second;

		double next_speed_step=0;

		if(!is_last_speed_step)
		{
		j++;
		next_speed_step = j->first;
		};


		current_arc.end=position;
		current_arc.slope=actual_deceleration;


		//presume, that the arc will go until the next position step of A_save
		current_arc.begin=i->first;


		double speed_at_begin_of_arc=parabola_curve::get_speed(position,current_arc.begin,actual_deceleration,speed);



		//calculate whether the calculated speed until next position step in A_save is lower, then speed in current deceleration step_function
		while(!is_last_speed_step && speed_at_begin_of_arc >= next_speed_step && position >= d_est_front.read())
			{

				current_arc.begin=position - parabola_curve::moved_distance(next_speed_step,actual_deceleration,speed);
				if(current_arc.begin < d_est_front)
				{
					current_arc.begin = d_est_front;
					break;

				}
				current_arc.value=next_speed_step;

				local_EBD.arcs[current_arc.begin]=current_arc;


				position = current_arc.begin;
				speed = next_speed_step;

				// j is already on next_speed_step
				actual_deceleration=j->second;
				//actual_speed_step = next_speed_step;
				j++;

				if(j == i->second.get_end_iterator())
				{
					is_last_speed_step=true;
				}
				else
				{
					next_speed_step = j->first;
				}


				current_arc.end=position;
				current_arc.slope=actual_deceleration;


				//again presume, that he arc will go until the next position step of A_save
				current_arc.begin=i->first;

				speed_at_begin_of_arc=parabola_curve::get_speed(position,current_arc.begin,actual_deceleration,speed);
			};

		position = current_arc.begin;
		speed=speed_at_begin_of_arc;

		current_arc.value=speed_at_begin_of_arc;
		// put arc in EBD
		local_EBD.arcs[current_arc.begin]=current_arc;

		if (i != local.get_begin_iterator()) {
			// go to next step in A_save before current calc
			i--;
		}
	}
	EBD.write(local_EBD);




}

