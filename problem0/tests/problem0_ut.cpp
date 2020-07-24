#include "doctest.h"
#include <problem0.h>

using namespace problem0;

TEST_CASE("Reverse String"){
  SUBCASE("Reverse non-empty odd-length string"){
    char str[] = "test test";
    problem0::reverse(str);
    CHECK(std::string("tset tset") == str);
  }
  SUBCASE("Reverse non-empty even-length string"){
    char str[] = "testtest";
    problem0::reverse(str);
        CHECK(std::string("tsettset") == str);
  }
  SUBCASE("Reverse one character string"){
    char str[] = "t";
    problem0::reverse(str);
        CHECK(std::string("t") == str);
  }
  SUBCASE("Reverse two character string"){
    char str[] = "ab";
    problem0::reverse(str);
        CHECK(std::string("ba") == str);
  }
  SUBCASE("Reverse empty string"){
    char str[] = "";
    problem0::reverse(str);
        CHECK(std::string("") == str);
  }
  SUBCASE("Reverse null string"){
    char * str = nullptr;
    problem0::reverse(str);
        CHECK_EQ(str, nullptr);
  }
}
