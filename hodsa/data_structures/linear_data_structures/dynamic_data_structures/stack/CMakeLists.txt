cmake_minimum_required(VERSION 3.20.0)
project(stack)

add_executable(stack_c stack.c)

set(SOURCES stack.cpp 
            stack.hpp)
add_executable(stack_cpp ${SOURCES})
