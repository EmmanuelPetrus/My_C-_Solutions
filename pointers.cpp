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

// class Person
// {
// protected:
//     char name[40];

// public:
//     void setName()
//     {
//         cout << "Enter name: ";
//         cin >> name;
//     }
//     void printName()
//     {
//         cout << "\n   Name is: " << name;
//     }
//     // virtual String() { cout << "Destroyed" << endl; }
// };

// int main(int argc, char const *argv[])
// {
// //     Person *perPtr[100];
//     int n = 0;
//     char choice;
//     do
//     {
//         perPtr[n] = new Person;
//         perPtr[n]->setName();
//         n++;
//         cout << "Enter another (y/n)? ";
//         cin >> choice;
//     } while (choice == 'y');

//     for (int i = 0; i < n; i++)
//     {
//         cout << "\nPerson number " << i + 1;
//         perPtr[i]->printName();
//     }
//     cout << endl;
//     for (size_t i = 0; i < n; i++)
//     {
//         delete perPtr[i];
//     }

//     return 0;
// }

// struct link
// {
//     int data;
//     link *next;
// };

// class Linklist
// {
// private:
//     link *first;

// public:
//     Linklist() { first = nullptr; }
//     void additem(int d);
//     void display();
// };

// void Linklist::additem(int d)
// {
//     link *newlink = new link;
//     newlink->data = d;
//     newlink->next = first;
//     first = newlink;
// }

// void Linklist::display()
// {
//     link *current = first;
//     while (current != NULL)
//     {
//         cout << current->data << endl;
//         current = current->next;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     Linklist li;

//     li.additem(25);
//     li.additem(36);
//     li.additem(49);
//     li.additem(68);
//     li.display();
//     return 0;
// }

class Person
{
protected:
    string name;

public:
    void setName()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void printName()
    {
        cout << endl
             << name;
    }
    string getName() { return name; }
};

int main(int argc, char const *argv[])
{
    void bsort(Person **, int);
    Person *persPtr[100];
    int n = 0;
    char choice;

    do
    {
        persPtr[n] = new Person;
        persPtr[n]->setName();
        n++;
        cout << "Enter another (y/n)? ";
        cin >> choice;
    } while (choice == 'y');

    cout << "\nUnsorted list:";
    for (int j = 0; j < n; j++)
    {
        persPtr[j]->printName();
    }
    bsort(persPtr, n);

    cout << "\nSorted list:";
    for (int i = 0; i < n; i++)
    {
        persPtr[i]->printName();
    }
    cout << endl;
    return 0;
}

void bsort(Person **pp, int n)
{
    void order(Person **, Person **);
    int j, k;
    for (j = 0; j < n - 1; j++)

        for (k = j + 1; k < n; k++)

            order(pp + j, pp + k);
}

void order(Person **pp1, Person **pp2)
{
    if ((*pp1)->getName() > (*pp2)->getName())
    {
        Person *tempstr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempstr;
    }
}
