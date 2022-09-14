#ifndef SALARYTYPE_H
#define SALARYTYPE_H
#include <iostream>
using namespace std;
class SalaryType
{
protected:
    int salary;
public:
    virtual void printSAL() = 0;
};

#endif