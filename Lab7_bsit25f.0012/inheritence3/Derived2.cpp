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
void Derived2::setValue(int num){
    data = num;
    std::cout<<"setValue called\n";
}
int Derived2::getdata() const{
    std::cout<<"Derived2 getData\n";
    return data;
}
Derived2::Derived2(const Derived2& obj):Derived1(obj){
    std::cout<<"Derived2 Copy Constructor\n";
    data = obj.getdata();
}
Derived2::~Derived2(){
    std::cout<<"Derived2 Destructor\n";
};
void Derived2::operator=(const Derived2& obj){
    Derived1::operator=(obj);
    data = obj.getdata();
    std::cout<<"Derived2 Copy Assignment\n";
}