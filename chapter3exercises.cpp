#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

// A program to print a multiplication table
// int main(void)
// {
//     int k;
//     int col = 0;
//     cout << "Enter a number: ";
//     cin >> k;
//     for (int i = 1; i < 31; i++)
//     {
//         if (col == 10)
//         {
//             cout<<endl;
//             col = 0;
//         }
//         cout <<setw(4)<< k*i ;
//         col++;
//     }

//     return 0;
// }

// Program to convert input from keyboard to the respective int type
// int main(void)
// {
//     cout << "Enter a number: ";
//     int c = 0;
//     double k = 5;
//     char ch;
//     while ((ch = getche()) != '\r')
//     {
//         c += (ch - '0') * pow(10,k);
//         --k;
//     }
//     cout << "\nNumber is: "<< c << endl;
//     return 0;
// }

// Four functionn calculator

// int main(void)
// {
//     float a, c;
//     char b, ch = 'y';

//     while (ch == 'y')
//     {
//         cout << "Enter first number , operator and second number: " << endl;
//         cin >> a>> b>> c;
//         switch (b)
//         {
//         case '/':
//             if (c == 0)
//             {
//                 cout << "Zero division error";
//                 break;
//             }
//             else
//             {
//                 cout << a / c << endl;
//                 break;
//             }
//         case '+':
//             cout << a + c << endl;
//             break;
//         case '-':
//             cout << a - c << endl;
//             break;
//         case '*':
//             cout << a * c << endl;
//             break;
//         default:
//             cout << "Wrong operator entered!!" << endl;
//             break;
//         }
//         cout << "Do you want to calculate anything again (y/n): ";
//         cin >> ch;
//     }
//     return 0;
// }

// int main(void)
// {
//     int space = ' ';
//     for (int i = 0; i < 21; i++)
//     {
//         i+=1;
//         for (int j = 0; j < i;j++ )
//         {
//             cout << "X";
//         }
//         cout<<endl;
//         cout<<setw(i);
//     }

//     return 0;
// }

// Compound interest calculator
// int main(void)
// {
//     float amount, rate, result, per_rate;
//     int years = 0;
//     cout << "Enter initial amount: ";
//     cin >> amount;
//     cout << "Enter number of years: ";
//     cin >> years;
//     cout << "Enter the interest rate (percent per year): ";
//     cin >> rate;
//     per_rate = rate / 100;
//     // cout<<per_rate<<endl;
//     for (int i = 0; i < years; i++)
//     {
//         result = amount + amount * per_rate;
//         amount = result;
//     }
//     cout<<"The amount accrued over " << years <<" years is " << result;
//     return 0;
// }

// Addition of both pounds ,shilligs and pence
int main(void)
{
    int pounds1, pounds2, total, shillings1, shillings2, pence1, pence2;
    char point1, point2, point3, point4, ans = 'y';
    do
    {
        cout << "Enter first amount: \x9c";
        cin >> pounds1 >> point1 >> shillings1 >> point2 >> pence1;
        cout << "Enter second amount: \x9c";
        cin >> pounds2 >> point3 >> shillings2 >> point4  >> pence2;
        int shillings_total = shillings1 + shillings2;
        int pounds_total = pounds1 + pounds2;
        int pence_total = pence1 + pence2;

        if ((pence_total / 12) > 0)
        {
            shillings_total += pence_total / 12;
            pence_total %= 12;
        }
        if ((shillings_total) / 20 >= 0)
        {
            pounds_total += shillings_total / 20;
            shillings_total %= 20;
        }

        cout << "Total is \x9c" << pounds_total << point1 << shillings_total << point2 << pence_total << endl
             << "Do you want to do any further conversions (y/n) ?  ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}