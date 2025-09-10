cmake_minimum_required(VERSION 3.12.0)

project(lab2)

include_directories(include)

set(SOURCES 
    src/main.cpp
    src/array.cpp
    src/utils.cpp
    src/program.cpp
)

set(HEADERS
    include/array.h
    include/utils.h
    include/consts.h
    include/program.h
)

add_executable(lab2 ${SOURCES} ${HEADERS})