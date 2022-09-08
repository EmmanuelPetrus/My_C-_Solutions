#include "student.h"

int main()
{
    Person person(111111111);
    cout << "Information about person: " << endl;
    person.print();
    cout << endl;
    Student student(222222222, 3.9);
    cout << "Information about student: " << endl;
    student.print();
    cout << endl;
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     Student students[5];
//     students[0] = Student("George", 82);
//     students[1] = Student("John", 73);
//     students[2] = Student("Luci", 91);
//     students[3] = Student("Mary", 72);
//     students[4] = Student("Sue", 65);

//     for (int i = 0; i < 5; i++)
//         students[i].print();
//     return 0;
// }
