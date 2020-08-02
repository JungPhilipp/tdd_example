#include "smallest_distance.h"
#include "doctest.h"
#include <array>

using namespace problem1;

TEST_CASE("Smallest Distance")
{
  SUBCASE("Small Positive Range")
  {
    auto constexpr lhs = std::array{ 1, 3, 15, 11, 2 };
    auto constexpr rhs = std::array{ 23, 127, 235, 19, 8 };
    auto constexpr pair = smallest_distance(lhs, rhs).value();
    static_assert(pair.first == 11);
    static_assert(pair.second == 8);
  }
  SUBCASE("Range including negative numbers")
  {
    auto constexpr lhs = std::array{ 1, 3, 15, 11, 2, -1 };
    auto constexpr rhs = std::array{ 23, 127, 235, 19, 8, -2 };
    auto constexpr pair = smallest_distance(lhs, rhs).value();
    static_assert(pair.first == -1);
    static_assert(pair.second == -2);
  }
  SUBCASE("Empty ranges")
  {
    auto constexpr lhs = std::array<int,0>{};
    auto constexpr rhs = std::array<int,0>{};
    static_assert(!smallest_distance(lhs, rhs));
  }
}
