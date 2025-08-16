cmake_minimum_required(VERSION 4.0)
project(water_tank)

set(CMAKE_CXX_STANDARD 20)

add_executable(water_tank main.cpp
        WaterTank.h
        WaterTank.cpp)
