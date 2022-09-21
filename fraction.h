#include <iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H
class Fraction
{
private:
    int numer;
    int denom;

public:
    Fraction(int num, int den);
    Fraction();
    Fraction(const Fraction &fract);
    ~Fraction();

    int getNumer() const;
    int getDenom() const;
    void print() const;

    void setNumer(int num);
    void setDenom(int den);

    operator double();
    const Fraction operator+() const;
    const Fraction operator-() const;
    Fraction &operator=(const Fraction &right);

    const Fraction operator++(int);
    const Fraction operator--(int);

    Fraction &operator+=(const Fraction &right);
    Fraction &operator-=(const Fraction &right);
    Fraction &operator*=(const Fraction &right);
    Fraction &operator/=(const Fraction &right);
    Fraction &operator=(const Fraction &right);

    Fraction &operator++();
    Fraction &operator--();

    // Declarations of addition operator
    friend const Fraction operator+(const Fraction &left, const Fraction &right);
    friend bool operator==(const Fraction &left, const Fraction &right);
    friend istream &operator>>(istream &left, Fraction &right);
    friend ostream &operator<<(ostream &left, const Fraction &right);
    // Helping private member functions
private:
    void normalize();
    int gcd(int n, int m);
};

#endif