#include "Coursen.h"

Course::Course() : size(0)
{
    tStudent = nullptr;
}

Course::Course(Student *pStu) : size(0), tStudent(pStu) {}
Course::~Course()
{
    delete[] tStudent;
}

void Course::print()
{
    cout << "Students who enrolled for the Course are: " << endl;
    for (int i = 0; i < size; i++)
    {
        tStudent[i].print();
    }
}

void Course::addStudent(Student &stuNew)
{
    *(tStudent + size) = stuNew;
    size++;
}