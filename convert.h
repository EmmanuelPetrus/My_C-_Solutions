#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
string toString(T data)
{
    ostringstream oss("");
    oss << data;
    return oss.str();
}

template <typename T>
T toData(string strg)
{
    T data;
    istringstream iss(strg);
    iss >> data;
    return data;
}
#endif