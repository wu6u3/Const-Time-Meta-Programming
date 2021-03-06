#ifndef __CTT_UTILITY__
#define __CTT_UTILITY__

//#include<ratio>
#include<utility>
#include<iostream>
namespace CTTimer{

/* operation overloading for pair <<  */
template <typename T1, typename T2>
std::ostream& operator<< (std::ostream& os, const std::pair<T1, T2> & obj){
  os<< "{"<<obj.first<<", "<< obj.second<<"}";
  return os;
}

/*
print out an list of variables
*/
template<typename... T>
void print_arrays(T&&... arrays){
  (std::cout << ... <<arrays) << '\n';
}

/* compile-time summasion */
template <typename ... T>
static constexpr auto sum(T... s){
  return (...+s);
}

/* compile-time multiplication */
template <typename ... T>
static constexpr auto multi(T... s){
  return (...*s);
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
//                             larger -->                      larger --> 
//                     a0---o-------a1             a1-----o---------a0 
  return (a1 > a0) ? (( o - a0 ) /( a1 - a0 )) : (( o - a1 ) / (a0 - a1));
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



template <typename T1, typename ... T2>
static constexpr auto get_top_aux(T1 first, T2... rest){
  return (first);
}

template <typename ...T>
static constexpr auto get_top(T... seq){
  return get_top_aux(seq...);
}

template <typename T>
static constexpr auto get_top(T seq){
  return seq;
}


template <typename T, typename T1, typename T2>
static constexpr auto get_index_id_aux(const unsigned int i, T s, T1 first, T2 rest){
/*
case 1
  first ------ rest
         s
  return {i, ratio}

case 2
  first ------ rest 
                      s
  return {i+1, ratio}
*/


  const double rest_d = get_top(rest);
  return ( s<= rest_d )?
  /*case 1*/ (std::make_pair(i  , get_ratio_1D(first, rest, s))):
  /*case 2*/ (std::make_pair(i+1, get_ratio_1D(first, rest, s)));
   
}


template <typename T, typename T1, typename ... T2>
static constexpr auto get_index_id_aux(const unsigned int i, T s, T1 first, T2... rest){
  const double rest_d = get_top(rest...);
/*
case 1

  first ------ rest
s
  return {i, ratio} (ratio < 0)

case 2

  first ------ rest 
          s            
  return {i, ratio}

case 3

  first ------ rest 
                       s
  recursive call 
*/                                    
  return ( s <= rest_d )? 
  /* case 1 & case 2 */
  (std::make_pair( i, get_ratio_1D(first, rest_d, s ))):  
  /* case 3 */
  (get_index_id_aux(i+1, s, rest...));

}

/* 
Given a array of indeces and a target, return a pair of index + ratio  

example:  
[10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 19.0, 20.0 ]
target = 12.5
==>
return {2, 0.5}

*/
template <typename Ts, typename ... T>
static constexpr auto get_index_id(Ts s, T... seq){
  return get_index_id_aux(0, s, seq...);
}


/**/

template <size_t size1, size_t size2, typename ... TABLE>
static constexpr auto get_value(std::pair<double, double> target, const double idx1[size1], const double idx2[size2], TABLE... table){
  

  //constexpr auto idx1 = get_index_id(target.first, idx1);
 
}



};

#endif
