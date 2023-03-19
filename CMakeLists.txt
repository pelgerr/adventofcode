cmake_minimum_required(VERSION 3.24)
project(AdventOfCode)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)
include_directories(include/AdventOfCode)

add_executable(AdventOfCode
        include/AdventOfCode/algorithm.h
        src/2022/d1/22d1.cpp
        src/2022/d2/algorithm.cpp
        src/2022/d2/22d2.cpp src/2022/days.cpp include/AdventOfCode/days.h include/AdventOfCode/22d1.h include/AdventOfCode/22d2.h)
