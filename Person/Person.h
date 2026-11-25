#ifndef PERSON
#define PERSON
#include <string>
class Person{
    int age{};
    std::string address{};
    std::string name{};
    public:
    virtual void print() = 0;
    virtual void setage(int);
    virtual void setaddress(const std::string&);
    virtual void setname(const std::string&);
};
#endif