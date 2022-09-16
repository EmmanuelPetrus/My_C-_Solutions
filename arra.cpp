#include "arr.h"
Array::Array(int s) : size(s)
{
    ptr = new double[size];
}

Array::~Array()
{
    delete[] ptr;
}

// accessor subscript

double &Array::operator[](int index) const
{
    if (index < 0 || index >= size)
    {
        cout << "Index is out of range. Program terminates";
        assert(false);
    }
    return ptr[index];
}

// mutator subscript
double &Array::operator[](int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Index is out of range. Program terminates";
        assert(false);
    }
    return ptr[index];
}