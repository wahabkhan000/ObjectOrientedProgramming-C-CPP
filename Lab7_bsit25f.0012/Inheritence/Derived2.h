#ifndef DERIVED2_H
#define DERIVED2_H
#include"Derived1.h"
#include<iostream>
class Derived2:public Derived1{
    int data{};
    public:
    Derived2();
    ~Derived2();
};
#endif