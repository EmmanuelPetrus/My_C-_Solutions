#include <iostream>
#include <process.h>
using namespace std;

// class Counter
// {
// protected:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     Counter(int c) : count(c) {}
//     unsigned int get_count() const { return count; }
//     Counter operator++() { return Counter(++count); }
// };

// class CountDn : public Counter
// {
// public:
//     Counter operator--()
//     {
//         return Counter(--count);
//     }
// };

// int main(int argc, char const *argv[])
// {
//     CountDn c1;

//     cout << "\nc1=" << c1.get_count();

//     ++c1;
//     ++c1;
//     ++c1;

//     cout << "\nc1=" << c1.get_count();

//     --c1;
//     --c1;
//     --c1;
//     cout << "\nc1=" << c1.get_count();
//     cout << endl;
//     return 0;
// }

// class Stack
// {
// protected:
//     enum
//     {
//         MAX = 3
//     };
//     int st[MAX];
//     int top;

// public:
//     Stack() { top = -1; }
//     void push(int var) { st[++top] = var; }
//     int pop() { return st[top--]; }
// };

// class Stack2 : public Stack
// {
// public:
//     void push(int var)
//     {
//         if (top >= MAX - 1)
//         {
//             cout << "\nError:stack is full";
//             exit(1);
//         }
//         Stack::push(var);
//     }
//     int pop()
//     {
//         if (top < 0)
//         {
//             cout << "\nError: stack is empty\n";
//             exit(1);
//         }
//         return Stack::pop();
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Stack2 s1;

//     s1.push(11);
//     s1.push(22);
//     s1.push(28);

//     cout << endl
//          << s1.pop();
//     cout << endl
//          << s1.pop();
//     cout << endl
//          << s1.pop();
//     cout << endl
//          << s1.pop();
//     cout << endl;
//     return 0;
// }

// enum posneg
// {
//     pos,
//     neg
// };
// class Distance
// {
// protected:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0) {}
//     Distance(int ft, float in) : feet(ft), inches(in) {}
//     void getdist()
//     {
//         cout << "\nEnter feet: ";
//         cin >> feet;
//         cout << "Enter inches: ";
//         cin >> inches;
//     }
//     void showdist() const
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
// };

// class DistSign : public Distance
// {
// private:
//     posneg sign;

// public:
//     DistSign() : Distance() { sign = pos; }
//     DistSign(int ft, float in, posneg sg = pos) : Distance(ft, in) { sign = sg; }
//     void getdist()
//     {
//         Distance::getdist();
//         char ch;
//         cout << "Enter sign (+ or -): ";
//         cin >> ch;
//         sign = (ch == '+') ? pos : neg;
//     }
//     void showdist() const // display distance
//     {
//         cout << ((sign == pos) ? "(+)" : "(-)"); // show sign
//         Distance::showdist();                    // ft and in
//     }
// };

// int main(int argc, char const *argv[])
// {
//     DistSign alpha;
//     alpha.getdist();

//     DistSign beta(11, 6.25);
//     DistSign gamma(100, 5.5, neg);

//     cout << "\nalpha = ";
//     alpha.showdist();
//     cout << "\nbeta = ";
//     beta.showdist();
//     cout << "\ngamma = ";
//     gamma.showdist();
//     cout << endl;
//     return 0;
// }

// Employee class modelling
// const int LEN = 80;
// class employee
// {
// private:
//     char name[LEN];
//     unsigned long number;

// public:
//     void getdata()
//     {
//         cout << "\n Enter last name: ";
//         cin >> name;
//         cout << " Enter number: ";
//         cin >> number;
//     }
//     void putdata() const
//     {
//         cout << "\n  Name: " << name;
//         cout << "\n   Number: " << number;
//     }
// };

// class Manager : public employee
// {
// private:
//     char title[LEN];
//     double dues;

// public:
//     void getdata()
//     {
//         employee::getdata();
//         cout << " Enter title : ";
//         cin >> title;
//         cout << " Enter golf club dues : ";
//         cin >> dues;
//     }
//     void putdata() const
//     {
//         employee::putdata();
//         cout << "\n Title: " << title;
//         cout << " \n Golf club dues : " << dues;
//     }
// };

// class Scientist : public employee
// {
// private:
//     int pubs; // number of publications
// public:
//     void getdata()
//     {
//         employee::getdata();
//         cout << " Enter number of pubs : ";
//         cin >> pubs;
//     }
//     void putdata() const
//     {
//         employee::putdata();
//         cout << "\n Number of publications : " << pubs;
//     }
// };

// class Laborer : public employee
// {
// };

// int main()
// {
//     Manager m1, m2;
//     Scientist s1;
//     Laborer l1;
//     cout << endl; // get data for several employees
//     cout << "\nEnter data for manager 1";
//     m1.getdata();
//     cout << "\nEnter data for manager 2";
//     m2.getdata();
//     cout << "\nEnter data for scientist 1";
//     s1.getdata();
//     cout << "\nEnter data for laborer 1";
//     l1.getdata();
//     // display data for several employees
//     cout << "\nData on manager 1";
//     m1.putdata();
//     cout << "\nData on manager 2";
//     m2.putdata();
//     cout << "\nData on scientist 1";
//     s1.putdata();
//     cout << "\nData on laborer 1";
//     l1.putdata();
//     cout << endl;
//     return 0;
// }

