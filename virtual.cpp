#include <iostream>
using namespace std;

// class Base
// {
// public:
//     void show()
//     {
//         cout << "Base\n";
//     }
// };
// class Derv1 : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derv1\n";
//     }
// };
// class Derv2 : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derv2\n";
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Derv1 dv1;
//     Derv2 dv2;
//     Base *ptr;
//     ptr = &dv1;
//     ptr->show();
//     ptr = &dv2;
//     ptr->show();
//     return 0;
// }

// class Base
// {
// public:
//     virtual void show()
//     {
//         cout << "Base\n";
//     }
// };
// class Derv1 : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derv1\n";
//     }
// };
// class Derv2 : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derv2\n";
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Derv1 dv1;
//     Derv2 dv2;
//     Base *ptr;
//     ptr = &dv1;
//     ptr->show();
//     ptr = &dv2;
//     ptr->show();
//     return 0;
// }

// class Base
// {
// public:
//     virtual void show() = 0;
// };
// class Derv1 : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derv1\n";
//     }
// };
// class Derv2 : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derv2\n";
//     }
// };

// int main(int argc, char const *argv[])
// {
//     // Base bad;
//     Base *arr[2];
//     Derv1 dv1;
//     Derv2 dv2;
//     arr[0] = &dv1;
//     arr[1] = &dv2;

//     arr[0]->show();
//     arr[1]->show();
//     return 0;
// }

// class Person
// {
// protected:
//     char name[40];

// public:
//     void getName()
//     {
//         cout << "   Enter name: ";
//         cin >> name;
//     }
//     void putName()
//     {
//         cout << "Name is: " << name << endl;
//     }
//     virtual void getData() = 0;
//     virtual bool isOutstanding() = 0;
// };

// class Student : public Person
// {
// private:
//     float gpa;

// public:
//     void getData()
//     {
//         Person::getName();
//         cout << "   Enter student's GPA: ";
//         cin >> gpa;
//     }
//     bool isOutstanding()
//     {
//         return (gpa > 3.5) ? true : false;
//     }
// };

// class Professor : public Person
// {
// private:
//     int numPubs;

// public:
//     void getData()
//     {
//         Person::getName();
//         cout << "  Enter number of Professor's publications: ";
//         cin >> numPubs;
//     }
//     bool isOutstanding()
//     {
//         return (numPubs > 100) ? true : false;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Person *persPtr[7];
//     int n = 0;
//     char choice;
//     do
//     {
//         cout << "Enter the student or professor (s/p): ";
//         cin >> choice;
//         if (choice == 's')
//             persPtr[n] = new Student;
//         else
//             persPtr[n] = new Professor;
//         persPtr[n++]->getData();
//         cout << "   Enter another (y/n)? ";
//         cin >> choice;
//     } while (choice == 'y');

//     for (int i = 0; i < n; i++)
//     {
//         persPtr[i]->putName();
//         if (persPtr[i]->isOutstanding())
//         {
//             cout << "   This person is outstanding\n";
//         }
//     }

//     return 0;
// }

// Virtual destructors

// class Base
// {
// public:
//     // ~Base();
//     virtual ~Base()
//     {
//         cout << "Base destroyed\n";
//     }
// };

// class Derv : public Base
// {
// public:
//     ~Derv()
//     {
//         cout << "Derv destroyed\n";
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Base *pBase = new Derv;
//     delete pBase;
//     return 0;
// }

// Friend functions
// class beta;

// class alpha
// {
// private:
//     int data;

// public:
//     alpha() : data(3) {}
//     friend int frifunc(alpha, beta);
// };

// class beta
// {
// private:
//     int data;

// public:
//     beta() : data(7) {}
//     friend int frifunc(alpha, beta);
// };

// int frifunc(alpha a, beta b)
// {
//     return (a.data + b.data);
// }

// int main(int argc, char const *argv[])
// {
//     alpha aa;
//     beta bb;

//     cout << frifunc(aa, bb) << endl;
//     return 0;
// }

// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0) {}
//     Distance(float fltfeet)
//     {
//         feet = static_cast<int>(fltfeet);
//         inches = 12 * (fltfeet - feet);
//     }
//     Distance(int ft, float in)
//     {
//         feet = ft;
//         inches = in;
//     }
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     Distance operator+(Distance);
// };

// Distance Distance::operator+(Distance d2)
// {
//     int f = feet + d2.feet;
//     float i = inches + d2.inches;
//     if (i >= 12.0)
//     {
//         i -= 12.0;
//         f++;
//     }
//     return Distance(f, i);
// }

// int main(int argc, char const *argv[])
// {
//     Distance d1 = 2.5;
//     Distance d2 = 1.25;
//     Distance d3;
//     cout << "\nd1 = ";
//     d1.showdist();
//     cout << "\nd2 = ";
//     d2.showdist();

//     d3 = d1 + 10.0;
//     cout << "\nd3 = ";
//     d3.showdist();
//     d3 = 10.0 + d1;
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
//     Distance(float fltfeet)
//     {
//         feet = static_cast<int>(fltfeet);
//         inches = 12 * (fltfeet - feet);
//     }
//     Distance(int ft, float in)
//     {
//         feet = ft;
//         inches = in;
//     }
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     friend Distance operator+(Distance, Distance);
// };

// Distance operator+(Distance d2, Distance d1)
// {
//     int f = d1.feet + d2.feet;
//     float i = d1.feet + d2.inches;
//     if (i >= 12.0)
//     {
//         i -= 12.0;
//         f++;
//     }
//     return Distance(f, i);
// }

// int main(int argc, char const *argv[])
// {
//     Distance d1 = 2.5;
//     Distance d2 = 1.25;
//     Distance d3;
//     cout << "\nd1 = ";
//     d1.showdist();
//     cout << "\nd2 = ";
//     d2.showdist();

//     d3 = d1 + 10.0;
//     cout << "\nd3 = ";
//     d3.showdist();
//     d3 = 10.0 + d1;
//     cout << "\nd3 = " ;
//     d3.showdist();
//     cout << endl;
//     return 0;
// }

// friends for functional notation

// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0) {}
//     Distance(float fltfeet)
//     {
//         feet = static_cast<int>(fltfeet);
//         inches = 12 * (fltfeet - feet);
//     }
//     Distance(int ft, float in)
//     {
//         feet = ft;
//         inches = in;
//     }
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     friend float square(Distance);
// };

// float square(Distance d)
// {
//     float fltfeet = d.feet + d.inches / 12;
//     float feetsqrd = fltfeet * fltfeet;
//     return feetsqrd;
// }

// int main(int argc, char const *argv[])
// {
//     Distance dist(3, 6.0);
//     float sqft;

//     sqft = square(dist);
//     cout << "\nDistance = ";
//     dist.showdist();
//     cout << "\nSquare = " << sqft << " square feet\n";
//     return 0;
// }

// class alpha
// {
// private:
//     int data1;

// public:
//     alpha() : data1(99) {}
//     friend class beta;
// };
// class beta
// {
// public:
//     void func1(alpha a) { cout << "\ndata1=" << a.data1; }
//     void func2(alpha a) { cout << "\ndata1=" << a.data1; }
// };

// int main(int argc, char const *argv[])
// {
//     alpha a;
//     beta b;

//     b.func1(a);
//     b.func2(a);
//     cout << endl;
//     return 0;
// }

// Static Functions
// class gamma
// {
// private:
//     static int total;
//     int id;

// public:
//     gamma()
//     {
//         total++;
//         id = total;
//     }
//     ~gamma()
//     {
//         total--;
//         cout << "Destroying ID number " << id << endl;
//     }
//     static void showtotal()
//     {
//         cout << "Total is " << total << endl;
//     }
//     void showid()
//     {
//         cout << "ID number is " << id << endl;
//     }
// };

// int gamma::total = 0;

// int main(int argc, char const *argv[])
// {
//     gamma g1;
//     gamma::showtotal();

//     gamma g2, g3;
//     gamma::showtotal();

//     g1.showid();
//     g2.showid();
//     g3.showid();
//     cout << "---------------end of program-------------\n";
//     return 0;
// }

class alpha
{
private:
    int data;

public:
    alpha() {}
    alpha(int d) { data = d; }
    void display() { cout << data; }
    alpha operator=(alpha &a)
    {
        data = a.data;
        cout << "\nAssignment operator invoked";
        return alpha(data);
    }
};

int main(int argc, char const *argv[])
{
    alpha a1(37);
    alpha a2;
    a2 = a1;
    cout << "\na2=";
    a2.display();
    alpha a3 = a2;
    cout << "\na3=";
    a3.display();
    cout << endl;
    return 0;
}
