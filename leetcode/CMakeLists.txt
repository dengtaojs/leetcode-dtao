cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(This LeetCode)

set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
include_directories(${INCLUDE_DIR})

set(HEADERS
    "include/leet/Solution.hpp"
)
set(SOURCES
    "source/Solution_Part01.cpp"
)

add_library(${This} ${HEADERS} ${SOURCES})
target_include_directories(${This} INTERFACE ${INCLUDE_DIR})


