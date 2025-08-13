cmake_minimum_required(VERSION 4.0)
project(bank)

set(CMAKE_CXX_STANDARD 20)

add_executable(bank main.cpp
        bank.h
        bank.cpp)
