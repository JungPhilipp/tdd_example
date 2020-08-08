#pragma once
#include <vector>

namespace problem2{


[[nodiscard]] auto char_in(const char a,  std::vector<char> const& chars) -> bool{
  for (auto const& c : chars)
    if (a == c)
      return true;
  return false;
}

[[nodiscard]] auto word_frequency(char const* book ,char const* word) -> int {
  auto count = 0;
  auto current_char = word;
  auto terminating_chars = std::vector{' ', '.', '\n', ','};
  while(*book != '\0'){
    if (*current_char == '\0' && char_in(*book, terminating_chars))
    {
      count++;
      current_char = word;
    }
    if (*book == *current_char)
      current_char++;
    else {
      while(*book != ' ') {
        if (*book == '\0')
          return count;
        book++;
      }
      current_char = word;
    }
    book++;
  }
  return count;
}
}