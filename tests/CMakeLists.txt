set(TEST_HEADERS
    generate.h
    )
set(TEST_SRC
    calculator_ut.cpp
    #main.cpp
    )

add_executable(tbb_test ${TEST_HEADERS} ${TEST_SRC})
target_link_libraries(tbb_test PRIVATE Catch2::Catch2 tdd_main)
add_test(tbb_test tbb_test)
