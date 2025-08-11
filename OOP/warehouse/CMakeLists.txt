cmake_minimum_required(VERSION 4.0)
project(warehouse)

set(CMAKE_CXX_STANDARD 20)

add_executable(warehouse main.cpp
        warehouse.h
        warehouse.cpp)
