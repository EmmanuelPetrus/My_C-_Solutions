#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <ctype.h>
#include <cmath>
#include <stdlib.h>
#include <math.h>
using namespace std;
// void reversit(char a[])
// {
//     int i, j;
//     char temp;
//     int a_len = strlen(a) - 1;
//     for (i = a_len, j = 0; i > j; i--, j++)
//     {
//         temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//     }
//     cout << "The reversed string is: " << a << endl;
// }

// int main(void)
// {
//     char word[26];
//     cout << "Enter the string to be reversed: ";
//     cin.get(word, 26);
//     reversit(word);
//     return 0;
// }
// #define MAX 4
// class Employee
// {
// private:
//     string name;
//     long int number;

// public:
//     Employee() : name("Emmy"), number(0){};
//     Employee(string n, long int no) : name(n), number(no){};
//     void getdata()
//     {
//         cout << "Enter your name: ";
//         cin >> name;
//         cout << "Enter your phone number:";
//         cin >> number;
//     }
//     void putdata()
//     {
//         cout << "Your name is " << name << " and your number is " << number << endl;
//     }
// };

// int main(void)
// {
//     Employee data[MAX];
//     for (int i = 0; i < MAX; i++)
//         data[i].getdata();
//     for (int i = 0; i < MAX; i++)
//         data[i].putdata();
//     return 0;
// }

// an array of classes
// #define MAX 3
// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     void getdist()
//     {
//         cout << "\n    Enter feet: ";
//         cin >> feet;
//         cout << "     Enter inches: ";
//         cin >> inches;
//     }
//     void showdist() const
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     void show_ave_dist() const
//     {
//         cout << "The average is: " << feet << "\'-" << inches << '\"';
//     }
//     void add_dist(Distance, Distance);
//     void div_dist(Distance, int);
// };

// void Distance::add_dist(Distance d2, Distance d3)
// {
//     inches = d2.inches + d3.inches; // add the inches
//     feet = 0;                       //(for possible carry)
//     if (inches >= 12.0)             // if total exceeds 12.0,
//     {                               // then decrease inches
//         inches -= 12.0;             // by 12.0 and
//         feet++;                     // increase feet
//     }                               // by 1
//     feet += d2.feet + d3.feet;      // add the feet
// }

// void Distance::div_dist(Distance d2, int divisor)
// {
//     float fltfeet = d2.feet + d2.inches / 12.0;
//     fltfeet /= divisor;
//     feet = int(fltfeet);
//     inches = (fltfeet - feet) * 12.0;
// }
// int main(int argc, char const *argv[])
// {
//     Distance dist[MAX];
//     Distance total, ave_rage;
//     int n = 0, j;
//     char ans;
//     cout << endl;
//     do
//     {
//         if (n >= MAX)
//         {
//             cout << "\nThe array is full!!!\n";
//             break;
//         }

//         cout << "Enter distance number " << n + 1;
//         dist[n++].getdist();
//         cout << "Enter another (y/n)?: ";
//         cin >> ans;

//     } while (ans != 'n');

//     for (int i = 0, j = MAX - 1; i <= j / 2; i++, j--)
//     {
//         total.add_dist(dist[i], dist[j]);
//     }
//     ave_rage.div_dist(total, MAX);
//     ave_rage.show_ave_dist();
//     cout << endl;
//     return 0;
// }

// void maxint(int num[], int m)
// {
//     int max = 0, n;
//     for (int i = 0; i < m; i++)
//     {
//         if (num[i] > max)
//         {
//             max = num[i];
//             n = i;
//         }
//         else
//             continue;
//     }
//     cout << "The maximum number is " << max << " located at position " << n << " in the array." << endl;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[4] = {0};
//     for (int i = 0; i < 4; i++)
//     {
//         cout << "Enter a number:";
//         cin >> arr[i];
//     }
//     maxint(arr, 4);

//         return 0;
// }

// string Functions to calculate average of functions
// class fraction
// {
// private:
//     float num;
//     char op;
//     float deno;

// public:
//     fraction() : num(0.0), op('/'), deno(1) {}
//     void getfract()
//     {
//         cout << "\nInput your fraction:";
//         cin >> num >> op >> deno;
//         cout << endl;
//     }
//     void disp()
//     {
//         cout << "\nThe entered frac is: " << num << op << deno;
//     }
//     void fadd(fraction a[], int n);
//     void lowterms();
//     void f_average(int);
// };

// void fraction::fadd(fraction a[], int n)
// {
//     int t, p;
//     int m = a;
//     while ((a3 > 0) || (m > 0))
//     {
//         if (a3 < a1)
//         {
//             t = a3;
//             a3 = a1;
//             a1 = t;
//         }
//         if (m < a2)
//         {
//             p = m;
//             m = a2;
//             a2 = p;
//         }
//         a3 %= a1;
//         m %= a2;
//     }
//     if (a1 < a2)
//         return a1;
//     else
//         return a2;

//     int i, k;
//     for (int i = 0, k = 3; i <= k / 2; i++, k--)
//     {
//         num += (a[i].num * a[k].deno) + (a[k].num * a[i].deno);
//         deno *= a[i].deno * a[k].deno;
//     }
//     lowterms();
// }

// void fraction::f_average(int avr)
// {
//     deno *= avr;
//     lowterms();
//     cout << "\nThe average of the fractions is " << num << "/" << deno;
// }

// void fraction::lowterms() // change ourself to lowest terms
// {
//     long tnum, tden, temp, gcd;
//     tnum = labs(num);  // use non-negative copies
//     tden = labs(deno); // (needs cmath)
//     if (tden == 0)     // check for n/0
//     {
//         cout << "Illegal fraction : division by 0";
//         exit(1);
//     }
//     else if (tnum == 0) // check for 0/n
//     {
//         num = 0;
//         deno = 1;
//         return;
//     }
//     // this 'while' loop finds the gcd of tnum and tden
//     while (tnum != 0)
//     {
//         if (tnum < tden) // ensure numerator larger
//         {
//             temp = tnum;
//             tnum = tden;
//             tden = temp;
//         }             // swap them
//         tnum -= tden; // subtract them
//     }
//     gcd = tden;        // this is greatest common divisor
//     num = num / gcd;   // divide both num and den by gcd
//     deno = deno / gcd; // to reduce frac to lowest terms
// }
// int main(void)
// {
//     fraction a1[4], a2;
//     int n, k;
//     char b;
//     char y = 'y';
//     for (n = 0, k = 3; n <= 1; n++, k--)
//     {
//         a1[n].getfract();
//         a1[k].getfract();
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         a2.fadd(a1[i]);
//         a2.disp();
//     }

//     a2.f_average(4);
//     return 0;
// }

class mstold
{
private:
    char a[25];
    long double m;

public:
    mstold() : a("Emma"), m(0) {}
    void get_money()
    {
        cout << "Enter your money:";
        cin.get(a, 15);
    }
    void disp_money_as_double()
    {
        int p = strlen(a);
        int j = 10;
        for (int i = 0; i < p; i++)
        {
            if (isdigit(a[i]))
                m += (a[i] - '0') * pow(10, --p);
            else if (a[i] == '.')
                m += (a[i]) * pow(10, --p);
            else
                continue;
        }
        // m = atol(a);a
        cout << "The converted double is:" << m;
    }
};

int main(int argc, char const *argv[])
{
    mstold a;
    a.get_money();
    a.disp_money_as_double();
    return 0;
}
