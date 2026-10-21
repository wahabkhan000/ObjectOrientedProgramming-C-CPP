#include <iostream>
#include "Fraction.h"

int main(){
    Fraction f1,f2(2,3),f3(5,6);
    f1.print();
    f2.print();
    f3.print();
    f1 = (f2+f3);
    f1.print();
    f1 = (f2*f3);
    f1.print();
    f1 = (f2-f3);
    f1.print();
    f1 = (f2/f3);
    f1.print();
    f1 = f1.operator=(f2.operator=(f3));
    f1.print();

}