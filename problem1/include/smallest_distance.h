#pragma once
#include "print.h"
#include <algorithm>
#include <array>
namespace problem1 {

/**
 * Copy input range to allow for sorting without modifying original data
 */
template<class T, std::size_t S0, std::size_t S1>
[[nodiscard]] consteval auto
smallest_distance(std::array<T, S0> lhs, std::array<T, S1> rhs) noexcept
  -> std::optional<std::pair<T, T>>
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
  return {distance};
}

}