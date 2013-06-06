/*
 * step_function.hpp
 *
 *  Created on: 10.04.2013
 *      Author: benni
 */

#ifndef STEP_FUNCTION_HPP_
#define STEP_FUNCTION_HPP_

#include <systemc>
#include <map>

struct step_function
{


	step_function(std::map<double,double> &values);
	step_function();


	inline bool operator == (const step_function & rhs) const {
	      return (rhs.step_values == step_values);
	    }
    inline step_function& operator = (const step_function& rhs) {
      step_values = rhs.step_values;
      return *this;
    }


    double get_value(double x);
    void set_default(double y_value);
	void modify_map(double x_value, double y_value);
	double& operator[](const double & key);



	void clear();

	void compress();
	std::map<double,double>::iterator get_begin_iterator();
	std::map<double,double>::iterator get_end_iterator();
	std::map<double,double>::iterator get_iterator_on_step(double x);

	bool get_iterator_on_step_return_whether_last(double x, std::map<double,double>::iterator &it);



	static step_function& multiply_with( step_function &result, step_function first, step_function second);
	static step_function& add(step_function &result, step_function first, step_function second);

	template<class T1 , class T2 >
	static void canonize(std::map<double,T1> &first , std::map<double,T2> &other);

	void multiply_scalar(double scalar);
	void add_scalar(double scalar);


	void print_map();

	std::map<double,double> step_values;



	inline friend std::ostream& operator << ( std::ostream& os,  step_function const & v ) {

	   	  os << "(";
	         std::map<double,double>::const_iterator it= v.step_values.begin();
	         for(;it!=v.step_values.end();it++)
	         {
	       	 os << "[" << it->first << "," << it->second << "]";

	         }
	         os << ")";
	         return os;
	       }
	   inline friend void sc_trace(sc_core::sc_trace_file *tf, const step_function & v,
	       const std::string & NAME ) {
	   	/* TODO !!*/

	   }

};




template<class T1 , class T2 >
void step_function :: canonize(std::map<double,T1> &first , std::map<double,T2> &other)
{
	auto it1 = first.begin();
	auto it2 = other.begin();

	// if both are empty return
	if(it1 == first.end() && it2 == other.end()) return;

	while (it1!= first.end() && it2 != other.end())
	{	// if both function have the x_value nothing to do
		if(it1->first == it2->first)
		{
			it1++;
			it2++;
			continue;
		}

		/* if second function is missing the x_value of first function,
		 * duplicate y_value of step before at x_value of first function*/
		if(it1->first < it2->first)
		{
			if(it2 != other.begin()) {
				it2--;
				other[it1->first]=it2->second;
				it2++;
			}
			else
			{
				other[it1->first]=it2->second;
				it2 = other.begin();

			}
			continue;
		}

		/* see above */
		if(it1->first > it2->first)
		{
			if(it1 != first.begin())
				{
				it1--;
				first[it2->first]=it1->second;
				it1++;
				}
			else
			{
				first[it2->first]=it1->second;
				it1 = first.begin();
			}

			continue;
		}


	};


	if(it1 == first.end())
	{

		// one function is at end, only iterate on second until end
		it1--;
		while (it2 != other.end())
		{
			first[it2->first]=it1->second;
			it2++;
		}
	}
	else
	{
		it2--;
				while (it1 != first.end())
				{
					other[it1->first]=it2->second;
					it1++;
				}
	}




}


#endif /* STEP_FUNCTION_HPP_ */
