#ifndef STUDENT_H
#define STUDENT_H
#include "Perso.h"
class Student : public Person
{
private:
    float gpa;

public:
    Student(string na, float gp);
    ~Student();
    void getGpa();
};

#endif