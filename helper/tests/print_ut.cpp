#include "doctest.h"
#include "print.h"

TEST_CASE("print"){
  print("test", 2, "10", 2.f);
  println("test", 2, "10", 2.f);
  }
