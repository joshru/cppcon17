cmake_minimum_required(VERSION 3.8)
project(cppcon17)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_library(stdc++fs UNKNOWN IMPORTED)
#set_property(TARGET stdc++fs PROPERTY IMPORTED_LOCATION "/opt/rh/devtoolset-6/root/usr/lib/gcc/x86_64-redhat-linux/6.3.1/libstdc++fs.a")

set(SOURCE_FILES src/main.cc src/cust.h)
add_executable(cppcon17 ${SOURCE_FILES})
#target_link_libraries(${PROJECT_NAME} stdc++fs)