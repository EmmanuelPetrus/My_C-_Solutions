#include <iostream>
using namespace std;
#include <msoftcon/msoftcon.cpp>
// class Base
// {

// public:
//     virtual void show() { cout << "Base\n"; }
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
//     void showed()
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

// class Shape
// {
// protected:
//     int xCo, yCo;
//     color fillcolor;
//     fstyle fillstyle;

// public:
//     Shape() : xCo(0), yCo(0), fillcolor(cWHITE), fillstyle(SOLID_FILL) {}
//     Shape(int x, int y, color fc, fstyle fs) : xCo(x), yCo(y), fillcolor(fc), fillstyle(fs) {}
//     virtual void draw()
//     {
//         set_color(fillcolor);
//         set_fill_style(fillstyle);
//     }
// };

// class Ball : public Shape
// {
// private:
//     int radius;

// public:
//     Ball() : Shape(), radius(0) {}
//     Ball(int x, int y, int r, color fc, fstyle fs) : Shape(x, y, fc, fs), radius(r) {}
//     void draw()
//     {
//         Shape::draw();
//         draw_circle(xCo, yCo, radius);
//     }
// };

// class Rect : public Shape
// {
// private:
//     int width, height;

// public:
//     Rect(int x, int y, int h, int w, color fc, fstyle fs) : Shape(x, y, fc, fs), height(h), width(w) {}
//     void draw()
//     {
//         Shape::draw();
//         draw_rectangle(xCo, yCo, xCo + width, yCo + height);
//         set_color(cWHITE);
//         draw_line(xCo, yCo, xCo + width, yCo + height);
//     }
// };

// class Tria : public Shape
// {
// private:
//     int height;

// public:
//     Tria() : Shape(), height(0) {}
//     Tria(int x, int y, int h, color fc, fstyle fs) : Shape(x, y, fc, fs), height(h) {}
//     void draw()
//     {
//         Shape::draw();
//         draw_pyramid(xCo, yCo, height);
//     }
// };

// int main(int argc, char const *argv[])
// {
//     int j;
//     init_graphics();

//     Shape *pShapes[3];

//     pShapes[0] = new Ball(40, 12, 5, cBLUE, X_FILL);
//     pShapes[1] = new Rect(12, 7, 10, 15, cRED, SOLID_FILL);
//     pShapes[2] = new Tria(60, 7, 11, cGREEN, MEDIUM_FILL);

//     for (j = 0; j < 3; j++)
//         pShapes[j]->draw();

//     for (j = 0; j < 3; j++)
//         delete pShapes[j];
//     set_cursor_pos(1, 25);
//     return 0;
// }

// Friend functions
// class Beta;
// class Alpha
// {
// private:
//     int data;

// public:
//     Alpha() : data(3) {}
//     friend int frifunc(Alpha, Beta);
// };

// class Beta
// {
// private:
//     int data;

// public:
//     Beta() : data(7) {}
//     friend int frifunc(Alpha, Beta);
// };

// int frifunc(Alpha a, Beta b)
// {
//     return (a.data + b.data);
// }

// int main(int argc, char const *argv[])
// {
//     Alpha aa;
//     Beta bb;
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
//     void showdist() { cout << feet << "\'-" << inches << '\"'; }
//     // Distance operator+(Distance);
//     friend Distance operator+(Distance d1, Distance d2)
//     {
//         int f = d1.feet + d2.feet;
//         float i = d1.inches + d2.inches;
//         if (i >= 12.0)
//         {
//             i -= 12.0;
//             f++;
//         }
//         return Distance(f, i);
//     }
// };

// Distance Distance::operator+(Distance d2)
// {
// int f = feet + d2.feet;
// float i = inches + d2.inches;
// if (i >= 12.0)
// {
//     i -= 12.0;
//     f++;
// }
// return Distance(f, i);
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
//     cout << "\nd3 = ";
//     d3.showdist();
//     return 0;
// }

// experimenting with a string class
// #include <cstring>
// class StrCount
// {
// private:
//     int count;
//     char *str;
//     friend class String;
//     StrCount(char *s)
//     {
//         int length = strlen(s);
//         str = new char[length + 1];
//         strcpy(str, s);
//         count = 1;
//     }
//     ~StrCount()
//     {
//         delete[] str;
//     }
// };

// class String
// {
// private:
//     StrCount *psc;
//     char k[5] = "NULL";

// public:
//     String() { psc = new StrCount(k); }
//     String(char *s)
//     {
//         psc = new StrCount(s);
//     }
//     String(String &S)
//     {
//         psc = S.psc;
//         (psc->count)++;
//     }
//     ~String()
//     {
//         if (psc->count == 1)
//             delete psc;
//         else
//             (psc->count)--;
//     }
//     void display()
//     {
//         cout << psc->str;
//         cout << " (addr=" << psc << ")";
//     }
//     void operator=(String &S)
//     {
//         if (psc->count == 1)
//             delete psc;
//         else
//             (psc->count)--;
//         psc = S.psc;
//         (psc->count)++;
//     }
// };

// int main()
// {
//     char m[] = "When the fox preaches, look to your geese.";
//     String s3(m);
//     cout << "\ns3=";
//     s3.display();

//     String s1;
//     s1 = s3;
//     cout << "\ns1=";
//     s1.display();
//     String s2(s3);
//     cout << "\ns2=";
//     s2.display();
//     cout << endl;
//     return 0;
// }

// class Where
// {
// private:
//     char charray[10];

// public:
//     void reveal()
//     {
//         cout << "\nMy object's address is " << this;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Where w1, w2, w3;
//     w1.reveal();
//     w2.reveal();
//     w3.reveal();
//     cout << endl;
//     return 0;
// }

// class What
// {
// private:
//     int alpha;

// public:
//     void tester()
//     {
//         this->alpha = 11;
//         cout << this->alpha;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     What w;
//     w.tester();
//     cout << endl;
//     return 0;
// }

// class Alpha
// {
// private:
//     int data;

// public:
//     Alpha() : data(0) {}
//     Alpha(int d) { data = d; }
//     void display()
//     {
//         cout << data;
//     }
//     Alpha &operator=(Alpha &a)
//     {
//         data = a.data;
//         cout << "\nAssignment operator invoked";
//         // return *this;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     Alpha a1(37);
//     Alpha a2, a3;

//     a3 = a2 = a1;
//     cout << "\na2=";
//     a2.display();
//     cout << "\na3=";
//     a3.display();
//     cout << endl;
//     return 0;
// }

class where
{
private:
    char charray[10];

public:
    void reveal()
    {
        cout << "\nMy object's address is " << this;
    }
};

int main(int argc, char const *argv[])
{
    where w1, w2, w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
    cout << endl;
    return 0;
}
