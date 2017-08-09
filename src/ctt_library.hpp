#ifndef __CTT_LIBRARY__
#define __CTT_LIBRARY__

namespace CTTimer{

class LookUpTable{

  public:
 
  template <unsigned int s1, unsigned int s2/*, double ... s*/>
  constexpr LookUpTable(/*const unsigned s1, const unsigned s2*/)
  :_size1(s1), _size2(s2)
  {
        
  }; 
  

  inline constexpr unsigned int size1();
  inline constexpr unsigned int size2();

  
//  template <typename ... T>
//  static constexpr void LookUpTable(T... n){
    //`constexpr unsigned int num_elements = []() { return _size1*_size2; } 
//  }

  private:
  
  static constexpr unsigned int _size1=0;
  static constexpr unsigned int _size2=0;
  

  const double _value[_size1*_size2]; 
  
};

inline constexpr unsigned int LookUpTable::size1(){
  return _size1;
}

inline constexpr unsigned int LookUpTable::size2(){
  return _size2;
}



};

#endif
