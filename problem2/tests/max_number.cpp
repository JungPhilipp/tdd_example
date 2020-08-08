#include "doctest.h"
#include "max_number.h"

using namespace problem2;

TEST_CASE("Max Number") {
  SUBCASE("Positive Numbers"){
    static_assert(max_number(10, 9) == 10);
    static_assert(max_number(9, 10) == 10);
  }
  SUBCASE("Same number"){
    static_assert(max_number(10, 10) == 10);
    static_assert(max_number(0, 0) == 0);
  }
  SUBCASE("Negative number"){
    static_assert(max_number(10, -10) == 10);
    static_assert(max_number(-10, 0) == 0);
  }
}