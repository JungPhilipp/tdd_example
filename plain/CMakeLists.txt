set(HEADERS
    include/plain.h
    )
set(SRC
    src/plain.cpp
    )


add_library(plain SHARED ${HEADERS} ${SRC})
target_include_directories(plain PUBLIC include)


add_subdirectory(tests)