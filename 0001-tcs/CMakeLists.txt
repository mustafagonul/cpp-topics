cmake_minimum_required(VERSION 2.8)

project(0001-example)

add_executable(example main.cpp)

install(TARGETS example DESTINATION bin)
