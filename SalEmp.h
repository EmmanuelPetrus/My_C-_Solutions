#ifndef SAL_EMPLOYEE_H
#define SAL_EMPLOYEE_H
#include "Employe.h"
#include "SalaryType.h"

class SalaryEmployee : public Employee, public SalaryType
{

public:
    SalaryEmployee(string first_name, string initial, string last_name, int salary);
    void printSAL() ;
    void print();
    ~SalaryEmployee();
};

#endif