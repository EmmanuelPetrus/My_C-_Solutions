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

int main(int argc, char const *argv[])
{
    void bsort(const char **p, int n);
    const int MAX = 7;
    const char *days[MAX] = {"Sundays", "Mondays", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    bsort(days, MAX);
    for (int i = 0; i < MAX; i++)
    {
        cout << *(days + i) << endl;
    }

    return 0;
}

void bsort(const char **pp, int n)
{
    void order(const char **, const char **);
    int j, k;
    for (j = 0; j < n - 1; j++)

        for (k = j + 1; k < n; k++)

            order(pp + j, pp + k);
}

void order(const char **pp1, const char **pp2)
{
    if ((**pp1) > (**pp2))
    {
        const char *tempstr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempstr;
    }
}
