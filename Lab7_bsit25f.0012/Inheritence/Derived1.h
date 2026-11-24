#ifndef DERIVED1_H
#define DERIVED1_H
#include <iostream>
#include"Base.h"
class Derived1:public Base{
    int data{};
    public:
    Derived1();
    ~Derived1();
};
#endif
