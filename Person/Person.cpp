#include"Person.h"
#include <iostream>
void Person::print(){
    std::cout<<name<<" "<<age<<" "<<address<<" ";
}
void Person::setage(int _age){
    age = _age;
}
void Person::setaddress(const std::string& _address){
    address = _address;
}
void Person::setname(const std::string& _name){
    name = _name;
}