#include"utility.hpp"

using namespace CTT;

template <typename... T>
static constexpr auto sum(T... s){
  return (... + s);
}



