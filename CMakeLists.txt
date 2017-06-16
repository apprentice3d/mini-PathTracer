cmake_minimum_required(VERSION 3.5)
project(01_PathTracer1W)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/main.cpp src/vec3.cpp src/vec3.h src/ray.cpp src/ray.h)
add_executable(01_PathTracer1W ${SOURCE_FILES})