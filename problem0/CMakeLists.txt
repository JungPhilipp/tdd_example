set(HEADERS
    include/reverse_char.h
    include/smart_ptr.h
    )
set(SRC
    src/reverse_char.cpp
    )


add_library(problem0 SHARED ${HEADERS} ${SRC})
target_link_libraries(problem0 PUBLIC helper)
target_include_directories(problem0 PUBLIC include)


add_subdirectory(tests)