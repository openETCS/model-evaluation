/*
 * parabola_curve.cpp
 *
 *  Created on: 26.05.2013
 *      Author: benni
 */

#include "headers/parabola_curve.hpp"
#include <math.h>
#include <algorithm>

double parabola_curve::get_value(double x)
{
	auto i = arcs.lower_bound(x);

	if(i->first == x)
	{
		return i->second.value;
	}
	else
	{
		// negate the slope, because deceleration is stored in positive numbers
		return get_speed(x,i->second.begin,-i->second.slope,i->second.value);
	}

};

double parabola_curve::get_parameter(double y)
{
	auto i = arcs.begin();

	while(i->second.value > y)
	{
		i++;
	}
	return moved_distance(y,-i->second.slope,i->second.value) +i->second.begin;

}
double parabola_curve::get_speed(double position,double begin, double slope, double v_begin)
{
	return sqrt(2*slope*(position-begin)+ v_begin* v_begin);

}

double parabola_curve::moved_distance(double speed, double slope, double v_begin)
{
	return ((speed*speed - v_begin*v_begin )/(2*slope));
}
