#include <iostream>
#include"Base.h"
#include"Derived1.h"
#include"Derived2.h"

int main(){
    Derived2 d2(10,20,30);
    Derived2 d3{d2};
    d2.print();
    std::cout<<std::endl;
    d3.print();
    d3.setValue(-12);
    d2 = d3;
    std::cout<<std::endl;
    d2.print();

}