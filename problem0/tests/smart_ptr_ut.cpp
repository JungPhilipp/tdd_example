#include "doctest.h"
#include "smart_ptr.h"
#include <utility>
#include <memory>

using namespace problem0;

TEST_CASE ("Smart Ptr") {
  struct S{ int x;};
  SUBCASE("Smart Ptr can be deferenced") {
    auto value = 10;
    auto ptr = smart_ptr(new S{value});
    CHECK_EQ((*ptr).x, value);
    CHECK_EQ(ptr->x, value);
  }
  SUBCASE("Smart Ptr can be copied"){
    auto value = 10;
    auto v = new S{value};
    auto ptr1 = smart_ptr(v);
    auto ptr2 = ptr1;
    ptr2->x = 20;
    CHECK_EQ(ptr2->x, ptr1->x);
  }
  SUBCASE("Smart Ptr can be assigned"){
    auto value = 10;
    auto ptr1 = smart_ptr(new S{value});
    auto ptr2 = ptr1;
    auto ptr3 = smart_ptr(new S{value});
    ptr3 = ptr1;
    ptr2->x = 20;
    CHECK_EQ(ptr2->x, ptr1->x);
    }
}