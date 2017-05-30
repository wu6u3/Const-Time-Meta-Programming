#include<iostream>

#include"ctt_timer.hpp"



using namespace CTTimer;
int main(){

  //int  su = sum_non(1,4);
  std::cout<<sum(1.3,2.3,3.6,4.6,56.4,7623.4,7.2)<<std::endl;
  //std::cout<<su<<std::endl;
  std::cout<<multi(23.45,3434.234,34325.2343,23523526.3)<<std::endl;
  std::cout<<interpolate1D(1.0, 2.0, 0.2)<<std::endl;
  std::cout<<interpolate1D(10.0, 20.0,0.2)<<std::endl;
  std::cout<<interpolate1D(20.0, 30.0,0.2)<<std::endl;
  std::cout<<interpolate1D(interpolate1D(10.0, 20.0,0.2), interpolate1D(20.0, 30.0,0.2), 0.3)<<std::endl;
  std::cout<<interpolate2D(10.0, 20.0, 20.0, 30.0, 0.2, 0.3)<<std::endl;
  static_assert(sum(1.3,2.3,3.6,4.6,56.4,7623.4,7.2));
  static_assert(multi(23.45,3434.234,34325.2343));
  static_assert(interpolate1D(1.0, 2.0, 0.2));
  static_assert(interpolate2D(10.0, 20.0, 20.0, 30.0, 0.2, 0.3));
  
}
