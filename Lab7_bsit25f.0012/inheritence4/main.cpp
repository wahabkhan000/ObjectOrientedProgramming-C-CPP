#include <iostream>
#include"Base.h"
#include"Derived1.h"
#include"Derived2.h"

int main(){
    Derived2 d2(10,20,30);
    Derived2 d3{d2};
    std::cout<<d2<<std::endl;
    std::cout<<d3<<std::endl;
    d3.setValue(-12);
    d2 = d3;
    std::cout<<d2<<std::endl;
}