cmake_minimum_required(VERSION 3.0.0)
project(hodsa)

set (CMAKE_CXX_STANDARD 20)

# Containers

# Container Adaptors
add_executable(stack src/cpp_stl/containers/container_adaptors/stack/stack.cpp)
add_executable(queue src/cpp_stl/containers/container_adaptors/queue/queue.cpp)
add_executable(priority_queue src/cpp_stl/containers/container_adaptors/priority_queue/priority_queue.cpp)
