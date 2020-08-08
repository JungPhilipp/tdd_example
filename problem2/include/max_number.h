#pragma once
#include <concepts>
#include <cmath>

namespace problem2{
template <class T>
requires std::integral<T> && std::signed_integral<T>
[[nodiscard]] constexpr auto max_number(T lhs, T rhs) -> T {
  auto k = !std::signbit(lhs - rhs);
  return k * lhs + !k * rhs;
}
}