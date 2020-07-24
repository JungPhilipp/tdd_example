#include <problem0.h>
#include <print.h>

void problem0::reverse(char *str) {
  // use std:: swap
  auto index = 0;// limited length (consider using long/size_t)
  while(str[index] != '\0'){
    index++;
  }
  auto lhs = 0;
  auto rhs = index - 1;

  using std::swap;
  while(lhs < rhs) {
    swap(str[lhs++], str[rhs--]);
  }
}