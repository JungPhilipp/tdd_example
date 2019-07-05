#pragma once
#include <string>
#include <sstream>

template
<class T,
 class ... Ts>
std::string generate_string(T&& arg, Ts&& ...args){
  auto sstream = std::stringstream{};
  sstream << std::forward<T>(arg);
  ((sstream << ',' << std::forward<Ts>(args)), ...);
  return sstream.str();
}
