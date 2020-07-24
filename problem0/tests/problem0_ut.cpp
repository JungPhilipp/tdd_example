#include "doctest.h"
#include <problem0.h>

using namespace problem0;

TEST_CASE("Reverse String"){
  SUBCASE("Reverse non-empty string"){
    char str[] = "test test";
    problem0::reverse(str);
    CHECK(std::string("tset tset") == str);
  }
}
