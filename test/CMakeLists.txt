cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(This TestApp)

set(INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

set(HEADERS
	"include/Solution_test.hpp"
)
set(SOURCES 
	"source/main.cpp"
	"source/Solution_test.cpp"
)

add_executable(${This} ${SOURCES} ${HEADERS})
target_include_directories(${This} PRIVATE ${INCLUDE_DIR})
target_link_libraries(${This} PRIVATE LeetCode)