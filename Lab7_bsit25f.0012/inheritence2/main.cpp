#include <iostream>
#include"Base.h"
#include"Derived1.h"
#include"Derived2.h"

int main(){
    Derived1 d1(3,4);
    Derived2 d2(3,4,5);
    d2.print();
}