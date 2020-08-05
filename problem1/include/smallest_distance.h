#pragma once
#include "print.h"
#include <algorithm>
#include <array>
namespace problem1 {

/**
 * Copy input range to allow for sorting without modifying original data
 */
template<class T, class U>
requires requires {typename T::value_type;}
[[nodiscard]] consteval auto
smallest_distance(T lhs, U rhs) noexcept
  -> std::optional<std::pair<typename T::value_type, typename U::value_type>>
{
  if (size(lhs) == 0 || size(rhs) == 0)
    return {};
  std::ranges::sort(lhs);
  std::ranges::sort(rhs);

  auto a = begin(lhs);
  auto b = begin(rhs);
  auto distance = std::make_pair<std::size_t, std::size_t>(
    std::numeric_limits<std::size_t>::max(), 0);
  while (a != end(lhs) && b != end(rhs)) {
    if (auto dist = *a - *b;
        dist >= 0 && dist <= distance.first - distance.second)
      distance = std::make_pair(*a, *b);
    *a < *b ? a++ : b++;
  }
  return { distance };
}

}