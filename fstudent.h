#ifndef STUDENT_H
#define STUDENT_H
#include "fperson.h"
class Student : public Person
{
private:
    double gpa;

public:
    Student(string name, double gpa);
    virtual void print() const;
};
#endif