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
    if(this->num == nullptr){
        this->num = new int;
    }
    *this->num = num;
}
void Fraction::setDenumerator(int den){
    if(this->den == nullptr){
        this->den = new int;
    }
    if(den != 0){
        *this->den = den;
    }
    else{
        std::cout<<"Invalid Denumerator\n";
        *this->den = 1;
    }
}
int Fraction::getNumerator() const {
    return *num;
}
int Fraction::getDenumerator() const {
    return *den;
}
void Fraction::print() const{
    std::cout<<*num<<"/"<<*den<<"\n";
}

Fraction Fraction::operator=(const Fraction &rhs){
    *num = *rhs.num;
    *den = *rhs.den;
    return *this;
}

Fraction Fraction::operator-(const Fraction &rhs) const {
    Fraction result;
    result.setNumerator(((*num)*(*rhs.den))-((*rhs.num)*(*den)));
    result.setDenumerator((*den)*(*rhs.den));
    return result;
}

Fraction Fraction::operator+(const Fraction &rhs) const {
    Fraction result;
    result.setNumerator(((*num)*(*rhs.den))+((*rhs.num)*(*den)));
    result.setDenumerator((*den)*(*rhs.den));
    return result;
}

Fraction Fraction::operator*(const Fraction &rhs) const {
    Fraction result;
    result.setNumerator((*num)*(*rhs.num));
    result.setDenumerator((*den)*(*rhs.den));
    return result;
}

Fraction Fraction::operator/(const Fraction &rhs) const{
    Fraction result;
    result.setNumerator((*num)*(*rhs.den));
    result.setDenumerator((*den)*(*rhs.num));
    return result;
}

bool Fraction::operator<(const Fraction &rhs)const{
    return ((*num)*(*rhs.den)<(*den)*(*rhs.num)) ? true : false;
}

bool Fraction::operator==(const Fraction &rhs)const{
    return (!(this->operator<(rhs)) && !(this->operator>(rhs))) ? true : false;
}

bool Fraction::operator>(const Fraction &rhs)const{
    return ((*num)*(*rhs.den)>(*den)*(*rhs.num)) ? true : false;
}

Fraction& Fraction::operator++(){
    *num += *den;
    return *this;
}

Fraction Fraction::operator++(int){
    Fraction temp = *this;
    ++(*this);
    return temp;
}

std::ostream& operator<<(std::ostream &os,const Fraction &obj){
    os<<obj.getNumerator()<<"/"<<obj.getDenumerator()<<"\n";
    return os;
}

std::istream& operator>>(std::istream &is,Fraction &obj){
    int _num{};
    int _den{};
    char sign{};
    is>>_num>>sign>>_den;
    obj.setNumerator(_num);
    obj.setDenumerator(_den);
    return is;
}
