cmake_minimum_required(VERSION 2.8.6)
add_definitions(-std=c++11)
add_subdirectory(modules)
add_executable(modularIP main.cpp $<TARGET_OBJECTS:modules>)