cmake_minimum_required(VERSION 3.17)
project(phone2 C)

add_subdirectory(googletest)
enable_testing()
add_subdirectory(tests)

set(CMAKE_C_STANDARD 99)

add_executable(phone2 main.c phone.h list.c tests/test.cpp)