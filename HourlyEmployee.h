#ifndef HOURLY_H
#define HOURLY_H
#include "Employe.h"
const int RATE = 5;
class HourlyEmployee : public Employee
{
private:
    int hour;
    float wage;

public:
    HourlyEmployee(string first_name, string initial, string last_name, int hour);
    virtual void print() const;
    virtual ~HourlyEmployee();
};

#endif