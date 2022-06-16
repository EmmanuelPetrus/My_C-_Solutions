#include <iostream>
#include <conio.h>
using namespace std;

// class smallobj
// {
// private:
//     int somedata;

// public:
//     smallobj() : somedata(0){}
//     void setdata(int d)
//     {
//         somedata = d;
//     }
//     void showdata()
//     {
//         std::cout << "Data is " << somedata << std::endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     smallobj s1, s2;

//     // s1.setdata(1066);
//     // s2.setdata(1776);

//     s1.showdata();
//     s2.showdata();
//     return 0;
// }

// class part
// {
// private:
//     int modelnumber;
//     int partnumber;
//     float cost;

// public:
//     void setpart(int mn, int pn, float c)
//     {
//         modelnumber = mn;
//         partnumber = pn;
//         cost = c;
//     }
//     void showpart()
//     {
//         cout << "Model " << modelnumber;
//         cout << ", part " << partnumber;
//         cout << ", costs $" << cost << endl;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     part part1;

//     part1.setpart(6244, 373, 217.55f);
//     part1.showpart();
//     return 0;
// }

// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     void setdist(int ft, float in)
//     {
//         feet = ft;
//         inches = in;
//     }
//     void getdist()
//     {
//         cout << "\nEnter feet: ";
//         cin >> feet;
//         cout << "Enter inches: ";
//         cin >> inches;
//     }
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Distance dist1, dist2;

//     dist1.setdist(11, 6.25);
//     dist2.getdist();

//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();
//     cout << endl;
//     return 0;
// }

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) { cout << "I'm the constructor\n"; }
//     void inc_count() { count++; }
//     int get_count() { return count; }
// };

// int main(int argc, char const *argv[])
// {
//     Counter c1, c2;

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();

//     c1.inc_count();
//     c2.inc_count();
//     c2.inc_count();
//     c2.inc_count();

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();
//     cout << endl;
//     return 0;
// }

// class Foo
// {
// private:
//     int data;

// public:
//     Foo() : data(0) {}
//     ~Foo() {}
// };

// class Distance
// {
// private:
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
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     void add_dist(Distance, Distance);
// };

// void Distance::add_dist(Distance d2, Distance d3)
// {
//     inches = d2.inches + d3.inches;
//     feet = 0;
//     if (inches >= 12.0)
//     {
//         inches -= 12.0;
//         feet++;
//     }
//     feet += d2.feet + d3.feet;
// }

// int main(int argc, char const *argv[])
// {
//     Distance dist1, dist2(11, 6.25), dist3;

//     dist1.getdist();
//     dist3.add_dist(dist1,dist2);

//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();
//     cout << "\ndist3 = ";
//     dist3.showdist();
//     cout << endl;
//     return 0;
// }

// class Distance
// {
// private:
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
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
// };

// int main(int argc, char const *argv[])
// {

//     Distance dist1(16, 6.25);
//     Distance dist2(dist1);  // one-arg constructor
//     Distance dist3 = dist1; // also one-arg constructor
//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();
//     cout << "\ndist3 = ";
//     dist3.showdist();
//     cout << endl;
//     return 0;
// }

// class Distance
// {
// private:
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
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     Distance add_dist(Distance);
// };

// Distance Distance::add_dist(Distance d2)
// {
//     Distance temp;
//     temp.inches = inches + d2.inches;
//     if (temp.inches >= 12.0)
//     {
//         temp.inches -= 12.0;
//         temp.feet = 1;
//     }
//     temp.feet += feet + d2.feet;
//     return temp;
// }
// int main(int argc, char const *argv[])
// {

//     Distance dist1, dist3; // one-arg constructor
//     Distance dist2(16, 6.25);

//     dist1.getdist();
//     dist3 = dist1.add_dist(dist2); // also one-arg constructor
//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();
//     cout << "\ndist3 = ";
//     dist3.showdist();
//     cout << endl;
//     return 0;
// }

// class foo
// {
// private:
//     int data1;

// public:
//     void func();
// };

// struct foo
// {
//     void func();

// private:
//     int data1;
// };

// class foo
// {
// private:
//     static int count;

// public:
//     foo() { count++; }
//     int getcount()
//     {
//         return count;
//     }
// };

// int foo::count = 0;

// int main(int argc, char const *argv[])
// {
//     foo f1, f2, f3;

//     cout << "count is " << f1.getcount() << endl; // each object
//     cout << "count is " << f2.getcount() << endl; // sees the
//     cout << "count is " << f3.getcount() << endl; // same value
//     return 0;
// }

// class aClass
// {
// private:
//     int alpha;

// public:
//     void nonFunc() { alpha = 99; } // non const member function
//     void conFunc() const { alpha = 99; }
// };

// class Distance
// {
// private:
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
//     Distance add_dist(const Distance &) const;
// };

// Distance Distance::add_dist(const Distance &d2) const
// {
//     Distance temp;
//     temp.inches = inches + d2.inches;
//     if (temp.inches >= 12.0)
//     {
//         temp.inches -= 12.0;
//         temp.feet = 1;
//     }
//     temp.feet += feet + d2.feet;
//     return temp;
// }
// int main(int argc, char const *argv[])
// {

//     Distance dist1, dist3; // one-arg constructor
//     Distance dist2(16, 6.25);

//     dist1.getdist();
//     dist3 = dist1.add_dist(dist2); // also one-arg constructor
//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();
//     cout << "\ndist3 = ";
//     dist3.showdist();
//     cout << endl;
//     return 0;
// }

// class Distance // English Distance class
// {
// private:
//     int feet;
//     float inches;

// public: // 2-arg constructor
//     Distance(int ft, float in) : feet(ft), inches(in)
//     {
//     }
//     void getdist() // user input; non-const func
//     {
//         cout << "\nEnter feet: ";
//         cin >> feet;
//         cout << "Enter inches: ";
//         cin >> inches;
//     }
//     void showdist() const // display distance; const func
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
// };

// int main()
// {
//     const Distance football(300, 0);
//     // football.getdist(); //ERROR: getdist() not const
//     cout << "football = ";
//     football.showdist(); // OK
//     cout << endl;
//     return 0;
// }