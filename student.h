#ifndef Student_H
#define Student_H
#include "Person.h"

class Student:public Person
{
private:
    double gpa;

public:
    Student();
    Student(long identity, double gpa);
    ~Student();
    Student(const Student &student);
    void print() const;
};

#endif
// #ifndef STUDEN_H
// #define STUDEN_H
// #include <iostream>
// #include<iomanip>
// #include <string>
// using namespace std;

// class Student
// {
// private:
//     int score;
//     string name;
//     char grade;

// public:
//     Student(string name, int score);
//     Student();
//     ~Student();
//     void print();
// };
// #endif