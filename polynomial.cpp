#include "poly.h"
Poly::Poly() : degree(0) { ptr = 0; }
Poly::Poly(int deg) : degree(deg)
{
    ptr = new double[degree + 1];
    for (int i = degree; i >= 0; i--)
    {
        ptr[i] = 0.0;
    }
}
Poly::Poly(int deg, double coef) : degree(deg)
{
    ptr = new double[degree + 1];
    for (int i = 0; i >= 0; i--)
    {
        ptr[i] = 0.0;
    }
    ptr[degree] = coef;
}

Poly::~Poly() { delete[] ptr; }

Poly::Poly(const Poly &origin)
{
    ptr = new double[degree + 1];
    for (int i = origin.degree; i >= 0; i--)
    {
        ptr[i] = origin.ptr[i];
    }
}

Poly &Poly::operator=(const Poly &right)
{
    this->degree = right.degree;
    this->ptr = new double[degree + 1];
    for (int i = right.degree; i >= 0; i--)
    {
        (this->ptr)[i] = right.ptr[i];
    }
    return *this;
}

const Poly operator+(const Poly &left, const Poly &right)
{
    Poly result(max(left.degree, right.degree));
    for (int i = result.degree; i >= 0; i--)
    {
        if (i <= left.degree && i <= right.degree)
            result.ptr[i] = left.ptr[i] + right.ptr[i];
        else if (i <= left.degree && i > right.degree)
            result.ptr[i] = left.ptr[i];
        else
            result.ptr[i] = right.ptr[i];
    }
    return result;
}

const Poly operator-(const Poly &left, const Poly &right)
{
    Poly result(max(left.degree, right.degree));
    for (int i = result.degree; i >= 0; i--)
    {
        if (i <= left.degree && i <= right.degree)
        {
            result.ptr[i] = left.ptr[i] - right.ptr[i];
        }
        else if (i <= left.degree && i > right.degree)
        {
            result.ptr[i] = left.ptr[i];
        }
        else
        {
            result.ptr[i] = -right.ptr[i];
        }
    }
    return result;
}
// Multiplication operator
const Poly operator*(const Poly &left, const Poly &right)
{
    int degree = left.degree + right.degree;
    Poly result(degree);
    for (int i = result.degree; i >= 0; i--)
    {
        result.ptr[i] = 0;
    }
    for (int i = left.degree; i >= 0; i--)
    {
        for (int j = right.degree; j >= 0; j--)
        {
            result.ptr[i + j] += (left.ptr[i] * right.ptr[j]);
        }
    }
    return result;
}
// Quotient operator
const Poly operator/(const Poly &left, const Poly &right)
{
    Poly result(left.degree - right.degree);
    Poly temp(left.degree);
    temp = left;
    int i = temp.degree;
    int j = right.degree;
    int k = i - j;
    while (i >= j)
    {
        double coef = temp.ptr[i] / right.ptr[j];
        Poly poly(k, coef);
        temp = temp - (poly * right);
        result = result + poly;
        i--;
        k = i - j;
    }
    return result;
}
// Remainder operator
const Poly operator%(const Poly &left, const Poly &right)
{
    Poly result(left.degree - right.degree - 1);
    Poly temp(left.degree);
    temp = left;
    result = temp - (temp / right) * right;
    return result;
}
// The << operator
ostream &operator<<(ostream &output, const Poly &poly)
{
    string sign;
    for (int i = poly.degree; i >= 0; i--)
    {
        if (poly.ptr[i] > 0.0 || poly.ptr[i] < 0.0)
        {
            cout << fixed << showpos << setprecision(2);
            cout << poly.ptr[i];
            cout << noshowpos;
            if (i != 0)
            {
                cout << "x^";
                cout << i;
            }
            cout << " ";
        }
    }
    cout << endl;
    return output;
}
// Helper function
int max(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    return y;
}
// A function to fill the coefficient of a polynomial
void Poly ::fill()
{
    for (int i = degree; i >= 0; i--)
    {
        cout << "Enter coefficient for exponent " << i << ": ";
        cin >> ptr[i];
    }
    cout << endl;
}
