#include "Stud.h"

int main()
{
    Course *pStu = new Course[4];
    Course a("CSC201", 3);
    Course b("MEE205", 3);
    Course c("CHE201", 3);
    Course d("EEE204", 3);
    Student aStu("Emmanuel Peter", 5.0, pStu);
    aStu.addCourse(a);
    aStu.addCourse(b);
    aStu.addCourse(c);
    aStu.addCourse(d);
    aStu.print();
    return 0;
}