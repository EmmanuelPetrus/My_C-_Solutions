#ifndef EMPSAL_H
#define EMPSAL_H
#include "employee.h"

class EmpSal:public Employee
{
private:
    float sal,bonus;
public:
    EmpSal(string name,string number,string b_date,string d_hired,float sal,float bonus);
    ~EmpSal();
};
#endif