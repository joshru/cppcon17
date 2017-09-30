cmake_minimum_required(VERSION 3.8)
project(cppcon17)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES bp_main.cc)
add_executable(best_practices ${SOURCE_FILES})