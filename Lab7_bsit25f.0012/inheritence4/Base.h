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
    Base& operator=(const Base&);
    ~Base();
};
std::ostream& operator<<(std::ostream&,const Base&);
#endif