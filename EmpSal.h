#ifndef EMPSAL_H
#define EMPSAL_H
#include "employee.h"

class EmpSal : public Employee
{
private:
    Employee details;
    float sal, bonus;

public:
    EmpSal(Employee &one, float sal);
    void getSalDetails();
    void getTotalSal();
    ~EmpSal();
};
#endif