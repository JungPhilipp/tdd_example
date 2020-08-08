set(HEADERS
    include/plain.h
    )
set(SRC
    src/plain.cpp
    )


add_library(problem2 SHARED ${HEADERS} ${SRC})
target_include_directories(problem2 PUBLIC include)


add_subdirectory(tests)