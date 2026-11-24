
#ifndef DERIVED2_H
#define DERIVED2_H
#include"Derived1.h"
#include<iostream>
class Derived2:public Derived1{
    int data{};
    public:
    Derived2();
    Derived2(int,int,int);
    Derived2(const Derived2&);
    void print();
    void setValue(int);
    int getdata() const;
    Derived2& operator=(const Derived2&);
    ~Derived2();
};
std::ostream& operator<<(std::ostream&, const Derived2&);
#endif