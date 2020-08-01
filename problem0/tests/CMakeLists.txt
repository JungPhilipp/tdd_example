set(TEST_HEADERS
    )
set(TEST_SRC
    reverse_char_ut.cpp
  main.cpp
    )

add_executable(problem0_test ${TEST_HEADERS} ${TEST_SRC})
target_link_libraries(problem0_test PRIVATE problem0 doctest)
add_test(problem0_test problem0_test)
