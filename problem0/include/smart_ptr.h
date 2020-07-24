#pragma once

#include <utility>
#include "print.h"

namespace problem0 {

  template<class T>
  class smart_ptr {
  public:
    // Compromise to avoid impl. a make_smart_ptr function
    // Call by value and move into storage
    explicit smart_ptr(T* value) : ref_count(new int(1)), value(value) {}
    smart_ptr(smart_ptr<T> &rhs): value(rhs.value), ref_count(rhs.ref_count){
      (*ref_count)++;
    }

    auto operator=(smart_ptr<T> const& rhs) -> smart_ptr<T>& {
      (*ref_count)--;
      if(*ref_count == 0){
        delete ref_count;
        delete value;
      }
      this->ref_count = rhs.ref_count;
      this->value = rhs.value;
      (*ref_count)++;
      return *this;
    }

    auto operator*() -> T { return *value; }

    auto operator->() -> T * { return value; }



    ~smart_ptr(){
      if(--(*ref_count) == 0) {
        delete value;
        delete ref_count;
      }
    }

  private:
    int* ref_count;
    T* value;
  };

}