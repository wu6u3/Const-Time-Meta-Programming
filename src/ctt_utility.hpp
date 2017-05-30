#ifndef __CTT_UTILITY__
#define __CTT_UTILITY__


#include<iostream>
namespace CTTimer{

template<typename... T>
static constexpr auto sum(T... s){
  return (...+s);
}

template <typename ...T>
static constexpr auto multi(T... s){
  return (...*s);
}



/*  

interpolate1D
Given 2 values
a0 a1 and ratio p 
return a 1-D interpolation value

a0--o------a1

|a0o|/|a0a1| = p

*/

template <typename T>
static constexpr auto interpolate1D(T a0, T a1, const double p){
  return (a1 > a0) ? (( a1 - a0 ) * p + a0) : (( a0 - a1 ) * p + a1);
}




/*  
interpolate2D
Given 2x2 values a00 a01 a10 a11 and partition p1 and p2
return a 2-D interpolation value
 
    p1
  a00--oa------a01
p2|             |
  ob    *       |
  |             |
  a10----------a11


|a00 oa|/|a00a01| = p1

*/
template <typename T>
static constexpr auto interpolate2D(T a00, T a01, T a10, T a11, const double p1, const double p2){
  return interpolate1D(interpolate1D(a00, a01,p1), interpolate1D(a10, a11,p1), p2);
  


}




template<typename... T>
void print_arrays(T&&... arrays){
  (std::cout << ... <<arrays) << '\n';
}


};

#endif
