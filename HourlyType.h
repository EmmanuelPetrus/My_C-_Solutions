#ifndef HOURLYTYPE_H
#define HOURLYTYPE_H
#include <iostream>
using namespace std;
const int RATE = 5;
class HourlyType
{
protected:
    int hour;
    float wage;

public:
    virtual void printWage() = 0;
};

#endif