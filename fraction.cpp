#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int num, int den = 1) : numer(num), denom(den)
{
    normalize();
}
Fraction::Fraction() : numer(0), denom(1)
{
}
Fraction::Fraction(const Fraction &fract) : numer(fract.numer), denom(fract.denom)
{
}
int Fraction::getNumer() const
{
    return numer;
}
int Fraction::getDenom() const
{
    return denom;
}
void Fraction::print() const
{
    cout << numer << "/" << denom << endl;
}
void Fraction::setNumer(int num)
{
    numer = num;
    normalize();
}
void Fraction::setDenom(int den)
{
    denom = den;
    normalize();
}
void Fraction::normalize()
{
    if (denom == 0)
    {
        cout << "Invalid denomination. Need to quit." << endl;
        assert(false);
    }

    if (denom < 0)
    {
        denom = -denom;
        numer = -numer;
    }

    int divisor = gcd(abs(numer), abs(denom));
    numer = numer / divisor;
    denom = denom / divisor;
}

int Fraction::gcd(int n, int m)
{
    int gcd = 1;
    for (int k = 1; k <= n && k <= m; k++)
    {
        if (n % k == 0 && m % k == 0)
        {
            gcd = k;
        }
    }
    return gcd;
}

const Fraction Fraction::operator+() const
{
    Fraction temp(+numer, denom);
    return temp;
}

const Fraction Fraction::operator-() const
{
    Fraction temp(-numer, denom);
    return temp;
}

Fraction &Fraction::operator++()
{
    numer = numer + denom;
    this->normalize();
    return *this;
}

Fraction &Fraction::operator--()
{
    numer = numer - denom;
    this->normalize();
    return *this;
}

const Fraction Fraction::operator++(int dummy)
{
    Fraction temp(numer, denom);
    ++(*this);
    return temp;
}

const Fraction Fraction::operator--(int dummmy)
{
    Fraction temp(numer, denom);
    --(*this);
    return temp;
}

// Fraction &Fraction::operator=(const Fraction &right)
// {
//     if ((*this) != right)
//     {
//         numer = right.numer;
//         denom = right.denom;
//     }
//     return *this;
// }

Fraction &Fraction ::operator+=(const Fraction &right)
{
    numer = numer * right.denom + denom * right.numer;
    denom = denom * right.denom;
    normalize();
    return *this;
}

Fraction &Fraction ::operator-=(const Fraction &right)
{
    numer = numer * right.denom - denom * right.numer;
    denom = denom * right.denom;
    normalize();
    return *this;
}

Fraction &Fraction ::operator*=(const Fraction &right)
{
    numer = numer * right.numer;
    denom = denom * right.denom;
    normalize();
    return *this;
}

Fraction &Fraction ::operator/=(const Fraction &right)
{
    numer = numer * right.denom;
    denom = denom * right.numer;
    normalize();
    return *this;
}

Fraction::~Fraction()
{
}