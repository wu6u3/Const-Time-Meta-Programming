#ifndef __CTT_LIBRARY__
#define __CTT_LIBRARY__

namespace CTTimer{

class LookUpTable{

  public:
  
  static constexpr unsigned int size1();
  static constexpr unsigned int size2();

  
  static constexpr 

  template <typename ... T>
  static constexpr auto table(T... );

  private:
  
  const unsigned int _size1;
  const unsigned int _size2;

  
  
};

static constexpr unsigned int size1(){
  return _size1;
}

static constexpr unsigned int size2(){
  return _size2;
}



};

#endif
