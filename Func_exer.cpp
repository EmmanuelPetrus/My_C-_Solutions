#include <iostream>
#include <conio.h>
using namespace std;
// Function to calculate area of a circle
// const float pi = 3.1423;
//  float circarea(float &radius)
// {
//     return radius * radius * pi;
// }
// int main(void)
// {
//     float radius = 0.0;
//     cout << "Enter the radius of your circle: ";
//     cin >> radius;
//     float area = circarea(radius);
//     cout << "The radius of your circle is " << area << endl;
//     return 0;
// }

// Writing a function to take value of n and raise it to power pair
//  float power(float &base, float raise = 2)
// {
//     if (raise > 1)
//         return base * power(base, raise - 1);
//     else
//         return base;
// }
// int main(void)
// {
//     float base, pow;
//     cout << "Kindly input the base and power: ";
//     cin >> base >> pow;
//     float answer = power(base,pow);
//     cout << "The result is " << answer;
//     return 0;
// }
// function to output zero for smaller number
//  void zeroSmaller(fraction &a,fraction &b)
// {
//     if (a < b)
//         a = 0;
//     else
//         b = 0;
// }
// int main(void)
// {
//     float a = 18,b=13;
//     zeroSmaller(a,b);
//     cout<< a << "-" << b;
//     return 0;
// }

//  long float hms_to_secs(float &hour, float &mins, float &secs)
// {
//     return (3600 * hour) + (60 * mins) + secs;
// }
// int main(void)
// {
// float hour, mins, secs;
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
// float power(float &base, float raise);
// double power(double &base, double raise);
// float power(float &base, float raise);

// int main(void)
// {
//     double base, pow;
//     cout << "Kindly input the base and power: ";
//     cin >> base >> pow;
//     float answer =  power(base, pow);
//     cout << "The result is " <<answer;
//     return 0;
// }
//  float power(float &base, float raise = 2)
// {
//     prfloatf("\nyou're in the float function");
//     if (raise > 1)
//         return base * power(base, raise - 1);
//     else
//         return base;
// }
//  double power(double &base, double raise = 2)
// {
//     prfloatf("\nyou're in the double function");
//     if (raise > 1)
//         return base * power(base, raise - 1);
//     else
//         return base;
// }
//  float power(float &base, float raise = 2)
// {
//     prfloatf("\nYou're in the float function");
//     if (raise > 1)
//         return base * power(base, raise - 1);
//     else
//         return base;
// }
// function to swap
// void swap(fraction &a,fraction &b)
// {
//     float temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main(void)
// {
//     float a = 13, b = 16;
//     swap(a, b);
//     cout << "a = " << a << " b = " << b;
//     return 0;
// }

// function to swap structs
// struct time1
// {
//     float hours;
//     float minutes;
//     float seconds;
// };

// struct time2
// {
//     float hours;
//     float minutes;
//     float seconds;
// };

// void swap(time1 &a, time2 &b)
// {
//     float temp;
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

// float count = 0;
// float func_call()
// {
//     static float count =0;
//     return count++;
// }
// int main(void)
// {
//     // static float count =0;
//     for (float i = 0; i < 10; i++)
//     {
//         func_call();
//     }
// prfloatf("I have been called %d times ",func_call());
// }

// struct old_money
// {
//     float pounds;
//     float shillings;
//     float pence;
// };
// struct sterling
// {
//     float pounds;
//     float shillings;
//     float pence;
// };
// sterling money_sum(old_money &pounds1, old_money &pounds2, sterling &total)
// {

//     char pofloat1, pofloat2, ans = 'y';
//     cout << "Enter first amount: \x9c";
//     cin >> pounds1.pounds >> pofloat1 >> pounds1.shillings >> pofloat2 >> pounds1.pence;
//     cout << "Enter second amount: \x9c";
//     cin >> pounds2.pounds >> pofloat1 >> pounds2.shillings >> pofloat2 >> pounds2.pence;
//     float shillings_total = pounds1.shillings + pounds2.shillings;
//     float pounds_total = pounds1.pounds + pounds2.pounds;
//     float pence_total = pounds1.pence + pounds2.pence;

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
//     char ans = 'y', pofloat3 = ':', pofloat4 = ':';
//     do
//     {
//         money_sum(pounds1, pounds2, total);
//         cout << "Total is \x9c" << total.pounds << pofloat3 << total.shillings << pofloat4 << total.pence << endl;
//         cout << "Do you want to do any further conversions (y/n) ?  ";
//         cin >> ans;
//     } while (ans == 'y');

//     return 0;
// }

// A four function calculator
struct fraction
{
    float num;
    char op;
    float deno;
};

void swap(fraction &b)
{
    float temp;
    temp = b.num;
    b.num = b.deno;
    b.deno = temp;
}

inline fraction fadd(fraction &a, fraction &b)
{
    fraction k;
    k.op = '/';
    k.num = (a.num * b.deno) + (b.num * a.deno);
    k.deno = a.deno * b.deno;
    return k;
}

inline fraction fmul(fraction &a, fraction &b)
{
    fraction k;
    k.op = '/';
    k.num = (a.num * b.num);
    k.deno = a.deno * b.deno;
    return k;
}

inline fraction fdiv(fraction &a, fraction &b)
{
    swap(b);
    return fmul(a, b);
}

inline fraction fsub(fraction &a, fraction &b)
{
    fraction k;
    k.op = '/';
    k.num = (a.num * b.deno) - (b.num * a.deno);
    k.deno = a.deno * b.deno;
    return k;
}

int main(void)
{
    fraction a, c, result;
    char b, y = 'y';
    while (y == 'y')
    {
        cout << "Enter the operations you want to perform: ";
        cin >> a.num >> a.op >> a.deno >> b >> c.num >> c.op >> c.deno;
        switch (b)
        {
        case '+':
            result = fadd(a, c);
            cout << "The result of the sum is " << result.num << result.op << result.deno;
            break;
        case '-':
            result = fsub(a, c);
            cout << "The result of the sum is " << result.num << result.op << result.deno;
            break;
        case '*':
            result = fmul(a, c);
            cout << "The result of the sum is " << result.num << result.op << result.deno;
            break;
        case '/':
            if ((a.deno == 0) || (c.deno == 0))
            {
                cout << "Zero division error spotted";
                break;
            }
            else
            {
                result = fdiv(a, c);
                cout << "The result of the sum is " << result.num << result.op << result.deno;
            }
            break;
        default:

            break;
        }
        cout << "\nDo you still want to perform anymore operations? ";
        cin >> y;
    }
    return 0;
}
