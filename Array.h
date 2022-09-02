#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;
class Array
{
private:
    int capacity;
    int size;
    int *arr;

public:
    Array(int a, int b);
    Array(const Array &c);
    ~Array();
    void insert();
    void print();
    void sort();
};

#endif