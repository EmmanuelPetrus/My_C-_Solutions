#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pers.h"
#include "prftype.h"
class Professor : public Person, public PrfType
{
public:
    Professor(string name, double salary);
    void printSalary();
    void print();
};
#endif