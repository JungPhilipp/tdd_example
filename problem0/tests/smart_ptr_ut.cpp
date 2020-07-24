#include "doctest.h"
#include "smart_ptr.h"
#include <utility>
#include <memory>

using namespace problem0;

TEST_CASE ("Smart Ptr") {
  SUBCASE("Smart Ptr can be deferenced") {

    struct S{ int x;};
    auto value = 10;
    auto ptr = smart_ptr(new S{value});
    CHECK_EQ((*ptr).x, value);
    CHECK_EQ(ptr->x, value);

  }
}