#ifndef UNDERGRAD_H
#define UNDERGRAD_H
#include "Stu.h"
class Undergrad:public Student
{
private:
    int year;
public:
    Undergrad(string nm,float gp,int y);
    ~Undergrad();
    void getYear();
};

#endif