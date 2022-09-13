#ifndef STDTYPE_H
#define STDTYPE_H
#include <iostream>
using namespace std;
class StdType
{
protected:
    double gpa;

public:
    virtual void printGPA() = 0;
};
#endif