cmake_minimum_required(VERSION 2.8.6)
project(base)
file(GLOB baseFiles *.cpp *.h)
add_library(base OBJECT ${baseFiles})