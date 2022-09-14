#ifndef HOURLY_H
#define HOURLY_H
#include "Employe.h"
#include "HourlyType.h"
class HourlyEmployee : public Employee, public HourlyType
{
public:
    HourlyEmployee(string first_name, string initial, string last_name, int hour);
    void printWage();
    void print();
    ~HourlyEmployee();
};

#endif