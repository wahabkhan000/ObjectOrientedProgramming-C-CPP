#include<iostream>
#include"Student.h"
void Student::print(){
    std::cout<<"Student ";
    Person::print();
    std::cout<<phone<<"\n";
}
void Student::setage(int _age){
    Person::setage(_age);
}
void Student::setaddress(const std::string& _address){
    Person::setaddress(_address);
}
void Student::setname(const std::string& _name){
    Person::setname(_name);
}
