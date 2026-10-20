#include <iostream>
#include "Fraction.h"


int main(){
Fraction f1,f2,f3;
f1.print();
f1.setNumerator(2);
f1.setDenumerator(4);
f1.print();

f2.setNumerator(4);
f2.setDenumerator(5);
f2.print();

f3 = f1.add(f2);
f3.print();

std::cout<<f3.getNumerator()<<std::endl;
std::cout<<f3.getDenumerator()<<std::endl;
f3 = f1.mul(f2);
f3.print();

std::cout<<f3.getNumerator()<<std::endl;
std::cout<<f3.getDenumerator()<<std::endl;
f3 = f1.sub(f2);
f3.print();

f3 = f1.div(f2);
f3.print();

std::cout<<f3.getNumerator();
std::cout<<f3.getDenumerator();
return 0;
}