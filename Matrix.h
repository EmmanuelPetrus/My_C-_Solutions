#include <iostream>
#ifndef MATRIX_H
#define MATRIX_H
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cassert>
using namespace std;

class Matrix
{
private:
    int rowSize;
    int colSize;
    int **ptr;

public:
    Matrix(int rowSize, int colSize);
    ~Matrix();
    void setup();
    void add(const Matrix &second, Matrix &result) const;
    void subtract(const Matrix &second, Matrix &result) const;
    void multiply(const Matrix &second, Matrix &result) const;
    void print() const;
};

#endif