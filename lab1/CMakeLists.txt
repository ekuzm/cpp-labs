cmake_minimum_required(VERSION 3.12.0)

project(lab1)

include_directories(include)

set(SOURCES 
    src/main.cpp
    src/my_string.cpp
    src/utils.cpp
    src/program.cpp
    src/menus.cpp
)

set(HEADERS
    include/my_string.h
    include/utils.h   
    include/program.h 
    include/menus.h
)

add_executable(lab1 ${SOURCES} ${HEADERS})