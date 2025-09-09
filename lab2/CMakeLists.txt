cmake_minimum_required(VERSION 3.12.0)

project(lab2)

include_directories(include)

set(SOURCES 
    src/main.cpp
    src/array.cpp
)

set(HEADERS
    include/array.h
    include/array.cpp
)

add_executable(lab2 {$SOURCES} {HEADERS})