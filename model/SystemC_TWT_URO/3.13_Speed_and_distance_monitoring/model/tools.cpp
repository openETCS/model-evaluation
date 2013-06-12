/*
 * tools.cpp
 *
 *  Created on: 10.06.2013
 *      Author: benni
 */
#include "headers/tools.hpp"

std::ostream cnull(0);

void print_deceleration_curve_with_gnuplot(Gnuplot & plot ,const parabola_curve &curve,double print_range_begin, double print_range_end)
{
	try{
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
	plot.set_style("lines");

	plot.set_yautoscale();
	plot.plot_equation(function.str(),"EBD");

	plot.set_style("points lc 7 pt 7");

	plot.plot_xy(points_begin,points_speed,"Begin of Arcs");
	}
	catch (const GnuplotException & e) {
		std::cout << "Error while plotting EBD with Gnuplot (" << e.what() <<")" << std::endl;

	}
}
