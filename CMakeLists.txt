cmake_minimum_required(VERSION 3.5)
project(01_PathTracer1W)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp vec3.cpp vec3.h ray.cpp ray.h)
add_executable(01_PathTracer1W ${SOURCE_FILES})