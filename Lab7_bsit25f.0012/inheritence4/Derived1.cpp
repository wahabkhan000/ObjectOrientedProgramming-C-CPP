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
    std::cout<<"Derived1 Copy Constructor\n";
    data = obj.getdata();
}
int Derived1::getdata() const{
    return data;
}
Derived1& Derived1::operator=(const Derived1& obj){
    if(this!=&obj){
        std::cout<<"Derived1 Copy Assignment\n";
        Base::operator=(obj);
        data = obj.getdata();
    }
    return *this;
}
std::ostream& operator<<(std::ostream& os,const Derived1& obj){
    os<<static_cast<Base>(obj);
    os<<obj.getdata()<<" \n";
    return os;
}