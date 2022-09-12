#ifndef COURS_H
#define COURS_H
#include <iostream>
using namespace std;
class Course
{
private:
    string name;
    int units;

public:
    Course();
    Course(string n, int num);
    void print();
    ~Course();
};

#endif