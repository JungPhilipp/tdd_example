cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(tdd VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (CMAKE_BUILD_TYPE EQUAL "DEBUG")
  set(CMAKE_C_FLAGS
      "${CMAKE_C_FLAGS}
      -fsanitize=address -fno-optimize-sibling-calls -fsanitize-address-use-after-scope -fno-omit-frame-pointer")
  set(CMAKE_CXX_FLAGS
      "${CMAKE_CXX_FLAGS}
      -fsanitize=address -fno-optimize-sibling-calls -fsanitize-address-use-after-scope -fno-omit-frame-pointer")
endif()
add_subdirectory(third_party)


add_subdirectory(problem0)
add_subdirectory(problem1)
add_subdirectory(helper)
add_subdirectory(plain)
add_subdirectory(shared_ptr)
