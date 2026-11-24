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
Base::~Base(){
    std::cout<<"Base Destructor\n";
};