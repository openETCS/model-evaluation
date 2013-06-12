cmake_minimum_required (VERSION 2.6)
project (Testproject)


ADD_DEFINITIONS(-std=c++11 -g3 -Wl,-rpath=$SYSTEMC_HOME/lib-linux64)

include_directories ($ENV{SYSTEMC_HOME}/include)

link_directories ($ENV{SYSTEMC_HOME}/lib-linux64)


add_executable(main Acc_due_to_gradient.cpp calc_EBD.cpp gnuplot_i.cpp parabola_curve.cpp safe_deceleration.cpp step_function.cpp step_function_of_step_functions.cpp tools.cpp top.cpp track_condition.cpp)

target_link_libraries(main 
				systemc 
				m)
