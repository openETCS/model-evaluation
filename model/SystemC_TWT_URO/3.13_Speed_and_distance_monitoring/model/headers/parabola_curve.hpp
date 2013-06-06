/*
 * parabola_curve.hpp
 *
 *  Created on: 26.05.2013
 *      Author: benni
 */

#ifndef PARABOLA_CURVE_HPP_
#define PARABOLA_CURVE_HPP_

#include <map>
#include <systemc>

struct arc
{
	double begin;
	double end;
	double slope;
	double value;


//	arc(double begin, double end, double slope, double value)
//	{
//		this->begin = begin;
//		this->end = end;
//		this->slope=slope;
//		this->value = value;
//	}


	inline bool operator == (const arc & rhs) const {
			      return
			    		  (rhs.begin == begin) &&
			    		  (rhs.end == end) &&
			    		  (rhs.slope == slope) &&
			    		  (rhs.value == value);
			    }


};

struct parabola_curve
{



	std::map<double,arc> arcs;
	double get_value(double x);
	double get_parameter(double y);

	static double get_speed(double position,double begin, double slope, double v_begin);
	static double moved_distance(double speed, double slope, double v_begin);


	inline bool operator == (const parabola_curve & rhs) const {
		      return
		    		  (rhs.arcs == arcs);
		    }
	inline parabola_curve& operator = (const parabola_curve& rhs) {
	      arcs = rhs.arcs;
	      return *this;
	    }




	 inline friend std::ostream& operator << ( std::ostream& os,  parabola_curve const & v ) {

	    	//TODO
	    	return os;
	    }

	    inline friend void sc_trace(sc_core::sc_trace_file *tf, const parabola_curve & v,
	      const std::string & NAME ) {
	    	/* TODO !!*/

	    }
};




#endif /* PARABOLA_CURVE_HPP_ */
