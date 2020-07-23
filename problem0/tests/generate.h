#pragma once
#include <string>
#include <sstream>

struct Generate_string{
private:
  std::string delimiter;
public:
  explicit Generate_string(std::string delimiter_): delimiter(std::move(delimiter_)){}

  template
  <class T,
   class ... Ts>
  std::string operator()(T&& arg, Ts && ...args){
    auto sstream = std::stringstream{};
    sstream << std::forward<T>(arg);
    ((sstream << delimiter << std::forward<Ts>(args)), ...);
    return sstream.str();
  }

};

template
<class T,
 class ... Ts>
std::string generate_string(T&& arg, Ts&& ...args){
  return Generate_string(",")(std::forward<T>(arg), std::forward<Ts>(args)...);
}

template
<class IT>
std::string string_from_container (IT first, IT last, std::string delimiter = ","){
  auto sstream = std::stringstream{};
  for(;first!= last; ++first){
      sstream << *first ;
      if(last-first>1)
        sstream << delimiter;
    }
  return sstream.str();
}
