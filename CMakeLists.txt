cmake_minimum_required(VERSION 2.8)

project(debugging CXX)

set(CMAKE_CXX_FLAGS "-std=c++11")

add_executable(assignment1 ds_assignment1.cpp)


macro(add_printout)
  add_custom_target(printout
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMAND a2ps -Afill -o- ${ARGN} | ps2pdf - ${CMAKE_BINARY_DIR}/printout.pdf)
endmacro()

add_printout(array.h array.cpp ds_assignment1.cpp)