#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double height;
    static int count;

public:
    Rectangle(double length, double height);
    Rectangle();
    ~Rectangle();
    Rectangle(const Rectangle &rect);
    static int getCount();
};

int Rectangle::count = 0;

Rectangle::Rectangle(double len, double hgt) : length(len), height(hgt)
{
    count++;
}

Rectangle::Rectangle() : length(0.0), height(0.0)
{
    count++;
}

Rectangle::Rectangle(const Rectangle &rect) : length(rect.length), height(rect.height)
{
    count++;
}

Rectangle::~Rectangle()
{
    count--;
}

int Rectangle::getCount()
{
    return count;
}

int main(int argc, char const *argv[])
{
    {
        Rectangle rect1(3.2, 1.2);
        Rectangle rect2(1.5, 2.1);
        Rectangle rect3;
        Rectangle rect4(rect1);
        Rectangle rect5(rect2);
        cout << "Count of objects:" << rect5.getCount() << endl;
    }
    cout << "Count of objects:" << Rectangle::getCount();
    return 0;
}
