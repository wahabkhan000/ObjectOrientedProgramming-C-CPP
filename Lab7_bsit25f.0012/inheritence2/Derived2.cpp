#include"Derived2.h"
Derived2::Derived2():data{0}{
    std::cout<<"Derived2 Constructor\n";
};
Derived2::Derived2(int num,int num1,int num2):Derived1(num,num1),data{num2}{
    std::cout<<"Derived2 Perimetrized Constructor\n";
}
void Derived2::print(){
    Derived1::print();
    std::cout<<"Derived2 print: "<<data<<" \n";
}
Derived2::~Derived2(){
    std::cout<<"Derived2 Destructor\n";
};