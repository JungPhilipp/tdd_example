#pragma once
#include <cstdint>

namespace tdd {
// TODO add custom deleter
template<class T>
class shared_ptr
{
public:
  constexpr shared_ptr() noexcept;
  constexpr shared_ptr(std::nullptr_t) noexcept;
private:
  T* value;
  uint64_t ref_count;
};

// TODO add make_shared<>

namespace test{
// TODO add static test cases
using integratl_type = int;
}
}