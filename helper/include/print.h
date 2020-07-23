#pragma once

#include <string>
#include <iostream>

template <class D, class ... Ts>
void print_with_delimiter(D delimiter, Ts&& ...args){
  ((std::cout << std::forward<Ts>(args) << delimiter), ...) << std::endl;
}

template <class ... Ts>
void println(Ts&& ...args){
  return print_with_delimiter("\n", std::forward<Ts>(args)...);
}

template <class ... Ts>
void print(Ts&& ...args){
  return print_with_delimiter(", ", std::forward<Ts>(args)...);
}