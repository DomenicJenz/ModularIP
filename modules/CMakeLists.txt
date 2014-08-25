cmake_minimum_required(VERSION 2.8.6)
project(modules)
file(GLOB moduleFiles *.cpp *.h)
add_library(modules OBJECT ${moduleFiles})