set(TEST_HEADERS
    generate.h
    )
set(TEST_SRC
    calculator_ut.cpp
    main.cpp
    )

add_executable(problem0_test ${TEST_HEADERS} ${TEST_SRC})
target_link_libraries(problem0_test PRIVATE problem0 doctest)
add_test(problem0_test problem0_test)
