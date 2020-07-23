set(HEADERS
    include/problem0.h
    )
set(SRC
    src/problem0.cpp
    )


add_library(problem0 SHARED ${HEADERS} ${SRC})
target_link_libraries(problem0 PUBLIC helper)
target_include_directories(problem0 PUBLIC include)


add_subdirectory(tests)