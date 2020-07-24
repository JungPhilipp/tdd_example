#pragma once

#include <string>
#include <iostream>

template<class D, class ... Ts>
auto print_with_delimiter(D delimiter, Ts &&...args) -> void {
  ((std::cout << std::forward<Ts>(args) << delimiter), ...) << std::endl;
}

template<class ... Ts>
auto println(Ts &&...args) -> void {
  return print_with_delimiter("\n", std::forward<Ts>(args)...);
}

template<class ... Ts>
auto print(Ts &&...args) -> void {
  return print_with_delimiter(", ", std::forward<Ts>(args)...);
}