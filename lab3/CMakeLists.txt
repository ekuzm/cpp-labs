cmake_minimum_required(VERSION 3.12.0)

project(lab3)

include_directories(include)

set(SOURCES
    src/main.cpp
)

# set(HEADERS

# )

add_executable(lab3 ${SOURCES})