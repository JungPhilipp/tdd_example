#include <reverse_char.h>
#include <print.h>

void problem0::reverse(char *str) {
  if (not str)
    return;
  auto index = 0;// limited length (consider using long/size_t)
  while(str[index] != '\0'){
    index++;
  }
  auto lhs = 0;
  auto rhs = index - 1; // since rhs is signed this won't be a problem

  using std::swap; // ADL for swap specialization
  while(lhs < rhs) {
    swap(str[lhs++], str[rhs--]);
  }
}