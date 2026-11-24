#include "Base.h"
Base::Base():data{0}{
    std::cout<<"Base Constructor\n";
};
Base::Base(int value):data{value}{
    std::cout<<"Base Perimetrized Constructor\n";
};
void Base::print(){
    std::cout<<"Base print: "<<data<<" \n";
}
Base::Base(const Base& obj){
    std::cout<<"Base Copy Constructor\n";
    data = obj.getdata();
}
int Base::getdata() const{
    std::cout<<"Base getData\n";
    return data;
}
Base::~Base(){
    std::cout<<"Base Destructor\n";
};
void Base::operator=(const Base& obj){
    std::cout<<"Base Copy Assignment\n";
    data = obj.getdata();
}