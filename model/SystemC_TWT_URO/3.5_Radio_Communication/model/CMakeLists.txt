cmake_minimum_required (VERSION 2.6)
project (Testproject)


SET(CMAKE_C_COMPILER  gcc-4.7)
SET(CMAKE_CXX_COMPILER  g++-4.7)

ADD_DEFINITIONS(-std=c++11 -g3 -Wl,-rpath=$SYSTEMC_HOME/lib-linux64)

include_directories ($ENV{SYSTEMC_HOME}/include)

link_directories ($ENV{SYSTEMC_HOME}/lib-linux64)


add_executable(main morc.cpp radio_message.cpp euroradio.cpp trackside.cpp main.cpp helper.cpp)

target_link_libraries(main 
				systemc 
				m)
