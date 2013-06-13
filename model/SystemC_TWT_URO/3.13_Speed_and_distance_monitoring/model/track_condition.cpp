/*
 * track_condition.cpp
 *
 *  Created on: 04.06.2013
 *      Author: benni
 */

#include "headers/track_condition.hpp"

std::ostream& operator<<(std::ostream &os, const std::list<track_condition> &obj){
		os << "List of Track Conditions:" << std::endl;
    	for (std::list<track_condition>::const_iterator i = obj.begin();i!=obj.end();i++)
    	{
    		switch (i->type)
    		    		{
    		    		case NO_REGENRATIVE_BRAKE:
    		    			os << "Regenerative Brake not allowed";
    		    			break;
    		    		case NO_EDDY_CURRENT_BRAKE_EMERGENCY:
    		    			os << "Eddy Current Brake not allowed";
    		    			break;
    		    		case NO_MAGNETIC_SHOE_BRAKE:
    		    			os << "Magnetic Shoe Brake not allowed";
    		    			break;
    		    		case REDUCED_ADHESION:
    		    			os << "Reduced Adhesion";

    		    		}
    		os << std::endl;

    		os << "begin: " << i->begin << std::endl;
    		os << "end: " << i->end << std::endl;
    		os << "length: " << i->length << std::endl;
    		os << std::endl << std::endl;
    	}
    	return os;
    }
;

void sc_trace(sc_core::sc_trace_file *tf, const std::list<track_condition> &v,
        const std::string &NAME ) {
};


