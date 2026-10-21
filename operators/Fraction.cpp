#include "Fraction.h"
#include <iostream>
Fraction::Fraction(){
    setNumerator(0);
    setDenumerator(1);
}
Fraction::Fraction(int num,int den){
    setNumerator(num);
    setDenumerator(den);
}
void Fraction::setNumerator(int num){
    this->num = new int;
    *this->num = num;
}
void Fraction::setDenumerator(int den){
    if(den != 0){
        this->den = new int;
        *this->den = den;
    }
    else{
        std::cout<<"Invalid Denumerator\n";
        this->den = new int;
        *this->den = 1;
    }
}
void Fraction::print() const{
    std::cout<<*num<<"/"<<*den<<"\n";
}

Fraction Fraction::operator=(const Fraction &rhs){
    *num = *rhs.num;
    *den = *rhs.den;
    return *this;
}

Fraction Fraction::operator-(const Fraction &rhs){
    Fraction result;
    result.setNumerator(((*num)*(*rhs.den))-((*rhs.num)*(*den)));
    result.setDenumerator((*den)*(*rhs.den));
    return result;
}

Fraction Fraction::operator+(const Fraction &rhs){
    Fraction result;
    result.setNumerator(((*num)*(*rhs.den))+((*rhs.num)*(*den)));
    result.setDenumerator((*den)*(*rhs.den));
    return result;
}

Fraction Fraction::operator*(const Fraction &rhs){
    Fraction result;
    result.setNumerator((*num)*(*rhs.num));
    result.setDenumerator((*den)*(*rhs.den));
    return result;
}

Fraction Fraction::operator/(const Fraction &rhs){
    Fraction result;
    result.setNumerator((*num)*(*rhs.den));
    result.setDenumerator((*den)*(*rhs.num));
    return result;
}