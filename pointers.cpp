#include <iostream>
#include <cstring>
using namespace std;
// int main(int argc, char const *argv[])
// {
//     void dispstr(char *);
//     char str1[] = "Defined as an array"; // ends up becoming an array constant
//     dispstr(str1);
//     return 0;
// }
// void dispstr(char *ps)
// {
//     while (*ps)
//         cout << *(++ps);
//     cout << endl;
// }

// const int DAYS = 7;
// int main(int argc, char const *argv[])
// {
//      char const *arrptrs[DAYS] = {"Sundays", "Mondays", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//     for (int j = 0; j < DAYS; j++)
//         cout << arrptrs[j] << endl;

//     return 0;
// }

// int main(void)
// {
//     char const *str = "Idle hands are the devil's workshop.";
//     int len = strlen(str);
//     char *ptr;
//     ptr = new char[len + 1];
//     strcpy(ptr, str);
//     cout << "ptr=" << ptr << endl;
//     delete[] ptr;
//     return 0;
// }

// class String
// {
// private:
//     char *str;

// public:
//     String(char const *s)
//     {
//         int length = strlen(s);
//         str = new char[length + 1];
//         strcpy(str, s);
//     }
//     ~String()
//     {
//         cout << "Deleting str.\n";
//         delete[] str;
//     }
//     void display()
//     {
//         cout << str << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     // char p[] = "Who knows nothing doubts nothing.";
//     String s1 = "Who knows nothing doubts nothing.";
//     cout << "s1=";
//     s1.display();
//     return 0;
// }

// Pointers to objects
// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0) {}
//     void getdist()
//     {
//         cout << "\nEnter feet: ";
//         cin >> feet;
//         cout << "Enter inches: ";
//         cin >> inches;
//     }
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"' << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Distance dist;
//     dist.getdist();

//     Distance *distptr;
//     distptr = new Distance;
//     distptr->getdist();
//     dist.showdist();
//     distptr->showdist();
//     delete distptr;
//     return 0;
// }

class Person
{
protected:
    char name[40];

public:
    void setName()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void printName()
    {
        cout << "\n   Name is: " << name;
    }
    // virtual String() { cout << "Destroyed" << endl; }
};

int main(int argc, char const *argv[])
{
    Person *perPtr[100];
    int n = 0;
    char choice;
    do
    {
        perPtr[n] = new Person;
        perPtr[n]->setName();
        n++;
        cout << "Enter another (y/n)? ";
        cin >> choice;
    } while (choice == 'y');

    for (int i = 0; i < n; i++)
    {
        cout << "\nPerson number " << i + 1;
        perPtr[i]->printName();
    }
    cout << endl;
    for (size_t i = 0; i < n; i++)
    {
        delete perPtr[i];
    }

    return 0;
}
