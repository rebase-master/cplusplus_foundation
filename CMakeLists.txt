cmake_minimum_required(VERSION 3.25)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp functions.cpp ref_ptr.cpp inline_function.cpp classes.cpp static_members.cpp oproverloading.cpp exceptions.cpp template_function.cpp)
