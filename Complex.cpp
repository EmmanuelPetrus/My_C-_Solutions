#include "Complex.h"
#include <cmath>
using namespace std;

Complex::Complex() : real(0), imaginary(0) {}
Complex::Complex(int a, int b) : real(a), imaginary(b) {}
Complex::Complex(const Complex &k) : real(k.real), imaginary(k.imaginary) {}
Complex::~Complex() {}

void Complex::cplx_add(Complex &m)
{
    int c_add_x = real + m.real;
    int c_add_y = imaginary + m.imaginary;
    cout << "The sum is " << c_add_x << " + i" << c_add_y << endl;
}

void Complex::cplx_sub(Complex &m)
{
    int c_sub_x = real - m.real;
    int c_sub_y = imaginary - m.imaginary;
    cout << "The difference is " << c_sub_x << " + i" << c_sub_y << endl;
}

void Complex::cplx_mul(Complex &m)
{
    int c_mul_x = ((real * m.real) - (imaginary * m.imaginary));
    int c_mul_y = ((real * m.imaginary) + (m.real * imaginary));
    cout << "The multiplication is " << c_mul_x << " + i" << c_mul_y << endl;
}

void Complex::cplx_div(Complex &m)
{
    int c_div_x, c_div_y;
    int c_mul_x = ((real * m.real) - (imaginary * m.imaginary));
    int c_mul_y = ((real * m.imaginary) + (m.real * imaginary));
    int denom = pow(real, 2) + pow(m.real, 2);

    if ((c_mul_x % denom == 0) && (c_mul_y % denom == 0))
    {
        c_div_x = c_mul_x / denom;
        c_div_y = c_mul_y / denom;
        cout << "The division is " << c_div_x << " + i" << c_div_y << endl;
    }
    cout << "The division is " << c_div_x << " + i" << c_div_y << " / " << denom << endl;
}
