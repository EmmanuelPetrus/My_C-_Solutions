#ifndef QUADRATIC_H
#define QUADRATIC_H
#include <iostream>
#include <cmath>
class Quadratic
{
private:
    int a, b, c;

public:
    Quadratic(int a, int b, int c);
    Quadratic(const Quadratic &a) = delete;
    ~Quadratic();
    void roots();
};

#endif