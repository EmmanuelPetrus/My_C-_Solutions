#include "Coursen.h"
int main()
{
    Student *pStu = new Student[3];
    Student stu1("Emmanuel Peter", 4.23);
    Student stu2("Olorunfemi Emmanuel", 4.56);
    Student stu3("Adeosun Samuel", 4.99);
    Course CSC201(pStu);
    CSC201.addStudent(stu1);
    CSC201.addStudent(stu2);
    CSC201.print();
    return 0;
}