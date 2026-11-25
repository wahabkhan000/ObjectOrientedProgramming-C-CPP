#include<iostream>
#include"Teacher.h"
void Teacher::print(){
    std::cout<<"Teacher ";
    Person::print();
    std::cout<<phone<<"\n";
}
void Teacher::setage(int _age){
    Person::setage(_age);
}
void Teacher::setaddress(const std::string& _address){
    Person::setaddress(_address);
}
void Teacher::setname(const std::string& _name){
    Person::setname(_name);
}