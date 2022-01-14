cmake_minimum_required(VERSION 3.6)
# Project Name
set(PROJECT rot13)

project(${PROJECT})

set(CMAKE_CXX_STANDARD 23)
set(SOURCES main.cpp
            rot13.cpp)

add_executable(${PROJECT} ${SOURCES})
