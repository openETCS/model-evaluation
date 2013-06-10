#include <stdio.h>
#include <stdlib.h>
#include <systemc>

#include "headers/step_function.hpp"
#include "headers/Acc_due_to_gradient.hpp"
#include "headers/safe_deceleration.hpp"
#include "stimulator.hpp"
#include "headers/calc_EBD.hpp"
#include "headers/track_condition.hpp"
#include "headers/gnuplot_i.hpp"
#include <string>
#include <vector>

using namespace sc_core;

SC_MODULE(top){

	sc_out<double> stim;
	SC_CTOR(top)
	{
		SC_THREAD(stimulate);
	}


	void stimulate()
	{
		for(int i = 0 ; i< 60 ; i++)
		{
			stim=i;
			wait(1,SC_NS);
		}

	}


};

void print_deceleration_curve_with_gnuplot(Gnuplot & plot ,const parabola_curve &curve,double print_range_begin, double print_range_end)
{
	std::ostringstream function;

	std::vector<double> points_begin;
	std::vector<double> points_speed;

	for (auto i : curve.arcs)
	{
		function << "((x>=" << i.second.begin << ")&&(x<" << i.second.end << "))? ";
		function << "(2*("<< -i.second.slope << ")*(x-" << i.second.begin << ")+" << i.second.value << "**(2))**(1.0/2.0)";
		function << ":";

		points_begin.push_back(i.first);
		points_speed.push_back(i.second.value);
	}

	function << "1/0" ;



	plot << "set term wxt";
	//plot_EDB.set_xrange(d_est_front.read(),EBD_foot.read()+200);
	plot.set_style("lines");

	plot.set_yautoscale();
	plot.plot_equation(function.str(),"EBD");

	plot.set_style("points lc 7 pt 7");

	plot.plot_xy(points_begin,points_speed,"Begin of Arcs");
}


int sc_main(int argc,char *argv[])
{



	/**************** INPUTs for acc_due_to_gradient *****************************/


	Acc_due_to_gradient acc_due_to_gradient_module("acceleration_gradient");
	Acc_due_to_gradient_stim acc_due_to_gradient_stim("gradient_stimulator");
	train_data_stim td_stim("train_data_stimulator");

	/**** signal definitions *****/

	sc_core::sc_signal<step_function> gradient_signal,A_gradient;

	sc_core::sc_signal<uint> L_TRAIN;
	sc_core::sc_signal<bool> nom_value_valid;
	sc_core::sc_signal<double> M_nom_val;
	sc_core::sc_signal<double> M_nom_val_min;
	sc_core::sc_signal<double> M_nom_val_max;

	/******* signal bindings train data *************/
	acc_due_to_gradient_module.L_TRAIN(L_TRAIN);
	acc_due_to_gradient_module.M_rotating_nom(M_nom_val);
	acc_due_to_gradient_module.M_rotating_min(M_nom_val_min);
	acc_due_to_gradient_module.M_rotating_max(M_nom_val_max);
	acc_due_to_gradient_module.M_rotating_nom_valid(nom_value_valid);

	td_stim.L_TRAIN(L_TRAIN);
	td_stim.M_nom_val(M_nom_val);
	td_stim.M_nom_val_max(M_nom_val_max);
	td_stim.M_nom_val_min(M_nom_val_min);
	td_stim.nom_value_valid(nom_value_valid);

	/*******signal binding gradients ****************/
	acc_due_to_gradient_module.gradients(gradient_signal);
	acc_due_to_gradient_stim.gradients(gradient_signal);


	/***********output signal bindings ***********/
	acc_due_to_gradient_module.A_Gradient(A_gradient);


/*******************INPUTS for safe_deceleration *****************************/

	safe_deceleration safe_decel("safe_deceleration");
	brake_model_stim bm_stim("safe_deceleration_stim");
	Track_Condition_stim tc_stim("Track_Condition_Stimulator");
	DMI_stim dmi_stim("DMI_Stimulator");

	/**** signal definitions *****/

	sc_core::sc_signal<double> EBD_foot;
	sc_core::sc_signal<double> d_est_front;

	// vector is addressed via a binary selector Enum
	sc_core::sc_vector< sc_core::sc_signal<step_function> > A_break_emergency_models("top_model_brake_model_vector",ALL_BRAKES) ;
	sc_core::sc_signal<bool> regenerative_brake_status;
	sc_core::sc_signal<bool> eddy_current_brake_status;
	sc_core::sc_signal<bool> magnetic_shoe_brake_status;
	sc_core::sc_signal<bool> electro_pneumatic_brake_status;

	sc_core::sc_signal<brake_position_type> brake_position;

	sc_core::sc_vector<sc_core::sc_signal<step_function_f> > Kdry_rst("top_model_kdry_signals",ALL_BRAKES);
	sc_core::sc_vector<sc_core::sc_signal<step_function> > Kwet_rst("top_model_kwet_signals",ALL_BRAKES);
	sc_core::sc_signal<double> M_NVEBCL;
	sc_core::sc_signal<double> M_NVAVADH;

	sc_core::sc_signal<std::list<track_condition> > track_conditions;

	sc_core::sc_vector< sc_core::sc_signal<double> > A_NVMAXREDADH("top_model_red_adh_signals",ALL_BRAKES);
	sc_core::sc_signal<bool> slippery_rail_selected_by_driver;

	sc_core::sc_signal< step_function_f> A_save;


	/***** Input signal bindings **********/
	safe_decel.A_gradient(A_gradient);
	safe_decel.EBD_foot(EBD_foot);
	safe_decel.L_TRAIN(L_TRAIN);

	/**** signal bindings braking model *****/
	bm_stim.A_NVMAXREDADH.bind(A_NVMAXREDADH);
	bm_stim.A_break_emergency_models.bind(A_break_emergency_models);
	bm_stim.Kdry_rst.bind(Kdry_rst);
	bm_stim.Kwet_rst.bind(Kwet_rst);
	bm_stim.M_NVAVADH(M_NVAVADH);
	bm_stim.M_NVEBCL(M_NVEBCL);
	bm_stim.brake_position(brake_position);
	bm_stim.eddy_current_brake_status(eddy_current_brake_status);
	bm_stim.electro_pneumatic_brake_status(electro_pneumatic_brake_status);
	bm_stim.magnetic_shoe_brake_status(magnetic_shoe_brake_status);
	bm_stim.regenerative_brake_status(regenerative_brake_status);

	safe_decel.A_NVMAXREDADH.bind(A_NVMAXREDADH);
	safe_decel.A_break_emergency_models(A_break_emergency_models);
	safe_decel.Kdry_rst(Kdry_rst);
	safe_decel.Kwet_rst(Kwet_rst);
	safe_decel.M_NVAVADH(M_NVAVADH);
	safe_decel.M_NVEBCL(M_NVEBCL);
	safe_decel.brake_position(brake_position);
	safe_decel.eddy_current_brake_status(eddy_current_brake_status);
	safe_decel.electro_pneumatic_brake_status(electro_pneumatic_brake_status);
	safe_decel.magnetic_shoe_brake_status(magnetic_shoe_brake_status);
	safe_decel.regenerative_brake_status(regenerative_brake_status);

	/**** signal bindings track condition *****/
	tc_stim.track_conditions(track_conditions);
	safe_decel.track_conditions(track_conditions);

	/**** signal bindings DMI  *****/
	dmi_stim.slippery_rail_selected_by_driver(slippery_rail_selected_by_driver);
	safe_decel.slippery_rail_selected_by_driver(slippery_rail_selected_by_driver);

	/**** output signal bindings *****/
	safe_decel.A_safe(A_save);

	/*******************INPUTS for calc EBD *****************************/
	Calc_ebd calc_ebd("Calculation_EBD");
	EBD_stim ebd_stim("EBD_stimulator");
	Moving_train_stim moving_train("moving_train_stim");
	Output_stim out("output");

	/********* INPUT signal bindings *******/
	calc_ebd.A_save(A_save);


	/**** signal definitions ******/

	sc_core::sc_signal<double> target_position;
	sc_core::sc_signal<double> target_speed;

	sc_core::sc_signal<bool> MRSP_AND_NOT_LOA_TARGET;


	sc_core::sc_signal<parabola_curve> EBD;

	/**** signal bindings target *****/
	ebd_stim.MRSP_AND_NOT_LOA_TARGET(MRSP_AND_NOT_LOA_TARGET);
	ebd_stim.target_position(target_position);
	ebd_stim.target_speed(target_speed);

	calc_ebd.MRSP_AND_NOT_LOA_TARGET(MRSP_AND_NOT_LOA_TARGET);
	calc_ebd.target_position(target_position);
	calc_ebd.target_speed(target_speed);

	/***** signal binding moving train **********/
	calc_ebd.d_est_front(d_est_front);
	moving_train.d_est_front(d_est_front);

	/**** OUTPUT Signal bindings ********/
	calc_ebd.EBD(EBD);
	calc_ebd.EBD_foot(EBD_foot);
	out.EBD(EBD);

	sc_start(1,sc_core::SC_NS);
	Gnuplot plot_EBD;

	print_deceleration_curve_with_gnuplot(plot_EBD,EBD.read(),0,0);


	//sc_close_vcd_trace_file(fp);
	return(0);
};

