#ifndef DERIVED1_H
#define DERIVED1_H
#include <iostream>
#include"Base.h"
class Derived1:public Base{
    int data{};
    public:
    Derived1();
    Derived1(int,int);
    Derived1(const Derived1&);
    int getdata() const;
    void operator=(const Derived1& );
    void print();
    ~Derived1();
};
#endif
