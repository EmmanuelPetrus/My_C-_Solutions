#include "student.h"

Student::Student() : Person(), gpa(0.0) {}
Student::Student(long id, double gp) : Person(id), gpa(gp)
{
    assert(gpa >= 0.0 && gpa <= 4.0);
}
Student::Student(const Student &student) : Person(student), gpa(student.gpa) {}
Student::~Student() {}
void Student::print() const
{
    Person::print();
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}
// Student::Student() {}
// Student::Student(string nm, int sc) : name(nm), score(sc)
// {
//     char temp[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
//     grade = temp[score / 10];
// }

// Student ::~Student() {}

// void Student::print()
// {
//     cout << setw(12) << left << name;
//     cout << setw(8) << right << score;
//     cout << setw(8) << right << grade << endl;
// }