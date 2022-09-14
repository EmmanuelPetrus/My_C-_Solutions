#ifndef SALHOUR_H
#define SALHOUR_H
#include "Employe.h"
#include "HourlyType.h"
#include "SalaryType.h"

class SalHourEmp : public Employee, public HourlyType, public SalaryType
{
public:
    SalHourEmp(string first_name, string initial, string last_name, int salary, int hour);
    void printSAL() ;
    void printWage() ;
    void print() ;
    ~SalHourEmp();
};

#endif