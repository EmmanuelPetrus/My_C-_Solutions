#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#include <cmath>

// class Int
// {
// private:
//     int a;

// public:
//     Int() : a(0) {}
//     Int(int b) : a(b) {}
//     // ~Int();
//     void addInt(Int);
//     int getdist() { return a; }
// };

// void Int::addInt(const Int d)
// {
//     a += d.a;
// }

// int main(int argc, char const *argv[])
// {
//     Int f1(6);
//     Int f2(5);

//     f1.addInt(f2);
//     cout << "The sum of the numbers is " << f1.getdist();
// }

// Function to calculate number of cars passing a tollbooth
// class tollBooth
// {
// private:
//     unsigned int total_num;
//     double total_money;

// public:
//     tollBooth() : total_num(0), total_money(0){};
//     void payingCar()
//     {
//         total_num++;
//         total_money += 0.5;
//     }
//     void nopayCar() { total_num++; }
//     void display()
//     {
//         cout << "Total number of cars is " << total_num << endl;
//         cout << "Total amount of money is $" << total_money << endl;
//     };
// };

// int main(int argc, char const *argv[])
// {
//     tollBooth car1;
//     char m, res = 'y';
//     while (res == 'y')
//     {
//         cout << "Kindly enter a key for a car (a-paying,b-nopay and d to display): " ;
//         cin >> m;
//         switch (m)
//         {
//         case 'a':
//             car1.payingCar();
//             break;
//         case 'b':
//             car1.nopayCar();
//             break;
//         case 'd':
//             car1.display();
//             break;
//         default:
//             cout << "No car of such category!!\n" ;
//             break;
//         }
//         cout << "Are cars still passing(y or n)? " ;
//         cin >> res;
//         cout<<"Thanks so much for your response";
//     }

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
//     void display()
//     {
//         cout << hours << ":" << minutes << ":" << seconds << endl;
//     }
//     time addtime(const time &) const;
// };
// time time::addtime(const time &b) const
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
//     t3 = t1.addtime(t2);
//     t3.display();
//     return 0;
// }

// class Employee
// {
// private:
//     int number;
//     float salary;
//     char name[18];

// public:
//     Employee() : number(0), salary(0.0), name("empty") {}
//     void getEmployee()
//     {
//         cout << "Kindly enter your phone number: ";
//         cin >> number;
//         cout << "What do you think your salary worths: ";
//         cin >> salary;
//         cout << "Kindly enter your name: ";
//         cin >> name;
//     }
//     void display()
//     {
//         cout << "The Employee's name is " << name << endl;
//         cout << "\nThe Employee's salary is " << salary << endl;
//         cout << "\nThe Employee's phone number is " << number;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     Employee E1, E2, E3;
//     E1.getEmployee();
//     E2.getEmployee();
//     E1.display();
//     E2.display();
//     return 0;
// }

// class Date
// {
// private:
//     int month;
//     int day;
//     int year;

// public:
//     Date() : month(0), day(0), year(0) {}
//     void getdate(int a, int b, int c)
//     {
//         month = c;
//         day = b;
//         year = a;
//     }
//     void showdate()
//     {
//         cout << year << "/" << day << "/" << month;
//     }
//     // ~Date();
// };

// int main(int argc, char const *argv[])
// {
//     Date d1;
//     d1.getdate(12, 31, 02);
//     d1.showdate();
//     return 0;
// }
// enum etype
//     {
//         laborer = 1,
//         secretary,
//         manager,
//         receptionist,
//         marketer
//     };
// class Employee
// {
// private:
//     int month;
//     int day;
//     int year;
//     int number;
//     float salary;
//     etype positions;
//     char name[18];
//     char post[15];

// public:
//     Employee() : month(0), day(0), year(0), number(0), salary(0.0), name("empty"), post("empty") {}

//     void getEmployee()
//     {
//         int k = 0;
//         cout << "Kindly enter your phone number: ";
//         cin >> number;
//         cout << "What do you think your salary worths: ";
//         cin >> salary;
//         cout << "Kindly enter your name: ";
//         cin >> name;
//         cout << "What is your post laborer(1), secretary(2), manager(3), receptionist(4) or marketer(5)? ";
//         cin >> k;
//         switch (k)
//         {
//         case laborer:
//             strcpy(post, "Laborer");
//             break;
//         case secretary:
//             strcpy(post, "Secretary");
//             break;
//         case marketer:
//             strcpy(post, "Marketer");
//             break;
//         case manager:
//             strcpy(post, "Manager");
//             break;
//         case receptionist:
//             strcpy(post, "Receptionist");
//             break;
//         default:
//             break;
//         }
//     }
//     void display()
//     {
//         cout << "The Employee's name is " << name << endl;
//         cout << "\nThe Employee's salary is " << salary << endl;
//         cout << "\nThe Employee's phone number is " << number;
//         cout << "\nThe Employee's position is " << post;
//         cout << name << "\n's date of birth is " << year << "/" << day << "/" << month;
//     }
//     void getdate(int a, int b, int c)
//     {
//         month = c;
//         day = b;
//         year = a;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Employee d1;
//     d1.getEmployee();
//     d1.getdate(12, 31, 02);
//     d1.display();
//     return 0;
// }

// class Angle
// {
// private:
//     int degrees1, degrees2;
//     float minute1, minute2;
//     char direction1, direction2;

// public:
//     Angle() : degrees1(0), degrees2(0), minute1(0.0), minute2(0.0), direction1('n'), direction2('n') {}
//     Angle(int deg1, float min1, char dir1, int deg2, float min2, char dir2) : degrees1(deg1), degrees2(deg2), minute1(min1), minute2(min2), direction1(dir1), direction2(dir2) {}
//     void getlongitude()
//     {
//         cout<<"\nEnter the latitude\n";
//         cout << "Enter degrees: ";
//         cin >> degrees1;
//         cout << "Enter minutes: ";
//         cin >> minute1;
//         cout << "Enter the direction (N,S,E,W): ";
//         cin >> direction1;
//     }
//     void getlatitude()
//     {
//         cout<<"\nEnter the latitude\n";
//         cout << "Enter degrees: ";
//         cin >> degrees2;
//         cout << "Enter minutes: ";
//         cin >> minute2;
// cout << "Enter the direction (N,S,E,W): ";
//         cin >> direction2;
//     }
//     void displaylat()
//     {
//         cout << "\nLatitude: " << degrees1 << '\xF8' << minute1 << "'" << direction1;
//     }
//     void displaylong()
//     {
//         cout << "\nLongitude: " << degrees2 << '\xF8' << minute2 << "'" << direction2;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Angle a1;
//     char k = 'y';
//     while (k == 'y')
//     {
//         a1.getlatitude();
//         a1.getlongitude();
//         a1.displaylat();
//         a1.displaylong();
//         cout << "\nDo you still want to enter coordinates for both long and lat? ";
//         cin >> k;
//     }

//     return 0;
// }

// class Serial_Holder
// {
// private:
//     static int count;
//     int m;

// public:
//     Serial_Holder()
//     {
//         m = count++;
//     };
//     void display()
//     {
//         cout << "I am object number " << m<<endl;
//     }
// };
// int Serial_Holder::count = 0;
// int main(int argc, char const *argv[])
// {
//     Serial_Holder holder1, holder2, holder3;
//     holder1.display();
//     holder2.display();
//     holder3.display();
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
//     void fadd(fraction &b);
//     void swap(fraction &b);
//     void fmul(fraction &b);
//     void fdiv(fraction &b);
//     void fsub(fraction &b);
//     void lowterms();
// };
// void fraction::swap(fraction &b)
// {
//     float temp;
//     temp = b.num;
//     b.num = b.deno;
//     b.deno = temp;
// }

// void fraction::fadd(fraction &b)
// {

//     num = (num * b.deno) + (b.num * deno);
//     deno = deno * b.deno;
//     lowterms();
//     cout << "The addition of the fraction is: " << num << "/" << deno;
// }

// void fraction::fmul(fraction &b)
// {
//     num = (num * b.num);
//     deno = deno * b.deno;
//     lowterms();
//     cout << "The multiplication of the fraction is: " << num << "/" << deno;
// }

// void fraction::fdiv(fraction &b)
// {
//     swap(b);
//     if ((deno == 0) || (b.deno == 0))
// {
//         cout << "Zero division error spotted";
//     }
//     else
//     {
//         num = (num * b.num);
//         deno = deno * b.deno;
//         lowterms();
//         cout << "The division of the fraction is: " << num << "/" << deno;
//     }
// }

// void fraction::fsub(fraction &b)
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
//     return;
// }
// this 'while' loop finds the gcd of tnum and tden
// while (tnum != 0)
// {
//     if (tnum < tden) // ensure numerator larger
//     {
//         temp = tnum;
//         tnum = tden;
//         tden = temp;
//     }                   // swap them
//     tnum = tnum - tden; // subtract them
// }
// gcd = tden;        // this is greatest common divisor
// num = num / gcd;   // divide both num and den by gcd
// deno = deno / gcd; // to reduce frac to lowest terms
// }
// int main(void)
// {
//     fraction a1, a2;
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
//             a1.fadd(a2);
//             break;
//         case '-':
//             a1.fsub(a2);
//             break;
//         case '*':
//             a1.fmul(a2);
//             break;
//         case '/':
//             a1.fdiv(a2);
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

class fraction
{
private:
    float num;
    char op;
    float deno;

public:
    fraction() : num(0.0), op('/'), deno(0.0) {}
    fraction(float a, float den) : num(a), op('/'), deno(den) {}
    void lowterms();
    void dispfrac()
    {
        lowterms();
        cout << "      " << num << "/" << deno << endl;
    }
    void dispfrac2()
    {
        lowterms();
        cout << num << "/" << deno << "  ";
    }
    void dispfrac3()
    {
        lowterms();
        cout << " " << num << "/" << deno << endl;
    }
    fraction fmul(fraction &b);
};

fraction fraction::fmul(fraction &b)
{
    fraction c;
    c.num = num * b.num;
    c.deno = deno * b.deno;
    return c;
}

void fraction::lowterms() // change ourself to lowest terms
{
    long tnum, tden, temp, gcd;
    tnum = labs(num);  // use non-negative copies
    tden = labs(deno); // (needs cmath)
    if (tden == 0)     // check for n/0
    {
        cout << "Illegal fraction : division by 0";
        exit(1);
    }
    else if (tnum == 0) // check for 0/n
    {
        num = 0;
        deno = 1;
        return;
    }
    // this 'while' loop finds the gcd of tnum and tden
    while (tnum != 0)
    {
        if (tnum < tden) // ensure numerator larger
        {
            temp = tnum;
            tnum = tden;
            tden = temp;
        }                   // swap them
        tnum = tnum - tden; // subtract them
    }
    gcd = tden;        // this is greatest common divisor
    num = num / gcd;   // divide both num and den by gcd
    deno = deno / gcd; // to reduce frac to lowest terms
}
int main(void)
{
    int b;
    cout << "Kindly enter a denominator: ";
    cin >> b;
    fraction k;
    for (int i = 1; i < 6; i++)
    {
        fraction a1(i, b);
        a1.dispfrac();
        cout << "--------------" << endl;
        for (int i = 1; i < 6; i++)
        {
            fraction a2(i, b);
            a2.dispfrac2();
            k = a1.fmul(a2);
            k.dispfrac3();
        }
    }
}
