#ifndef EMPHOUR_H
#define EMPHOUR_H
#include "employee.h"

class Emphour : public Employee
{
private:
    Employee details;
    float wage, overtime_rate;

public:
    Emphour(Employee &one, float wage);
    void getTotalOvertime();
    void getWageDetails();
    ~Emphour();
};
#endif