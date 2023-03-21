cmake_minimum_required(VERSION 3.24)
project(d2)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(d2
        include/d2.h
        src/d2.cpp)
