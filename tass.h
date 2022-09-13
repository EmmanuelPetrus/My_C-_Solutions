#ifndef TA_H
#define TA_H
#include "pers.h"
#include "stdtype.h"
#include "prftype.h"
class TA : public Person, public StdType, public PrfType
{
public:
    TA(string name, double gpa, double salary);
    void printGPA();
    void printSalary();
    void print();
};
#endif