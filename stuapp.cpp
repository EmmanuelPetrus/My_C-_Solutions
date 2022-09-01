#include "student.h"

int main(int argc, char const *argv[])
{
    Student students[5];
    students[0] = Student("George", 82);
    students[1] = Student("John", 73);
    students[2] = Student("Luci", 91);
    students[3] = Student("Mary", 72);
    students[4] = Student("Sue", 65);

    for (int i = 0; i < 5; i++)
        students[i].print();
    return 0;
}
