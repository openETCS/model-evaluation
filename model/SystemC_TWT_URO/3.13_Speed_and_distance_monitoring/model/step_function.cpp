/*
 * step_function.cpp
 *
 *  Created on: 10.04.2013
 *      Author: benni
 */

#include "headers/step_function.hpp"

step_function :: step_function(std::map<double,double> &values)
{
		step_values = values;
};

step_function :: step_function()
{

};

double step_function :: get_value(double x)
{
	/*TODO assert x_values < 0 */
	if (x < 0) x=0;

	// get first key which is bigger then x_value
	std::map<double,double>::iterator it = step_values.upper_bound(x);
	// decrement pointer to get right y_value
	return (--it)->second;


};

std::map<double,double>::iterator step_function::get_iterator_on_step(double x){

	// TODO how to handle values lower then zero
	if (x < 0) x=0;

	return --step_values.upper_bound(x);


};

/* changes Reference to Iterator pointing to first element equal to or greater than key
 * or to the last key (open interval) and returns whether the key is the last step */
bool step_function::get_iterator_on_step_return_whether_last(double x, std::map<double,double>::iterator &it)
{
	it=step_values.upper_bound(x);

	if(it == step_values.end())
	{
		it--;
		return true;
	}
	else
	{
		it--;
		return false;
	}
};


void step_function :: modify_map(double x_value, double y_value)
{

	step_values[x_value]=y_value;
};

double& step_function :: operator[](const double &key)
{

	return step_values.operator [](key);

};


void step_function::compress()
{
	auto it = this->get_begin_iterator();

	while(it != this->get_end_iterator())
	{

		double y_value = it->second;
		if(y_value == (++it)->second)
		{
			double erase_x=it->first;
			it--;
			step_values.erase(erase_x);
		}

	}
};


step_function& step_function::multiply_with(step_function &result, step_function first, step_function second)
{
	canonize(first.step_values,second.step_values);
	result.clear();
	std::map<double,double>::iterator it1 = first.get_begin_iterator();
	std::map<double,double>::iterator it2 = second.get_begin_iterator();

	/* because of "canonized" function, both it will have same end*/
	for(;(it1 != first.get_end_iterator())/*&&(it2 != second.get_end_iterator())*/;it1++,it2++)
	{
		result.modify_map(it1->first,it1->second * it2->second);
	}

	return result;

}

step_function& step_function::add(step_function &result, step_function first, step_function second)
{
	canonize(first.step_values,second.step_values);
	result.clear();
	std::map<double,double>::iterator it1 = first.get_begin_iterator();
	std::map<double,double>::iterator it2 = second.get_begin_iterator();

	/* because of "canonized" function, both it will have same end*/
	for(;(it1 != first.get_end_iterator())/*&&(it2 != second.get_end_iterator())*/;it1++,it2++)
	{
		result.modify_map(it1->first,it1->second + it2->second);
	}
	first.compress();
	second.compress();

	return result;

}

void step_function::multiply_scalar(double scalar)
{
	for (auto i : step_values)
	{
		i.second*=scalar;
	}
};

void step_function::add_scalar(double scalar)
{
	auto i = step_values.begin();
	for (; i != step_values.end();i++)
	{
		i->second+=scalar;
	}

};

void step_function::clear()
{
	step_values.clear();
	step_values[0]=0;
};
std::map<double,double>::iterator step_function ::get_begin_iterator()
{
	return step_values.begin();
};

std::map<double,double>::iterator step_function ::get_end_iterator()
{
	return step_values.end();
};

void step_function::print_map(){}

