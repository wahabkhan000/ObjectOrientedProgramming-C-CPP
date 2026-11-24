#ifndef BASE_H
#define BASE_H
#include <iostream>
class Base{
    int data{};
    public:
    Base();
    Base(int);
    Base(const Base&);
    int getdata() const;
    void print();
    void operator=(const Base&);
    ~Base();
};
#endif