#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;
// int main(int argc, char const *argv[])
// {
//     const int max = 5;
//     float num[max];
//     float *pNum = num;
//     float total = 0;
//     for (int i = 0; i < max; i++)
//     {
//         cout << "Kindly enter your number:";
//         cin >> num[i];
//     }
//     for (int i = 0; i < max; i++)
//     {
//         total += *(pNum + i);
//     }
//     float average = total / max;
//     cout << "The average of the numbers is: " << average << endl;

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
//     char *upit()
//     {
//         int length = strlen(str);
//         for (size_t i = 0; i < length; i++)
//         {

//             if (*(str + i) == ' ')
//                 continue;
//             else
//             {
//                 char m = toupper(*(str + i));
//                 *(str + i) = m;
//             }
//         }
//         return str;
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
//     String m = "How old are you boy";
//     char *k = m.upit();
//     cout << k << endl;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     void bsort(const char **p, int n);
//     const int MAX = 7;
//     const char *days[MAX] = {"Sundays", "Mondays", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//     bsort(days, MAX);
//     for (int i = 0; i < MAX; i++)
//     {
//         cout << *(days + i) << endl;
//     }

//     return 0;
// }

// void bsort(const char **pp, int n)
// {
//     void order(const char **, const char **);
//     int j, k;
//     for (j = 0; j < n - 1; j++)

//         for (k = j + 1; k < n; k++)

//             order(pp + j, pp + k);
// }

// void order(const char **pp1, const char **pp2)
// {
//     if ((**pp1) > (**pp2))
//     {
//         const char *tempstr = *pp1;
//         *pp1 = *pp2;
//         *pp2 = tempstr;
//     }
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
//     void destroy();
//     void display2();
// };

// void Linklist::destroy()
// {
//     link *current = first;
//     int i = 0;
//     while (i < 3)
//     {
//         cout << " with address " << current->next << endl;
//         i++;
//         delete current;
//         current = current->next;
//     }

//     // while (i < 3)
//     // {
//     //     i++;
//     //     delete current;
//     //     cout << "Displaying address: " << first->data << endl;
//     //     current = current->next;
//     //     cout << "Deleting item: " << i << endl;
//     // }
// }
// void Linklist::display2()
// {
//     link *current = first;
//     while (current != NULL)
//     {
//         cout << current->data << " with address " << current->next << endl;
//         current = current->next;
//     }
// }
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

//         cout << current->data << " with address" << current->next << endl;
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
//     li.destroy();
//     // li.display2();
//     return 0;
// }

// function to sum array contents
// const int MAX = 3;
// int main(void)
// {
//     void addarrays(float *arr1, float *arr2, float *arr3, int size);
//     float arr1[MAX] = {23.9, 25.45, 26.89};
//     float arr2[MAX] = {45.7, 12.3, 56.7};
//     float arr3[MAX];
//     float *pArr1 = arr1;
//     float *pArr2 = arr2;
//     float *pArr3 = arr3;
//     addarrays(pArr1, pArr2, pArr3, MAX);
//     for (int i = 0; i < MAX; i++)
//     {
//         cout << i << ". " << *(pArr3 + i) << endl;
//     }

//     return 0;
// }

// void addarrays(float *arr1, float *arr2, float *arr3, int size)
// {
//     for (int i = 0; i < MAX; i++)
//     {
//         *(arr3 + i) = *(arr1 + i) + *(arr2 + i);
//     }
// }
