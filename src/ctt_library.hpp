#ifndef __CTT_LIBRARY__
#define __CTT_LIBRARY__

namespace CTTimer{

class LookUpTable{

  public:
 
  template <unsigned int s1, unsigned int s2, double ... T>
  constexpr LookUpTable()
  :_size1(s1), _size2(s2)
  {}; 
  
  constexpr 

  static constexpr unsigned int size1();
  static constexpr unsigned int size2();

  
  //static constexpr 
/*
  template <double ... T>
  static constexpr auto (T... ){ 
    
  };*/

  private:
  
  constexpr unsigned int _size1;
  constexpr unsigned int _size2;
  

  constexpr double _value[_size1*_size2]; 
  
};

static constexpr unsigned int size1(){
  return _size1;
}

static constexpr unsigned int size2(){
  return _size2;
}



};

#endif
