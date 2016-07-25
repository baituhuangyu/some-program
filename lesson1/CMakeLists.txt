cmake_minimum_required(VERSION 3.5)
project(lesson1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Manacher.c)
add_executable(lesson1 ${SOURCE_FILES})