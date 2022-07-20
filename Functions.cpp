#include <iostream>
#include <conio.h>
#include <msoftcon/msoftcon.cpp>

using namespace std;

struct circle
{
    int xCo,yCo;
    int radius;
    color fillcolor;
    fstyle fillstyle;
};

void circ_draw(circle c)
{
    set_color(c.fillcolor);
    set_fill_style(c.fillstyle);
    draw_circle(c.xCo,c.yCo,c.radius);
}
int main(void)
{
    init_graphics();
    circle c1 = {15,7,5,cBLUE,X_FILL};
    circle c2 = {41,12,7,cRED,O_FILL};
    circle c3 = {65,18,4,cGREEN,MEDIUM_FILL};

    circ_draw(c1);
    circ_draw(c2);
    circ_draw(c3);
    set_cursor_pos(1,25);
    return 0;
}

// void starline();

// int main(void)
// {
//     starline();
//     cout << "Data type Range" << endl;
//     starline();
//     cout << "char   -128 to 127" << endl
//          << "short  -32,768 to 32,767" << endl
//          << "int    System dependent" << endl
//          << "long   -2,147,483,648 to 2,147,483,647" << endl;
//     starline(); // call to function
//     return 0;
// }

// void starline()
// {
//     for (int j = 0; j < 45; j++)
//         cout << '*';
//     cout << endl;
// }

// void repchar(char , int);

// int main(void)
// {
//     repchar('-',43);
//     cout << "Data type Range" << endl;
//     repchar('=',23);
//     cout << "char   -128 to 127" << endl
//          << "short  -32,768 to 32,767" << endl
//          << "int    System dependent" << endl
//          << "long   -2,147,483,648 to 2,147,483,647" << endl;
//     repchar('-',43); // call to function
//     return 0;
// }

// void repchar(char ch, int n)
// {
//     for (int j = 0; j < n; j++)
//         cout << ch;
//     cout << endl;
// }

// Passing a Distance Structure

// struct Distance
// {
//     int feet;
//     float inches;
// };

// void engldisp(Distance);

// int main()
// {
//     Distance d1, d2;

//     cout << "Enter feet: ";
//     cin >> d1.feet;
//     cout << "Enter inches: ";
//     cin >> d1.inches;

//     cout << "\nEnter feet: ";
//     cin >> d2.feet;
//     cout << "Enter inches: ";
//     cin >> d2.inches;

//     cout << "\nd1 = ";
//     engldisp(d1);
//     cout << "\nd2 = ";
//     engldisp(d2);
//     cout << endl;
//     return 0;
// }
// void engldisp(Distance dd)
// {
//     cout << dd.feet << "\'-" << dd.inches << "\"";
// }

// Passing a Circle structure

// Weight converter from pounds to kilogram
// float lbstokg(float);

// int main(void)
// {
//     float lbs, kgs;
//     cout << "\nEnter your weight in pounds: ";
//     cin >> lbs;
//     kgs = lbstokg(lbs);
//     cout << "Your weight in kilograms is " << kgs << endl;
//     return 0;
// }

// float lbstokg(float pounds)
// {
// float kilograms = 0.453592 * pounds;
//     return 0.453592 * pounds;
// }
// Returning a structure variable

// struct Distance
// {
//     int feet;
//     float inches;
// };

// Distance addengl(Distance, Distance);
// void engldisp(Distance);

// int main(void)
// {
//     Distance d1, d2, d3;

//     cout << "\nEnter feeet: ";
//     cin >> d1.feet;
//     cout << "\nEnter inches: ";
//     cin >> d1.inches;
//     cout << "\nEnter feet: ";
//     cin >> d2.feet;
//     cout << "Enter inches: ";
//     cin >> d2.inches;
//     d3 = addengl(d1, d2);
//     cout << endl;
//     engldisp(d1);
//     cout << " + ";
//     engldisp(d2);
//     cout << " = ";
//     engldisp(d3);
//     cout << endl;
//     return 0;
// }

// Distance addengl(Distance dd1, Distance dd2)
// {
//     Distance dd3;

//     dd3.inches = dd1.inches + dd2.inches;
//     dd3.feet = 0;
//     if (dd3.inches >= 12.0)
//     {
//         dd3.inches -= 12.0;
//         dd3.feet++;
//     }
//     dd3.feet += dd1.feet + dd2.feet;
//     return dd3;
// }

// void engldisp(Distance dd)
// {
//     cout << dd.feet << "\'-" << dd.inches << "\"";
// }

// Passing simple datatypes by reference
// int main(void)
// {
//     void intfrac(float, float &, float &);
//     float number, intpart, fracpart;
//     do
//     {
//         cout << "\nEnter a real number: ";
//         cin >> number;
//         intfrac(number, intpart, fracpart);
//         cout << "Integer part is " << intpart
//              << ", fraction part is " << fracpart << endl;

//     } while (number != 0.0);

//     return 0;
// }

// void intfrac(float n, float &intp, float &fracp)
// {
//     long temp = static_cast<long>(n);
//     intp = static_cast<int>(temp);
//     fracp = n - intp;
// }

// another instance of passing a variable by reference
// int main(void)
// {
//     void order(int &, int &);

//     int n1 = 99, n2 = 11;
//     int n3 = 22, n4 = 88;

//     order(n1, n2);
//     order(n3, n4);

//     cout << "n1=" << n1 << endl;
//     cout << "n2=" << n2 << endl;
//     cout << "n3=" << n3 << endl;
//     cout << "n4=" << n4 << endl;

//     return 0;
// }
// void order(int &numb1, int &numb2)
// {
//     if (numb1 > numb2)
//     {
//         int temp = numb1;
//         numb1 = numb2;
//         numb2 = temp;
//     }
// }
// Passing Structures by Reference

// struct Distance
// {
//     int feet;
//     float inches;
// };

// int main()
// {
//     Distance d1 = {12, 6.5};
//     Distance d2 = {10, 5.5};
//     void engldisp(Distance);
//     void scale(Distance &, float);

//     cout << "d1 = ";
//     engldisp(d1);
//     cout << "\nd2 = ";
//     engldisp(d2);

//     scale(d1, 0.5);
//     scale(d2, 0.25);

//     cout << "\nd1 = ";
//     engldisp(d1);
//     cout << "\nd2 = ";
//     engldisp(d2);
//     cout << endl;
//     return 0;
// }

// void scale(Distance &dd, float factor)
// {
//     float inches = (dd.feet * 12 + dd.inches) * factor;
//     dd.feet = static_cast<int>(inches / 12);
//     dd.inches = inches - dd.feet * 12;
// }

// void engldisp(Distance dd)
// {
//     cout << dd.feet << "\'-" << dd.inches << "\"";
// }

// Overloaded functions
// void repchar();
// void repchar(char);
// void repchar(char, int);

// int main(void)
// {
//     repchar();
//     repchar('=');
//     repchar('+', 30);
//     return 0;
// }

// void repchar()
// {
//     for (int i = 0; i < 45; i++)

//         cout << '*';
//         cout << endl;

// }
// void repchar(char ch)
// {
//     for (int i = 0; i < 45; i++)

//         cout << ch;
//     cout << endl;
// }
// void repchar(char ch, int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << ch;
//     cout << endl;
// }

// More examples on function overloading
// struct Distance
// {
//     int feet;
//     float inches;
// };

// void engldisp(Distance);
// void engldisp(float);

// int main(void)
// {
//     Distance d1;
//     float d2;

//     cout << "\nEnter feet: ";
//     cin >> d1.feet;
//     cout << "Enter inches: ";
//     cin >> d1.inches;

//     cout << "Enter entire distance in inches: ";
//     cin >> d2;

//     cout << "\nd1 = ";
//     engldisp(d1);
//     cout << "\nd2 = ";
//     engldisp(d2);
//     cout << endl;
//     return 0;
// }

// void engldisp(Distance dd)
// {
//     cout << dd.feet << "\'" << dd.inches << "\"";
// }

// void engldisp(float dd)
// {
//     int feet = static_cast<int>(dd / 12);
//     float inches = dd - feet * 12;
//     cout << feet << "\'-" << inches << "\"";
// }
// unsigned long factfunc(unsigned long);

// int main(void)
// {
//     int n;
//     unsigned long fact;

//     cout << "Enter an integer: ";
//     cin >> n;
//     fact = factfunc(n);
//     cout << "Factorial of " << n << " is " << fact << endl;
//     return 0;
// }

// unsigned long factfunc(unsigned long n)
// {
//     if (n > 1)
//         return n * factfunc(n - 1);
//     else
//         return 1;
// }

// inline functions

// inline float lbstokg(float pounds)
// {
//     return 0.453592 * pounds;
// }

// int main()
// {
//     float lbs;

//     cout << "\nEnter your weight in pounds: ";
//     cin >> lbs;
//     cout << "Your weight in kilograms is " << lbstokg(lbs) << endl;
//     return 0;
// }

// Default arguments
// void repchar(char = '*', int = 45);
// int main(void)
// {
//     repchar();
//     repchar('=');
//     repchar('+', 30);
//     return 0;
// }

// void repchar(char ch, int n)
// {
//     for (int j = 0; j < n; j++)
//         cout << ch;
//     cout << endl;
// }

// Understanding scope

// char ch = 'a';
// void getachar();
// void putachar();

// int main(void)
// {
//     while (ch != '\r')
//     {
//         getachar();
//         putachar();
//     }
//     cout << endl;
//     return 0;
// }
// void getachar()
// {
//     ch = getch();
// }

// void putachar()
// {
//     cout << ch;
// }

// Returning a function by referece
// int x;
// int &setw();
// int main(void)
// {
//     setw() = 92;
//     cout << x << endl;
//     return 0;
// }
// int &setw()
// {
//     return x;
// }
