#include"Derived1.h"
Derived1::Derived1():data{0}{
    std::cout<<"Derived1 Constructor\n";
};
Derived1::Derived1(int num,int num2):Base(num),data{num2}{
    std::cout<<"Derived1 Perimetrized Constructor\n";
};
void Derived1::print(){
    Base::print();
    std::cout<<"Derived1 print: "<<data<<" \n";
}
Derived1::~Derived1(){
    std::cout<<"Derived1 Destructor\n";
};