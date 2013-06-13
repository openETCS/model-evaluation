/*
 *
 * */
#ifndef ACC_DUE_TO_GRADIENT_HPP_
#define ACC_DUE_TO_GRADIENT_HPP_

#include <systemc>
#include "step_function.hpp"

const double g=9.81;

SC_MODULE(Acc_due_to_gradient)
{

	sc_core::sc_in<step_function> gradients;

	sc_core::sc_in<uint > L_TRAIN;
	sc_core::sc_in<bool> M_rotating_nom_valid;
	sc_core::sc_in<double> M_rotating_nom;
	sc_core::sc_in<double> M_rotating_min;
	sc_core::sc_in<double> M_rotating_max;

	sc_core::sc_in<double> G_TSR;


	sc_core::sc_out<step_function> A_Gradient;


	SC_CTOR(Acc_due_to_gradient)
	{

		SC_METHOD(eval);
		sensitive << L_TRAIN ;
		sensitive << M_rotating_nom_valid;
		sensitive << M_rotating_nom ;
		sensitive << M_rotating_min ;
		sensitive << M_rotating_max;
		sensitive << gradients;


	};

private:
	void eval();
	step_function train_length_compansation();

};


#endif /* 3_13_4_ACC_DUE_TO_GRADIENT_HPP_ */
