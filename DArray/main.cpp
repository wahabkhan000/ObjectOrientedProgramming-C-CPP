#include<iostream>
#include"DArray.h"

int main(){
    DArray darr1,darr2;
    std::cout<<darr1.getsize()<<" "<<darr2.getsize()<<"\n";
    for(int i{}; i<15; i++){
        darr1.push_back(i*2);
    }
    std::cout<<darr1.getsize()<<" "<<darr1.getcapacity()<<"\n";
    std::cout<<darr1<<"\n";
}