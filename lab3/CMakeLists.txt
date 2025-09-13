cmake_minimum_required(VERSION 3.12.0)

project(lab3)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/passenger_carrier.cpp
    src/car.cpp
    src/train.cpp
    src/airplane.cpp
)

set(HEADERS
    include/passenger_carrier.h
    include/car.h
    include/train.h
    include/airplane.h
)

add_executable(lab3 ${SOURCES} ${HEADERS})