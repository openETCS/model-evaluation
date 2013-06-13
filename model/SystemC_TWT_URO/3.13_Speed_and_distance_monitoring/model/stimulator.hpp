/*
 * stimulator.hpp
 *
 *  Created on: 01.06.2013
 *      Author: benni
 */

#ifndef STIMULATOR_HPP_
#define STIMULATOR_HPP_

#include <systemc>
#include "headers/step_function.hpp"
#include "headers/step_function_of_step_functions.hpp"
#include "train_related_input_modules/braking_model.hpp"
#include "headers/track_condition.hpp"
#include "headers/parabola_curve.hpp"

SC_MODULE(brake_model_stim)
{

	sc_core::sc_vector< sc_core::sc_out<step_function> > A_break_emergency_models ;
	sc_core::sc_out<bool> regenerative_brake_status;
	sc_core::sc_out<bool> eddy_current_brake_status;
	sc_core::sc_out<bool> magnetic_shoe_brake_status;
	sc_core::sc_out<bool> electro_pneumatic_brake_status;

	sc_core::sc_out<brake_position_type> brake_position;


	sc_core::sc_vector<sc_core::sc_out<step_function_f> > Kdry_rst;
	sc_core::sc_vector<sc_core::sc_out<step_function> > Kwet_rst;
	sc_core::sc_out<double> M_NVEBCL;
	sc_core::sc_out<double> M_NVAVADH;
	sc_core::sc_vector< sc_core::sc_out<double> > A_NVMAXREDADH;


	SC_HAS_PROCESS(brake_model_stim);

	brake_model_stim(sc_core::sc_module_name n):
		sc_core::sc_module(n),
		A_break_emergency_models("brake_models",ALL_BRAKES ),
		Kdry_rst("K_dry_rst", ALL_BRAKES),
		Kwet_rst("K_wet_rst",ALL_BRAKES),
		A_NVMAXREDADH("reduced_adhesion_values", 3)


		{
			SC_THREAD(stim);


		}

	void stim()
	{
		regenerative_brake_status=false;
		eddy_current_brake_status=false;
		electro_pneumatic_brake_status=false;


		magnetic_shoe_brake_status=true;
		brake_position=P_TRAIN_IN_P;


		/*******  freely taken from ERA_ERTMS_040026_v1.2.doc***/
		double used_EBCL = 99.9999999;


		step_function pneumatic_brake;
		pneumatic_brake[0]=1;
		pneumatic_brake[25]=1.2;
		pneumatic_brake[60]=1.3;
		pneumatic_brake[200]=1.11;
		pneumatic_brake[220]=0.8;

		A_break_emergency_models[PNEUMATIC_BRAKE].write(pneumatic_brake);

		step_function kdry_rst_pneumatic_brake;

		kdry_rst_pneumatic_brake[0]=0.8;
		kdry_rst_pneumatic_brake[25]=0.81;
		kdry_rst_pneumatic_brake[60]=0.83;
		kdry_rst_pneumatic_brake[200]=0.819;
		kdry_rst_pneumatic_brake[220]=0.81;


		step_function_f kdry_rst_pneumatic_brake_f;
		kdry_rst_pneumatic_brake_f[used_EBCL]=kdry_rst_pneumatic_brake;
		Kdry_rst[PNEUMATIC_BRAKE].write(kdry_rst_pneumatic_brake_f);


		step_function Kwet_rst_pneumatic_brake;

		Kwet_rst_pneumatic_brake[0]=0.8;
		Kwet_rst_pneumatic_brake[25]=0.9;
		Kwet_rst_pneumatic_brake[60]=0.91;
		Kwet_rst_pneumatic_brake[200]=0.9;
		Kwet_rst_pneumatic_brake[220]=0.9;

		Kwet_rst[PNEUMATIC_BRAKE].write(Kwet_rst_pneumatic_brake);



		step_function magnetic_shoe_brake;

		magnetic_shoe_brake[0]=0.1;
		magnetic_shoe_brake[30]=0.6;
		magnetic_shoe_brake[60]=1;
		magnetic_shoe_brake[120]=3;
		magnetic_shoe_brake[200]=5;

		step_function::add(magnetic_shoe_brake,magnetic_shoe_brake,pneumatic_brake);
		A_break_emergency_models[MAGNETIC_SHOE_BRAKE].write(magnetic_shoe_brake);


		step_function kdry_rst_magnetic_shoe_brake;

		kdry_rst_magnetic_shoe_brake[0] = 0.8;
		kdry_rst_magnetic_shoe_brake[30] = 0.81;
		kdry_rst_magnetic_shoe_brake[60] = 0.83;
		kdry_rst_magnetic_shoe_brake[120] = 0.819;
		kdry_rst_magnetic_shoe_brake[200] = 0.81;

		step_function_f kdry_rst_magnetic_shoe_brake_f;
		kdry_rst_magnetic_shoe_brake_f[used_EBCL] = kdry_rst_magnetic_shoe_brake;

		Kdry_rst[MAGNETIC_SHOE_BRAKE].write(kdry_rst_magnetic_shoe_brake_f);


		step_function Kwet_rst_magnetic_shoe_brake;

		Kwet_rst_magnetic_shoe_brake[0]=0.8;
		Kwet_rst_magnetic_shoe_brake[30]=0.9;
		Kwet_rst_magnetic_shoe_brake[60]=0.9;
		Kwet_rst_magnetic_shoe_brake[120]=0.91;
		Kwet_rst_magnetic_shoe_brake[200]=0.92;

		Kwet_rst[MAGNETIC_SHOE_BRAKE].write(Kwet_rst_magnetic_shoe_brake);

		M_NVEBCL.write(used_EBCL);


		/** standard values from subset 26**/
		A_NVMAXREDADH[0] = 1.0;
		A_NVMAXREDADH[1] = 0.7;
		A_NVMAXREDADH[2] = 0.7;

	};



};


SC_MODULE(Acc_due_to_gradient_stim)
{

	sc_core::sc_out<step_function> gradients;
	sc_core::sc_out<double> G_TSR;

	SC_CTOR(Acc_due_to_gradient_stim)
	{
		SC_THREAD(stim);

	}

	void stim()
	{
		step_function gradients_local;
						gradients_local.step_values[0]=1;
						gradients_local.step_values[100]=-2;
						gradients_local.step_values[110]=2;
						gradients_local.step_values[120]=-1;
						gradients_local.step_values[130]=-2;
						gradients_local.step_values[500]= 0;
						gradients_local.step_values[900]= 1.4;

				gradients.write(gradients_local);
		G_TSR.write(0);
	};

};

SC_MODULE(train_data_stim)
{

	sc_core::sc_out<uint> L_TRAIN;
	sc_core::sc_out<bool> nom_value_valid;
	sc_core::sc_out<double> M_nom_val;
	sc_core::sc_out<double> M_nom_val_min;
	sc_core::sc_out<double> M_nom_val_max;

	SC_CTOR(train_data_stim)
		{
		SC_THREAD(stim);

		}

	void stim()
	{
		 L_TRAIN = 20;
		 nom_value_valid=true;
		 M_nom_val=10;
		 M_nom_val_min=0;
		 M_nom_val_max=0;
	}
};

SC_MODULE(DMI_stim)
{
	sc_core::sc_out<bool> slippery_rail_selected_by_driver;

	SC_CTOR(DMI_stim)
	{
		SC_THREAD(stim);
	}
	void stim()
	{
		slippery_rail_selected_by_driver=false;
	}

};


SC_MODULE(Track_Condition_stim)
{
	sc_core::sc_out<std::list<track_condition> > track_conditions;

	SC_CTOR(Track_Condition_stim)
	{
		SC_THREAD(stim);

	}
	void stim(){
		auto local = track_conditions.read();
		track_condition tc1(400,500,NO_MAGNETIC_SHOE_BRAKE);
		track_condition tc2(600,700,NO_MAGNETIC_SHOE_BRAKE);
		track_condition tc3(450,650,NO_MAGNETIC_SHOE_BRAKE);

		local.push_back(tc1);
		local.push_back(tc2);
		local.push_back(tc3);

		track_conditions.write(local);

	};
};

SC_MODULE(EBD_stim)
{
	sc_core::sc_out<double> target_position;
	sc_core::sc_out<double> target_speed;

	sc_core::sc_out<bool> MRSP_AND_NOT_LOA_TARGET;

	SC_CTOR(EBD_stim)
	{
		SC_THREAD(stim);
	}
	void stim(){

		target_position = 1000;
		target_speed = 0;
		MRSP_AND_NOT_LOA_TARGET=false;


	};
};

SC_MODULE(Moving_train_stim)
{
	sc_core::sc_out<double > d_est_front;

	SC_CTOR(Moving_train_stim)
	{
		SC_THREAD(stim);

	}
	void stim(){

		d_est_front=10;

	};
};

SC_MODULE(Output_stim)
{
	sc_core::sc_in<parabola_curve > EBD;

	SC_CTOR(Output_stim)
	{
		SC_THREAD(stim);

	}
	void stim(){



	};
};

#endif /* STIMULATOR_HPP_ */
