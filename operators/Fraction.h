class Fraction{
    int *num{};
    int *den{};

    public:
    Fraction();
    Fraction(int,int);
    void setNumerator(int);
    void setDenumerator(int);
    void print() const;

    Fraction operator=(const Fraction &);
    Fraction operator+(const Fraction &);
    Fraction operator-(const Fraction &);
    Fraction operator/(const Fraction &);
    Fraction operator*(const Fraction &);
};