/*
 * step_function.cpp
 *
 *  Created on: 10.04.2013
 *      Author: benni
 */

#include "headers/step_function_of_step_functions.hpp"


step_function step_function_f :: get_value(double x)
{
	/*TODO assert x_values < 0 */

	// get first key which is bigger then x_value
	std::map<double,step_function>::iterator it = step_values.upper_bound(x);
	// decrement pointer to get right y_value
	return (--it)->second;

}

step_function& step_function_f :: operator[](const double &key)
{

	return step_values.operator [](key);

};

/* changes Reference to Iterator pointing to first element equal to or greater than key
 * or to the last key (open interval) and returns whether the key is the last step */
bool step_function_f::get_iterator_on_step_return_whether_last_step(const double x, std::map<double,step_function>::iterator &it)
{
	if(step_values.empty())
		{
		it = step_values.end();
		return false;
		}

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

void step_function_f :: modify_map(double x_value, step_function y_value)
{

	step_values[x_value]=y_value;
}

/*Extend each step_function with the other x_values of the other function by repeating
 * the y_values. After this both function have the same amount of steps.*/
void step_function_f :: canonize(step_function_f &other_step_function)
{
	step_function::canonize(this->step_values,other_step_function.step_values);

}

void step_function_f::compress()
{
	std::map<double,step_function>::iterator it = this->get_begin_iterator();
	std::map<double,step_function>::iterator end = this->get_end_iterator();

	while(it != end)
	{

		step_function y_value = it->second;
		if(y_value == (++it)->second)
		{
			double erase_x=it->first;
			it--;
			step_values.erase(erase_x);
		}

	}
}


void step_function_f::multiply_with(step_function_f &result, step_function_f first, step_function_f second)
{
	first.canonize(second);
	result.clear();
	std::map<double,step_function>::iterator it1 = first.get_begin_iterator();
	std::map<double,step_function>::iterator it2 = second.get_begin_iterator();

	/* because of "canonized" function, both it will have same end*/
	for(;(it1 != first.get_end_iterator())/*&&(it2 != second.get_end_iterator())*/;it1++,it2++)
	{
		step_function::multiply_with(result.step_values[it1->first],it1->second,it2->second);

	}
	first.compress();
	second.compress();
}

void step_function_f::add_step_function_as_scalar_on_second_order(step_function_f &result, step_function_f first, step_function second)
{
	if(second.step_values.empty()){
		result=first;
		return;
	}
	if(first.step_values.empty()){
		return;
	}

	step_function::canonize <step_function,double>(first.step_values,second.step_values);

	auto i = second.step_values.begin();
	auto j = first.step_values.begin();
	for (  ; j != first.step_values.end(); i++,j++ )
	{
		result.step_values[j->first]=j->second;
		result.step_values[j->first].add_scalar(i->second);
	}
}

void step_function_f::clear()
{
	step_values.clear();
}
std::map<double,step_function>::iterator step_function_f ::get_begin_iterator()
{
	return step_values.begin();
}

std::map<double,step_function>::iterator step_function_f ::get_end_iterator()
{
	return step_values.end();
}

void step_function_f::print_map(){}

