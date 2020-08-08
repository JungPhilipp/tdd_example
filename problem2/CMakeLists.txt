set(HEADERS
    include/max_number.h
    include/word_frequency.h
    )
set(SRC
    src/max_number.cpp
    )


add_library(problem2 SHARED ${HEADERS} ${SRC})
target_include_directories(problem2 PUBLIC include)


add_subdirectory(tests)