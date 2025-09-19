cmake_minimum_required(VERSION 3.12.0)

project(lab7)

include_directories(include)

set(SOURCES
    src/main.cpp
)

add_executable(lab7 ${SOURCES})