cmake_minimum_required(VERSION 3.22)
project(adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(adapter main.cpp Person.h PersonTools.h)
