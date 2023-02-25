#include <iostream>
#include "Exercise2_Library.h"


//-------------------
//      Main
//-------------------
int main() {
    complex c1(2),c2(10,1),c3;
    c3 = c1*c2;
    std::cout<<c3<<std::endl;
    c3+=4;
    std::cout<<c3<<std::endl;
    c3 += c2;
    std::cout<<c3<<std::endl;
    c3/=4;
    std::cout<<c3<<std::endl;
    return 0;
}
