#include "doctest.h"
#include "max_number.h"

using namespace problem2;

TEST_CASE("Max Number") {
  SUBCASE("Positive Numbers"){
    static_assert(max_number(10, 9) == 10);
    static_assert(max_number(9, 10) == 9);
  }
}