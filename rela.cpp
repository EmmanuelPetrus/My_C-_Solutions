#include <iostream>
#include <cassert>
#include <string>
using namespace std;

class Person
{
private:
    long identity;

public:
    void setId(long identity);
    long getId() const;
};

void Person::setId(long id)
{
    identity = id;
    assert(identity >= 100000000 && identity <= 999999999);
}

long Person::getId() const
{
    return identity;
}

class Student : public Person
{
private:
    double gpa;

public:
    void setGPA(double gpa);
    double getGPA() const;
};

void Student::setGPA(double gp)
{
    gpa = gp;
    assert(gpa >= 0 && gpa <= 4.0);
}

double Student::getGPA() const
{
    return gpa;
}

int main()
{
    Person person;
    person.setId(111111111L);
    cout << "Person Information : " << endl;
    cout << "Person's identity: " << person.getId();
    cout << endl
         << endl;
    // Instantiation and use of a Student object
    Student student;
    student.setId(222222222L);
    student.setGPA(3.9);
    cout << "Student Information: " << endl;
    cout << "Student's identity: " << student.getId() << endl;
    cout << "Student's gpa: " << student.getGPA();
    return 0;
}