#include "Fraction.h"
#include <iostream>


int Fraction::getNumerator() const{
     return numerator;
    }
int Fraction::getDenumerator() const{
    return denumerator;
}
void Fraction::setNumerator(int num){
    numerator = num;
}
void Fraction::setDenumerator(int den){
    if(den != 0){
        denumerator = den;
    }
}

Fraction Fraction::add(Fraction value) const{

Fraction result;

int num = (numerator*value.denumerator)+(denumerator*value.numerator);
int den = denumerator*value.denumerator;

result.setNumerator(num);
result.setDenumerator(den);

return result;
}

Fraction Fraction::sub(Fraction value) const{

Fraction result;

int num = (numerator*value.denumerator)-(denumerator*value.numerator);
int den = denumerator*value.denumerator;

result.setNumerator(num);
result.setDenumerator(den);

return result;
}

Fraction Fraction::mul(Fraction value) const{

Fraction result;

int num = numerator*value.numerator;
int den = denumerator*value.denumerator;

result.setNumerator(num);
result.setDenumerator(den);

return result;
}

Fraction Fraction::div(Fraction value) const{

Fraction result;

int num = numerator*value.denumerator;
int den = denumerator*value.numerator;

result.setNumerator(num);
result.setDenumerator(den);

return result;
}

void Fraction::print() const{
std::cout<<numerator<<"/"<<denumerator<<std::endl;
}