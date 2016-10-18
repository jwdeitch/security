cmake_minimum_required(VERSION 3.6)
project(ddos)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES example.c)
add_executable(example ${SOURCE_FILES})