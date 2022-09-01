#ifndef STUDEN_H
#define STUDEN_H
#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

class Student
{
private:
    int score;
    string name;
    char grade;

public:
    Student(string name, int score);
    Student();
    ~Student();
    void print();
};
#endif