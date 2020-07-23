set(HEADERS
    include/calculator.h
    )
set(SRC
    src/calculator.cpp
    )


add_library(problem0 SHARED ${HEADERS} ${SRC})
target_include_directories(problem0 PUBLIC include)


add_subdirectory(tests)