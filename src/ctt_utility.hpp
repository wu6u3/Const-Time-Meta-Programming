#ifndef __CTT_UTILITY__
#define __CTT_UTILITY__
namespace CTTimer{

template <typename ... T>
static constexpr auto sum(T... s);

template<typename... TYPE>
void print_arrays(TYPE&&... arrays);


};

#endif
