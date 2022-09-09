#include "registrar.h"

int main()
{
    Registrar registrar;

    Student student1("John");
    Student student2("Mary");
    Student student3("Ann");

    Course course1("CIS101", 4);
    Course course2("CIS102", 3);
    Course course3("CIS103", 3);

    registrar.enroll(student1, course1);
    registrar.enroll(student1, course2);
    registrar.enroll(student2, course1);
    registrar.enroll(student2, course3);
    registrar.enroll(student3, course1);

    student1.print();
    student2.print();
    student3.print();

    course1.print();
    course2.print();
    course3.print();

    return 0;
}