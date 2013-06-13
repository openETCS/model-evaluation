/*
 * braking_model.hpp
 *
 *  Created on: 03.04.2013
 *      Author: benni
 */

#ifndef BRAKING_MODEL_HPP_
#define BRAKING_MODEL_HPP_


enum brake_model_selector_type
{
	PNEUMATIC_BRAKE 		= 0, /* every special brake off, only pneumatic brake*/
	EDDY_CURRENT_BRAKE 		= 1 << 1,
	MAGNETIC_SHOE_BRAKE 	= 1 << 2,
	ELECTRO_PNEUMATIC_BRAKE = 1 << 3,
	REGENERATIVE_BRAKE		= 1 << 4,
	ALL_BRAKES				= 0b1111
};

enum brake_position_type
{
	P_TRAIN_IN_P = 0,
	F_TRAIN_IN_P,
	F_TRAIN_IN_G
};






#endif /* BRAKING_MODEL_HPP_ */
