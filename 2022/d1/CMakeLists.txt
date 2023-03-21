cmake_minimum_required(VERSION 3.24)
project(d1)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(d1
        include/d1.h
        src/d1.cpp)
