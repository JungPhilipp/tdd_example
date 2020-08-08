set(TEST_HEADERS
    )
set(TEST_SRC
    main.cpp
    max_number.cpp
    )

add_executable(problem2_test ${TEST_HEADERS} ${TEST_SRC})
target_link_libraries(problem2_test PRIVATE problem2 doctest)
add_test(problem2_test problem2_test)
