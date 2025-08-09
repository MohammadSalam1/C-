cmake_minimum_required(VERSION 4.0)
project(carRental)

set(CMAKE_CXX_STANDARD 20)

add_executable(carRental main.cpp
        car_rental.h
        car_rental.cpp)
