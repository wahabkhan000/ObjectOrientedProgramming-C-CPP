#ifndef Fraction_H
#define Fraction_H

#include <iostream>
class Fraction{
    int *num{};
    int *den{};

    public:
    Fraction();
    Fraction(int,int);
    void setNumerator(int);
    void setDenumerator(int);
    int getNumerator() const;
    int getDenumerator() const;
    void print() const;

    Fraction operator=(const Fraction &);
    Fraction operator+(const Fraction &) const;
    Fraction operator-(const Fraction &) const;
    Fraction operator/(const Fraction &) const;
    Fraction operator*(const Fraction &) const;
    bool operator<(const Fraction &) const;
    bool operator==(const Fraction &) const;
    bool operator>(const Fraction &) const;
    Fraction operator++(int);
    Fraction& operator++();
};

std::ostream& operator<<(std::ostream &os,const Fraction &);
std::istream& operator>>(std::istream &is,Fraction &);

#endif