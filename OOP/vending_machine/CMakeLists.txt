cmake_minimum_required(VERSION 4.0)
project(vending_machine)

set(CMAKE_CXX_STANDARD 20)

add_executable(vending_machine main.cpp
        vending_machine.h
        vending_machine.cpp)
