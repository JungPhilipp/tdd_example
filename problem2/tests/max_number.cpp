#include "doctest.h"
#include "max_number.h"

using namespace problem2;

TEST_CASE("Max Number") {
  SUBCASE("Positive Numbers"){
    CHECK(max_number(10, 9) == 10);
    CHECK(max_number(9, 10) == 10);
  }
  SUBCASE("Same number"){
      CHECK(max_number(10, 10) == 10);
      CHECK(max_number(0, 0) == 0);
  }
  SUBCASE("Negative number"){
    CHECK(max_number(10, -10) == 10);
    CHECK(max_number(-10, 0) == 0);
  }
}