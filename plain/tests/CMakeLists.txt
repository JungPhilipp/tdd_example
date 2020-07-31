set(TEST_HEADERS
    )
set(TEST_SRC
    main.cpp
    )

add_executable(plain_test ${TEST_HEADERS} ${TEST_SRC})
target_link_libraries(plain_test PRIVATE plain doctest)
add_test(plain_test plain_test)
