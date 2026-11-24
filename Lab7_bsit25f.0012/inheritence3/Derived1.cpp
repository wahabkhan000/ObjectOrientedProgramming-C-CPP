#include"Derived1.h"
Derived1::Derived1():data{0}{
    std::cout<<"Derived1 Constructor\n";
};
Derived1::Derived1(int num,int num2):Base(num),data{num2}{
    std::cout<<"Derived1 Perimetrized Constructor\n";
};
void Derived1::print(){
    std::cout<<"Derived1 print: "<<data<<" \n";
    Base::print();
}
Derived1::~Derived1(){
    std::cout<<"Derived1 Destructor\n";
};
Derived1::Derived1(const Derived1& obj):Base(obj){
    data = obj.getdata();
}
int Derived1::getdata() const{
    std::cout<<"Derived1 getData\n";
    return data;
}
void Derived1::operator=(const Derived1& obj){
     std::cout<<"Derived1 Copy Assignment\n";
    Base::operator=(obj);
    data = obj.getdata();
}