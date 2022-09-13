#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Perso.h"
class Employee : Person
{
private:
    float salary;

public:
    Employee(string na, float salary);
    ~Employee();
    void getSal();
};

#endif