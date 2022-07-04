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
