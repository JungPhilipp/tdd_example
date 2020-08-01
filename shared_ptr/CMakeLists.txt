set(HEADERS
  include/shared_ptr.h
  )
set(SRC
  src/shared_ptr.cpp)


add_library(shared_ptr SHARED ${HEADERS} ${SRC})
target_include_directories(shared_ptr PUBLIC include)


add_subdirectory(tests)