cmake_minimum_required(VERSION 2.6)
project(sortalgorithms)
list(APPEND CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -Wall -Werror -std=c++0x")
add_executable(sortalgorithms main.cpp linearsort.cpp)

install(TARGETS sortalgorithms RUNTIME DESTINATION bin)
