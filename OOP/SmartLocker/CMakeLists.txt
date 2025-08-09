cmake_minimum_required(VERSION 4.0)
project(SmartLocker)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SmartLocker
        main.cpp
        SmartLocker.cpp
        SmartLocker.h)
