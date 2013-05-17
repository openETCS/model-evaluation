#ifndef _HELPER_H_
#define _HELPER_H_

#include <iostream>

#define MODULE_OUT std::cout << sc_time_stamp() << " | " << name() << std::string(" | ")

extern std::ostream cnull;

#ifdef DEBUG
#define MODULE_DEBUG_OUT MODULE_OUT
#else
#define MODULE_DEBUG_OUT cnull
#endif

int rand_range(int min, int max);

bool rand_bool();

#endif

