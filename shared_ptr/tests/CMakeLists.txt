set(TEST_HEADERS
        )
set(TEST_SRC
        main.cpp
        )

add_executable(shared_ptr_test ${TEST_HEADERS} ${TEST_SRC})
target_link_libraries(shared_ptr_test PRIVATE shared_ptr doctest)
add_test(shared_ptr_test shared_ptr_test)
