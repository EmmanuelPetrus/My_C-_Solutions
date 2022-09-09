#include "StudentSchedule.h"

// StudentSchedule::StudentSchedule() : size(0)
// {
//     courseNames = new string[5];
// }

// StudentSchedule::~StudentSchedule() { delete[] courseNames; }

// void StudentSchedule::addCourse(string name)
// {
//     courseNames[size] = name;
//     size++;
// }

// void StudentSchedule::print() const
// {
//     cout << "List of Courses " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << courseNames[i] << endl;
//     }
//     cout << endl;
// }

// class First
// {
// private:
//     int a;

// public:
//     void set(int a);
//     void print() const;
// };
// Declaration of the class Second
// class Second : public First
// {
// private:
//     int b;

// public:
//     void set(int a, int b);
//     void print() const;
// };

// void Second::set(int c, int d)
// {
//     First::set(c);
//     b = d;
//     First::print();
// }

// class First
// {
// protected:
//     int a;

// public:
//     void set(int a);
//     void print() const;
// };

// class Second : public First
// {
// private:
//     int b;

// public:
//     void set(int a, int b);
//     void print() const;
// };

// void Second::set(int l, int m)
// {
//     b = m;
//     a = l;
// }

// class First
// {
// private:
//     int a;

// public:
//     First(int a);
//     void print() const;
// };
// // Definition of class Second
// class Second : public First
// {
// private:
//     int b;

// public:
//     Second(int a, int b);
//     void print() const;
// };
// // Definition of class Third
// class Third : public Second
// {
// private:
//     int c;

// public:
//     Third(int a, int b, int c);
//     void print() const;
// };

// First::First(int k) : a(k) {}

// Second::Second(int f, int g) : First(f), b(g) {}
// Third::Third(int j, int k, int l) : Second(j, k), c(l) {}

// class First
// {
// private:
//     int a;

// public:
//     First(int a);
//     void print() const;
// };

// class Second : public First
// {
// private:
//     int b;

// public:
//     Second(int a, int b);
//     void print() const;
// };

// class Third : public First
// {
// private:
//     int c;

// public:
//     Third(int a, int c);
//     void print() const;
// };

// First::First(int k) : a(k) {}
// Second::Second(int l, int m) : First(l), b(m) {}
// Third::Third(int p, int q) : First(p), c(q) {}

class First
{
private:
    int a;
    double b;

public:
    First(int a, double b);
    void print() const;
};

class Second
{
private:
    First f;
    char c;

public:
    Second(First f, char c);
    void print() const;
};

First::First(int c, double d) : a(c), b(d) {}
Second::Second(First b, char k) : f(b), c(k) {}