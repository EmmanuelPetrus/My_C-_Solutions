#include "Product.h"

Product::Product(string nm, double up) : name(nm), unitPrice(up)
{
}

Product::~Product()
{
}

double Product::getPrice() const
{
    return unitPrice;
}