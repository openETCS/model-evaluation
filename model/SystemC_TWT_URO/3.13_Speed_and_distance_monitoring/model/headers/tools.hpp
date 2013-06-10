/*
 * tools.hpp
 *
 *  Created on: 10.06.2013
 *      Author: benni
 */

#ifndef TOOLS_HPP_
#define TOOLS_HPP_

#include <iostream>
#include "gnuplot_i.hpp"
#include "parabola_curve.hpp"

#define MODULE_OUT std::cout << "time: " << sc_core::sc_time_stamp() << " | deltacycle: "<< sc_core::sc_delta_count()  << " | " << name() << std::string(" | ")

extern std::ostream cnull;

#ifdef DEBUG
#define MODULE_DEBUG_OUT MODULE_OUT
#else
#define MODULE_DEBUG_OUT cnull
#endif

void print_deceleration_curve_with_gnuplot(Gnuplot & plot ,const parabola_curve &curve,double print_range_begin, double print_range_end);


#endif /* TOOLS_HPP_ */
