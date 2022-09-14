#ifndef SAL_EMPLOYEE_H
#define SAL_EMPLOYEE_H
#include "Employe.h"
class SalaryEmployee : public Employee
{
private:
    int salary;

public:
    SalaryEmployee(string first_name, string initial, string last_name, int salary);
    virtual void print() const;
    virtual ~SalaryEmployee();
};

#endif