set(HEADERS
  include/smallest_distance.h
  )
set(SRC
  src/smallest_distance.cpp
    )


add_library(problem1 SHARED ${HEADERS} ${SRC})
target_link_libraries(problem1 PUBLIC helper)
target_include_directories(problem1 PUBLIC include)


add_subdirectory(tests)