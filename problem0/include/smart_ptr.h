#pragma once

#include <utility>

namespace problem0 {

  template<class T>
  class smart_ptr {
  public:
    // Compromise to avoid impl. a make_smart_ptr function
    // Call by value and move into storage
    explicit smart_ptr(T* value) : value(value) {}

    auto operator*() -> T { return *value; }

    auto operator->() -> T * { return value; }

    ~smart_ptr(){
      delete value;
    }

  private:
    T* value;
  };

}