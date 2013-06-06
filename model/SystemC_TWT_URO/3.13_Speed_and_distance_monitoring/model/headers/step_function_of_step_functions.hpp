/*
 * step_function.hpp
 *
 *  Created on: 10.04.2013
 *      Author: benni
 */

#ifndef STEP_FUNCTION_F_HPP_
#define STEP_FUNCTION_F_HPP_

#include "step_function.hpp"
#include <systemc>
#include <map>

struct step_function_f
{

	inline bool operator == (const step_function_f & rhs) const {
	      return (rhs.step_values == step_values);
	    };
    inline step_function_f& operator = (const step_function_f& rhs) {
      step_values = rhs.step_values;
      return *this;
    };

    inline friend std::ostream& operator << ( std::ostream& os,  step_function_f const & v ) {

    	  os << "(";
          std::map<double,step_function>::const_iterator it= v.step_values.begin();
          for(;it!=v.step_values.end();it++)
          {
        	 os << "[" << it->first << "," << it->second << "]";

          }
          os << ")";
          return os;
        }
    inline friend void sc_trace(sc_core::sc_trace_file *tf, const step_function_f & v,
        const std::string & NAME ) {
    	/* TODO !!*/

    }
    step_function get_value(double x);
    step_function& operator[](const double &key);
    bool get_iterator_on_step_return_whether_last_step(double x, std::map<double,step_function>::iterator &it);
    void set_default(step_function y_value);
	void modify_map(double x_value, step_function y_value);
	void clear();
	void canonize(step_function_f &other_step_function);
	void compress();
	std::map<double,step_function>::iterator get_begin_iterator();
	std::map<double,step_function>::iterator get_end_iterator();

	static void multiply_with( step_function_f &result, step_function_f first, step_function_f second);
	static void add_step_function_as_scalar_on_second_order( step_function_f &result, step_function_f first, step_function second);



	void print_map();

	std::map<double,step_function> step_values;


};
#endif /* STEP_FUNCTION_HPP_ */
