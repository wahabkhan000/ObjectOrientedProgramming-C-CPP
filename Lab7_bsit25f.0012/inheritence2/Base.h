#ifndef BASE_H
#define BASE_H
#include <iostream>
class Base{
    int data{};
    public:
    Base();
    Base(int);
    void print();
    ~Base();
};
#endif