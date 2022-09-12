#ifndef STUD_H
#define STUD_H
#include "Cours.h"
class Student
{
private:
    string name;
    int cSize;
    float gpa;
    Course *courseList;

public:
    Student();
    Student(string n, float gp, Course *cL);
    void print();
    void addCourse(Course &cl);
    ~Student();
};

#endif