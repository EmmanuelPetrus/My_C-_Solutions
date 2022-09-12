#ifndef EMPHOUR_H
#define EMPHOUR_H
#include "employee.h"

class Emphour : public Employee
{
private:
    float sal, bonus;

public:
    Emphour(string name, string number, string b_date, string d_hired, float sal, float bonus);
    ~Emphour();
};
#endif