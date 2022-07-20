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







