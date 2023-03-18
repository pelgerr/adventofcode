cmake_minimum_required(VERSION 3.24)
project(AdventOfCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(include/AdventOfCode)

add_executable(AdventOfCode
        include/AdventOfCode/algorithm.h
        src/2022/d1/d1.cpp
        src/2022/d2/algorithm.cpp
        src/2022/d2/d2.cpp)
