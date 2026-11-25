#ifndef STUDENT
#define STUDENT
#include"Person.h"
#include<string>
class Student:public Person{
    std::string phone{};
    public:
    virtual void print();
    virtual void setage(int);
    virtual void setaddress(const std::string&);
    virtual void setname(const std::string&);
};
#endif