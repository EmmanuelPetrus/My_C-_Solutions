#ifndef COURSEN_H
#define COURSEN_H
#include "Studentn.h"

class Course : public Student
{
private:
    int size;
    Student *tStudent;

public:
    Course();
    Course(Student *pStudent);
    void addStudent(Student &nStu);
    void print();
    ~Course();
};

#endif