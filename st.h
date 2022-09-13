#ifndef STUDENT_H
#define STUDENT_H
#include "per.h"
class Student : virtual public Person
{
protected:
    double gpa;

public:
    Student(string name, double gpa);
    ~Student();
    void print();
};
#endif