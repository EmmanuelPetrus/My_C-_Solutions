#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
class Complex
{
private:
    int real, imaginary;

public:
    Complex(int a, int b);
    Complex();
    Complex(const Complex &k);
    ~Complex();
    void cplx_add(Complex &m);
    void cplx_sub(Complex &m);
    void cplx_mul(Complex &m);
    void cplx_div(Complex &m);
};

#endif