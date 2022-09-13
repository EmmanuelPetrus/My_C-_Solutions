#ifndef PRFTYPE_H
#define PRFTYPE_H
#include <iostream>
using namespace std;
class PrfType
{
protected:
    double salary;

public:
    virtual void printSalary() = 0;
};
#endif