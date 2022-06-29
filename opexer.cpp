#include <iostream>
#include <string>
#include <string.h>
using namespace std;

// // Overloading distance class with subtraction
// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0)
//     {
//     } // constructor (two args)
//     Distance(int ft, float in) : feet(ft), inches(in)
//     {
//     }
//     Int getdist() // get length from user
//     {
//         cout << "\nEnter feet : ";
//         cin >> feet;
//         cout << "Enter inches : ";
//         cin >> inches;
//     }
//     Int showdist() const // display distance
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     Distance operator-(Distance) const;
// };

// Distance Distance::operator-(Distance d2) const
// {
//     int k = feet;
//     float i = inches - d2.inches;
//     if (i < 0)
//     {
//         i += 12;
//         k--;
//     }

//     int f = k - d2.feet;

//     // return a temporary Distance
//     return Distance(f, i); // initialized to sum
// }

// int main(int argc, char const *argv[])
// {
//     Distance dist1, dist3, dist4;
//     dist1.getdist();

//     Distance dist2 = Distance(11, 6.25);

//     dist3 = dist1 - dist2;
//     // dist4 = dist1 + dist2 + dist3;

//     cout << "dist1 = ";
//     dist1.showdist();
//     cout << endl;
//     cout << "dist2 = ";
//     dist2.showdist();
//     cout << endl;
//     cout << "dist3 = ";
//     dist3.showdist();
//     cout << endl;
//     cout << "dist4 = ";
//     dist4.showdist();
//     cout << endl;
//     return 0;
// }

// Concatenating Strings
// class String
// {
// private:
//     enum
//     {
//         SZ = 80
//     };
//     mutable char str[SZ];

// public:
//     String()
//     {
//         strcpy(str, "");
//     };
//     String(char s[])
//     {
//         strcpy(str, s);
//     }
//     Int display() const
//     {
//         cout << str;
//     }
//     String operator+=(String ss) const
//     {
//         String temp;
//         if (strlen(str) + strlen(ss.str) < SZ)
//         {
//             strcat(str, ss.str);
//         }
//         else
//         {
//             cout << "\nString overflow";
//             exit(1);
//         }
//         return str;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     // String s1 = "\nMerry Christmas!    ";
//     // String s2 = "Happy new year!";
//     // String s3;
//     char p[] = "\nMerry Christmas! ";
//     char m[] = "Happy new year!";
//     String s1(p);
//     String s2(m);
//     String s3;
//     s1.display();
//     s2.display();
//     // s3.display();

//     s3 = s1 += s2;
//     s3.display();
//     s1.display();
//     cout << endl;
//     return 0;
// }

// class time
// {
// private:
//     int hours;
//     int minutes;
//     int seconds;

// public:
//     time() : hours(0), minutes(0), seconds(0) {}
//     time(int h, int m, int s) : hours(h), minutes(m), seconds(s){};
//     Int display()
//     {
//         cout << hours << ":" << minutes << ":" << seconds << endl;
//     }
//     time operator+(const time &) const;
// };
// time time::operator+(const time &b) const
// {
//     time temp;
//     temp.seconds = seconds + b.seconds;
//     temp.minutes = minutes + b.minutes;
//     temp.hours = hours + b.hours;
//     if ((temp.seconds / 60) > 0)
//     {
//         temp.minutes += (temp.seconds / 60);
//         temp.seconds %= 60;
//     }
//     if ((temp.minutes / 60) > 0)
//     {
//         temp.hours += (temp.minutes / 60);
//         temp.minutes %= 60;
//     }
//     return temp;
// }

// int main(int argc, char const *argv[])
// {
//     time t1(2, 13, 67), t2(6, 78, 23), t3;
//     t1.display();
//     t2.display();
//     t3 = t1 + t2;
//     t3.display();
//     return 0;
// }
// #include <math.h>
// int power = pow(2, sizeof(int) * 8);

// class Int
// {
// private:
//     int a;

// public:
//     Int() : a(0) {}
//     Int(int b) : a(b) {}
//     // ~Int();
//     Int operator+(Int);
//     Int operator-(Int);
//     Int operator*(Int);
//     Int operator/(Int);
//     int getdist() { return a; }
// };

// Int Int::operator*(const Int d)
// {
//     Int temp;
//     temp.a = a * d.a;
//     if (temp.a >= power || temp.a < 0)
//     {
//         cout << "Overflow detected!!";
//         exit(1);
//     }
//     else
//         return temp;
// }
// Int Int::operator+(const Int d)
// {
//     Int temp;
//     temp.a = a + d.a;
//     if (temp.a >= power || temp.a < 0)
//     {
//         cout << "Overflow detected!!";
//         exit(1);
//     }
//     else
//         return temp;
// }
// Int Int::operator-(const Int d)
// {
//     Int temp;
//     temp.a = a - d.a;
//     if (temp.a >= power || temp.a < 0)
//     {
//         cout << "Overflow detected!!";
//         exit(1);
//     }
//     else
//         return temp;
// }
// Int Int::operator/(const Int d)
// {
//     Int temp;
//     temp.a = a / d.a;
//     if (temp.a >= power || temp.a < 0)
//     {
//         cout << "Overflow detected!!";
//         exit(1);
//     }
//     else
//         return temp;
// }
// int main(int argc, char const *argv[])
// {
//     Int f1(999999999);
//     Int f2(999999999);
//     Int f3(999999999);
//     Int f4 = f1 * f2 * f3;
//     cout << "The sum of the numbers is " << f4.getdist();
//     return 0;
// }

// class time
// {
// private:
//     int hours;
//     int minutes;
//     int seconds;

// public:
//     time() : hours(0), minutes(0), seconds(0) {}
//     time(int h, int m, int s) : hours(h), minutes(m), seconds(s){};
//     fraction display()
//     {
//         cout << hours << ":" << minutes << ":" << seconds << endl;
//     }
//     time operator+(const time &) const;
//     time operator++(int);
//     time operator++();
//     time operator--();
//     time operator--(int);
// };

// time time::operator++(int)
// {
//     hours++;
//     minutes++;
//     seconds++;
// }
// time time::operator++()
// {
//     ++hours;
//     ++minutes;
//     ++seconds;
// }
// time time::operator--()
// {
//     --hours;
//     --minutes;
//     --seconds;
// }
// time time::operator--(int)
// {
//     hours--;
//     minutes--;
//     seconds--;
// }
// time time::operator+(const time &b) const
// {
//     time temp;
//     temp.seconds = seconds + b.seconds;
//     temp.minutes = minutes + b.minutes;
//     temp.hours = hours + b.hours;
//     if ((temp.seconds / 60) > 0)
//     {
//         temp.minutes += (temp.seconds / 60);
//         temp.seconds %= 60;
//     }
//     if ((temp.minutes / 60) > 0)
//     {
//         temp.hours += (temp.minutes / 60);
//         temp.minutes %= 60;
//     }
//     return temp;
// }

// int main(int argc, char const *argv[])
// {
//     time t1(2, 13, 67), t2(6, 78, 23), t3;
//     t1++;
//     t1++;
//     --t1;
//     --t2;
//     t2++;
//     ++t2;
//     t1.display();
//     t2.display();
//     t3 = t1 + t2;
//     t3.display();
//     return 0;
// }

// class time
// {
// private:
//     int hours;
//     int minutes;
//     int seconds;

// public:
//     time() : hours(0), minutes(0), seconds(0) {}
//     time(int h, int m, int s) : hours(h), minutes(m), seconds(s){};
//     fraction display()
//     {
//         cout << "Overloading Successful - " << hours << ":" << minutes << ":" << seconds << endl;
//     }
//     time operator+(const time &) const;
//     time operator-(const time &) const;
// };
// time time::operator+(const time &b) const
// {
//     time temp;
//     temp.seconds = seconds + b.seconds;
//     temp.minutes = minutes + b.minutes;
//     temp.hours = hours + b.hours;
//     if ((temp.seconds / 60) > 0)
//     {
//         temp.minutes += (temp.seconds / 60);
//         temp.seconds %= 60;
//     }
//     if ((temp.minutes / 60) > 0)
//     {
//         temp.hours += (temp.minutes / 60);
//         temp.minutes %= 60;
//     }
//     return temp;
// }
// time time::operator-(const time &b) const
// {
//     time temp;
//     temp.seconds = seconds - b.seconds;
//     temp.minutes = minutes - b.minutes;
//     temp.hours = hours - b.hours;
//     if (temp.seconds < 0)
//     {
//         temp.seconds += 60;
//         --temp.minutes;
//     }
//     if (temp.minutes < 0)
//     {
//         temp.minutes += 60;
//         --temp.hours;
//     }
//     if ((temp.seconds / 60) > 0)
//     {
//         temp.minutes += (temp.seconds / 60);
//         temp.seconds %= 60;
//     }
//     if ((temp.minutes / 60) > 0)
//     {
//         temp.hours += (temp.minutes / 60);
//         temp.minutes %= 60;
//     }
//     return temp;
// }

// int main(int argc, char const *argv[])
// {
//     time t1(2, 13, 45), t2(3, 2, 23), t3;
//     t1.display();
//     t2.display();
//     t3 = t2 - t1;
//     t3.display();
//     return 0;
// }

// class fraction
// {
// private:
//     float num;
//     char op;
//     float deno;

// public:
//     fraction() : num(0.0), op('/'), deno(0.0) {}
//     void getfract()
//     {
//         cin >> num >> op >> deno;
//     }
//     void dispfract()
//     {
//         cout << "The result is " << num << "/" << deno << endl;
//     }
//     fraction operator+(fraction &b);
//     void swap(fraction &b);
//     fraction operator*(fraction &b);
//     fraction operator/(fraction &b);
//     fraction operator-(fraction &b);
//     void lowterms();
// };
// void fraction::swap(fraction &b)
// {
//     float temp;
//     temp = b.num;
//     b.num = b.deno;
//     b.deno = temp;
// }

// fraction fraction::operator+(fraction &b)
// {
//     fraction temp;
//     temp.num = (num * b.deno) + (b.num * deno);
//     temp.deno = deno * b.deno;
//     lowterms();
//     return temp;
// }

// fraction fraction::operator*(fraction &b)
// {
//     fraction temp;
//     temp.num = (num * b.num);
//     temp.deno = deno * b.deno;
//     lowterms();
//     return temp;
// }

// fraction fraction::operator/(fraction &b)
// {
//     swap(b);
//     fraction temp;
//     if ((deno == 0) || (b.deno == 0))
//     {
//         cout << "Zero division error spotted";
//     }
//     else
//     {
//         temp.num = (num * b.num);
//         temp.deno = deno * b.deno;
//         lowterms();
//     }
//     return temp;
// }

// fraction fraction::operator-(fraction &b)
// {
//     num = (num * b.deno) - (b.num * deno);
//     deno = deno * b.deno;
//     lowterms();
//     cout << "The subtraction of the fraction is: " << num << "/" << deno;
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
//         }                   // swap them
//         tnum = tnum - tden; // subtract them
//     }
//     gcd = tden;        // this is greatest common divisor
//     num = num / gcd;   // divide both num and den by gcd
//     deno = deno / gcd; // to reduce frac to lowest terms
// }

// int main(void)
// {
//     fraction a1, a2, a3;
//     char b;
//     char y = 'y';
//     while (y == 'y')
//     {
//         cout << "Enter your the fractions and their operators: ";
//         a1.getfract();
//         cin >> b;
//         a2.getfract();
//         switch (b)
//         {
//         case '+':
//             a3 = a1 + a2;
//             a3.dispfract();
//             break;
//         case '-':
//             a3 = a1 - a2;
//             a3.dispfract();
//             break;
//         case '*':
//             a3 = a1 * a2;
//             break;
//         case '/':
//             a3 = a1 / a2;
//             a3.dispfract();
//             break;
//         default:
//             cout << "Invalid operator specified" << endl;
//             break;
//         }
//         cout << "\nDo you still want to perform anymore operations? ";
//         cin >> y;
//     }
//     return 0;
// }


