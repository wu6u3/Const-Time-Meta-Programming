#ifndef __CTT_UTILITY__
#define __CTT_UTILITY__

//#include<ratio>
#include<iostream>
namespace CTTimer{

template <typename ... T>
static constexpr auto sum(T... s){
  return (...+s);
}

template <typename ... T>
static constexpr auto multi(T... s){
  return (...*s);
}


/*
get index 1d

*/

template <auto first, auto... rest>
static constexpr auto get_top_aux(){
  return (first);
}

template <auto... seq>
static constexpr auto get_top(){
  return get_top_aux<seq...>();
}

template <auto first, auto... rest>
static constexpr auto get_index_id_aux(unsigned int i, float s){
  return ( s>first )? ( std::make_pair( i, get_ratio_1D(first, get_top<rest...>(), s ))):( get_index_id_aux<rest...>(i+1, s));
}

template <typename ... T>
static constexpr auto get_index_id(float s, T... seq){
  return get_index_id_aux<seq...>(0, s);
}

/*  
get_ratio_1D
Given 2 values
get ratio p 

a0--o------a1
  p    1-p

|a0o|/|a0a1| = p

*/

template <typename T>
static constexpr auto get_ratio_1D(T a0, T a1, T o){
//#ifdef _DEBUG 
  static_assert(std::is_floating_point<T>::value);
//#endif
  return (a1 > a0) ? (( a1 - o ) /( a1 - a0 )) : (( a0 - o ) / (a0 - a1));
}


/*  

interpolate_1D
Given 2 values
a0 a1 and ratio p 
return a 1-D interpolation value

a0--o------a1

|a0o|/|a0a1| = p

*/

template <typename T>
static constexpr auto interpolate_1D(T a0, T a1, const double p){
  return (a1 > a0) ? (( a1 - a0 ) * p + a0) : (( a0 - a1 ) * p + a1);
}

/*  
interpolate_2D
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
static constexpr auto interpolate_2D(T a00, T a01, T a10, T a11, const double p1, const double p2){
  return interpolate_1D(interpolate_1D(a00, a01,p1), interpolate_1D(a10, a11,p1), p2);
}



template<typename... T>
void print_arrays(T&&... arrays){
  (std::cout << ... <<arrays) << '\n';
}


};

#endif
