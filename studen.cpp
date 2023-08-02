#include "studen.h"

Student::Student(int id,const string& name,double gpa):stdId(id),stdGpa(gpa)
{
    strcpy(stdName,name.c_str());
    if (stdId<1 || stdId>99)
    {
        cout << "Identity is out of range. Program aborted.";
        assert(false);
    }

    if (stdGpa< 0.0 || stdGpa > 4.0)
    {
        cout << "The gpa value is out of range. Program aborted. ";
        assert(false);
    }
    
    
}

Student::Student(/* args */)
{
}

Student::~Student()
{
}

int Student::getId()const
{
    return stdId;
}

string Student::getName() const
{
    return stdName;
}

double Student::getGpa()const
{
    return stdGpa;
}
