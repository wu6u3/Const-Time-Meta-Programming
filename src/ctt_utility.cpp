#include<iostream>
#include"ctt_utility.hpp"

using namespace CTTimer;

template<typename... T>
static constexpr auto sum(T... s){
  return (...+s);
}

template<typename... TYPE>
void print_arrays(TYPE&&... arrays){
  (std::cout << ... <<arrays) << '\n';
}


