#include <iostream>
#include <conio.h>
using namespace std;
// Function to calculate area of a circle
// const float pi = 3.1423;
//  float circarea(int &radius)
// {
//     return radius * radius * pi;
// }
// int main(void)
// {
//     int radius = 0.0;
//     cout << "Enter the radius of your circle: ";
//     cin >> radius;
//     float area = circarea(radius);
//     cout << "The radius of your circle is " << area << endl;
//     return 0;
// }

// Writing a function to take value of n and raise it to power pair
//  int power(int &base, int raise = 2)
// {
//     if (raise > 1)
//         return base * power(base, raise - 1);
//     else
//         return base;
// }
// int main(void)
// {
//     int base, pow;
//     cout << "Kindly input the base and power: ";
//     cin >> base >> pow;
//     int answer = power(base,pow);
//     cout << "The result is " << answer;
//     return 0;
// }
// function to output zero for smaller number
//  void zeroSmaller(int &a, int &b)
// {
//     if (a < b)
//         a = 0;
//     else
//         b = 0;
// }
// int main(void)
// {
//     int a = 18,b=13;
//     zeroSmaller(a,b);
//     cout<< a << "-" << b;
//     return 0;
// }

//  long int hms_to_secs(int &hour, int &mins, int &secs)
// {
//     return (3600 * hour) + (60 * mins) + secs;
// }
// int main(void)
// {
// int hour, mins, secs;
// char a = 'y';
// while (a == 'y')
// {
// cout << "Enter your time format: ";
// cin >> hour >> mins >> secs;
// cout << "The time converted to seconds is " << hms_to_secs(hour, mins, secs) << endl;
// cout << "Do you still wat to continue(y or n): ";
// cin >> a;
// }

//     return 0;
// }

// creating a series of overloaded functions to solve the power raiser problem
// int power(int &base, int raise);
// double power(double &base, double raise);
// float power(float &base, float raise);

// int main(void)
// {
//     double base, pow;
//     cout << "Kindly input the base and power: ";
//     cin >> base >> pow;
//     int answer =  power(base, pow);
//     cout << "\nThe result is " <<answer;
//     return 0;
// }
//  int power(int &base, int raise = 2)
// {
//     printf("\nyou're in the int function");
//     if (raise > 1)
//         return base * power(base, raise - 1);
//     else
//         return base;
// }
//  double power(double &base, double raise = 2)
// {
//     printf("\nyou're in the double function");
//     if (raise > 1)
//         return base * power(base, raise - 1);
//     else
//         return base;
// }
//  float power(float &base, float raise = 2)
// {
//     printf("\nYou're in the float function");
//     if (raise > 1)
//         return base * power(base, raise - 1);
//     else
//         return base;
// }
// function to swap
// void swap(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main(void)
// {
//     int a = 13, b = 16;
//     swap(a, b);
//     cout << "a = " << a << " b = " << b;
//     return 0;
// }

// function to swap structs
// struct time1
// {
//     int hours;
//     int minutes;
//     int seconds;
// };

// struct time2
// {
//     int hours;
//     int minutes;
//     int seconds;
// };

// void swap(time1 &a, time2 &b)
// {
//     int temp;
//     temp = a.hours;
//     a.hours = b.hours;
//     b.hours = temp;
//     temp = a.minutes;
//     a.minutes = b.minutes;
//     b.minutes = temp;
//     temp = a.seconds;
//     a.seconds = b.seconds;
//     b.seconds = temp;
// }
// int main(void)
// {
//     time1 a = {10, 15, 20};
//     time1 b = {16, 17, 18};
//     swap(a, b);
//     cout << "a = " << a.hours << " b = " << b.hours;
//     return 0;
// }

// int count = 0;
// int func_call()
// {
//     static int count =0;
//     return count++;
// }
// int main(void)
// {
//     // static int count =0;
//     for (int i = 0; i < 10; i++)
//     {
//         func_call();
//     }
// printf("I have been called %d times ",func_call());
// }

// struct old_money
// {
//     int pounds;
//     int shillings;
//     int pence;
// };
// struct sterling
// {
//     int pounds;
//     int shillings;
//     int pence;
// };
// sterling money_sum(old_money &pounds1, old_money &pounds2, sterling &total)
// {

//     char point1, point2, ans = 'y';
//     cout << "Enter first amount: \x9c";
//     cin >> pounds1.pounds >> point1 >> pounds1.shillings >> point2 >> pounds1.pence;
//     cout << "Enter second amount: \x9c";
//     cin >> pounds2.pounds >> point1 >> pounds2.shillings >> point2 >> pounds2.pence;
//     int shillings_total = pounds1.shillings + pounds2.shillings;
//     int pounds_total = pounds1.pounds + pounds2.pounds;
//     int pence_total = pounds1.pence + pounds2.pence;

//     if ((pence_total / 12) > 0)
//     {
//         shillings_total += pence_total / 12;
//         pence_total %= 12;
//     }
//     if ((shillings_total) / 20 >= 0)
//     {
//         pounds_total += shillings_total / 20;
//         shillings_total %= 20;
//     }
//     return total = {pounds_total, shillings_total, pence_total};
// }
// int main(void)
// {
//     old_money pounds1, pounds2;
//     sterling total;
//     char ans = 'y', point3 = ':', point4 = ':';
//     do
//     {
//         money_sum(pounds1, pounds2, total);
//         cout << "Total is \x9c" << total.pounds << point3 << total.shillings << point4 << total.pence << endl;
//         cout << "Do you want to do any further conversions (y/n) ?  ";
//         cin >> ans;
//     } while (ans == 'y');

//     return 0;
// }