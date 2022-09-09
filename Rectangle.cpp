#include "Rectangle.h"

Rectangle::Rectangle(int len, int wid) : length(len), width(wid) {}
int Rectangle::area()
{
    return (length * width);
}
int Rectangle::peri()
{
    return (2 * (length + width));
}
int Rectangle::getlen()
{
    return length;
}
int Rectangle::getwid()
{
    return width;
}
Rectangle::~Rectangle() {}