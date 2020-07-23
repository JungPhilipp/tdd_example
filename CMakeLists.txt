cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(tdd VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(third_party)


add_subdirectory(problem0)
add_subdirectory(helper)
