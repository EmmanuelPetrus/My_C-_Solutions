#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
using namespace std;

class Array
{
private:
    double *ptr;
    int size;

public:
    Array(int size);
    ~Array();
    double &operator[](int index) const;
    double &operator[](int index);
};
#endif