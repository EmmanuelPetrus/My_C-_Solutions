#include <iostream>
using namespace std;

// class smallobj
// {
// private:
//     int somedata;

// public:
//     void setdata(int d)
//     {
//         somedata = d;
//     }
//     void showdata()
//     {
//         cout << "Data is " << somedata << endl;
//     }
// };

// int main(void)
// {
//     smallobj s1, s2;
//     s1.setdata(1066);
//     s2.setdata(1776);

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

// int main(void)
// {
//     part part1;
//     part1.setpart(6244, 373, 217.55F);
//     part1.showpart();
//     return 0;
// }
// class Distance
// {

// private:
//     int feet;
//     float inches;

// public:
// Distance():feet(0),inches(0.0){}
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

// int main(void)
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

// A counter program
// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) // constructor
//     {
//         cout << "I'm the constructor\n";
//     }
//     void inc_count()
//     {
//         count++;
//     }
//     int get_count()
//     {
//         return count;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     Counter c1, c2;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();

//     c1.inc_count();
//     c2.inc_count();
//     c2.inc_count();

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();
//     return 0;
// }

// class Foo
// {
// private:
//     int data;

// public:
//     Foo() : data(0)
//     {}
//     -Foo() {}
// };

// Objects as function arguments

// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0) // constructor with no arguement
//     {
//         }
//     Distance(int ft, float in) : feet(ft), inches(in) {} // constructor with two arguments
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
//     inches = d2.inches + d3.inches; // add the inches
//     feet = 0;                       //(for possible carry)
//     if (inches >= 12.0)             // if total exceeds 12.0,
//     {                               // then decrease inches
//         inches -= 12.0;             // by 12.0 and
//         feet++;                     // increase feet
//     }                               // by 1
//     feet += d2.feet + d3.feet;      // add the feet
// }

// int main(void)
// {
//     Distance dist1, dist3;
//     Distance dist2(11, 6.25);

//     dist1.getdist();
//     dist3.add_dist(dist1, dist2);

//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();
//     cout << "\ndist3 = ";
//     dist3.showdist();
//     return 0;
// }

// The Default Copy Constructor
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

// int main(void)
// {
//     Distance dist1(11, 6.25); // two-arg constructor
//     Distance dist2(dist1);    // one-arg constructor
//     Distance dist3 = dist1;   // also one-arg constructor

//     // display all lengths
//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << "\ndist2 = ";
//     dist2.showdist();
//     cout << "\ndist3 = ";
//     dist3.showdist();
//     cout << endl;
//     return 0;
// }

// Returning objects from functions

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}
    void getdist()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showdist()
    {
        cout << feet << "\'-" << inches << '\"';
    }
    Distance add_dist(Distance);
};

Distance Distance::add_dist(Distance d2)
{
    Distance temp;
    temp.inches = inches + d2.inches;
    if (temp.inches >= 12.0)
    {
        temp.inches -= 12.0;
        temp.feet = 1;
    }
    temp.feet += feet + d2.feet;
    return temp;
}

int main(void)
{
    Distance dist1, dist3;
    Distance dist2(11, 6.25);

    dist1.getdist();
    dist3 = dist1.add_dist(dist2);

    cout << "\ndist1 = ";
    dist1.showdist();
    cout << "\ndist2 = ";
    dist2.showdist();
    cout << "\ndist3 = ";
    dist3.showdist();
    cout << endl;
    return 0;
}
