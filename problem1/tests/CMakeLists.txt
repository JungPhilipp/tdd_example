set(TEST_HEADERS
    )
set(TEST_SRC
  smallest_distance.cpp
  main.cpp
    )

add_executable(problem1_test ${TEST_HEADERS} ${TEST_SRC})
target_link_libraries(problem1_test PRIVATE problem1 doctest)
add_test(problem1_test problem1_test)
