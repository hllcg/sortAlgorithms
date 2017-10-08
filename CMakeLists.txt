cmake_minimum_required(VERSION 2.6)
project(sortalgorithms)

add_executable(sortalgorithms main.cpp)

install(TARGETS sortalgorithms RUNTIME DESTINATION bin)
