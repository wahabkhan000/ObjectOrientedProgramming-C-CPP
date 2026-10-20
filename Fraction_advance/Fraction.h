class Fraction{
int numerator{};
int denumerator{1};

public:
int getNumerator() const;
int getDenumerator() const;
void setNumerator(int num);
void setDenumerator(int den);

Fraction add(Fraction value) const;
Fraction sub(Fraction value) const;
Fraction mul(Fraction value) const;
Fraction div(Fraction value) const;
void print() const;

};