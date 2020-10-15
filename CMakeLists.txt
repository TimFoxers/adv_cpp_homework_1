cmake_minimum_required(VERSION 3.17)
project(phone2)
add_subdirectory(googletest)
enable_testing()
add_subdirectory(tests)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)

add_executable(phone2 main.c phone.h list.c)
add_executable(g_test tests/test.cpp)

enable_testing()