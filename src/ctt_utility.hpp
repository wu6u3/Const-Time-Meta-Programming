#ifndef __CTT_UTILITY__
#define __CTT_UTILITY__

#include<ratio>
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

a1--o------a2

|a1o|/|a1a2| = p

*/

template <typename T>
static constexpr auto interpolate1D(const double p, T a1, T a2){
    return ( a2 > a1 )?(( a2 - a1 ) * p + a1):(( a1 - a2 ) * p + a2);
}

/*  

  a1--oa------a2 
b1
|
ob    *
|
b2


|a1oa|/|a2a1| = pa



*/


template <typename T>
static constexpr auto interpolate2D(T a1, T a2, T b1, T b2, const double pa, const double pb){

  //constexpr auto ao1 =     
  


}


template<typename... T>
void print_arrays(T&&... arrays){
  (std::cout << ... <<arrays) << '\n';
}


};

#endif
