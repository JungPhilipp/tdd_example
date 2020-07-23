set(TEST_HEADERS
    )
set(TEST_SRC
    main.cpp
    print_ut.cpp
    )

add_executable(helper_test ${TEST_HEADERS} ${TEST_SRC})
target_link_libraries(helper_test PRIVATE helper doctest)
add_test(helper_test helper_test)
