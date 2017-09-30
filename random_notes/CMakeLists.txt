cmake_minimum_required(VERSION 3.8)
project(cppcon17)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES notes_main.cc cust.h)
add_executable(random_notes ${SOURCE_FILES})