cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(tdd VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



find_package(Catch2 REQUIRED)

set(HEADERS
    include/calculator.h
    )
set(SRC
    src/calculator.cpp)

add_library(tdd_main SHARED ${HEADERS} ${SRC})
target_include_directories(tdd_main PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(tests)
