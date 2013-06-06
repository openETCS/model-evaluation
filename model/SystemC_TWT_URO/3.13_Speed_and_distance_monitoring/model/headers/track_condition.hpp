/*
 * track_condition.hpp
 *
 *  Created on: 03.05.2013
 *      Author: benni
 */

#ifndef TRACK_CONDITION_HPP_
#define TRACK_CONDITION_HPP_

#include <iostream>
#include <systemc>
#include <list>
enum track_condition_change_type
{
	NO_REGENRATIVE_BRAKE=0,
	NO_EDDY_CURRENT_BRAKE_EMERGENCY,
	NO_MAGNETIC_SHOE_BRAKE,
	REDUCED_ADHESION


};

struct track_condition
{

	track_condition_change_type type;
	double length;
	double begin;
	double end;

	track_condition(double begin,double end, track_condition_change_type type)
	{
		this->begin = begin;
		this->end = end;
		this->length = end -begin;
		this->type = type;

	};


	bool operator<( const track_condition& rhs)
	{return this->begin<rhs.begin;}

	inline bool operator == (const track_condition & rhs) const {
	      return (this->length == rhs.length) &&
	    		 (this->begin == rhs.begin)&&
	    		 (this ->end == rhs.end);
	    }

};

void sc_trace(sc_core::sc_trace_file *tf, const std::list<track_condition> &v, const std::string &NAME );
std::ostream& operator<<(std::ostream &os, const std::list<track_condition> &obj);


#endif /* track_CONDITION_HPP_ */
