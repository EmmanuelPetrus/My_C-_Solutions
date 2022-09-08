#ifndef CUSTOM_H
#define CUSTOM_H
#include <iostream>
#include <string>
using namespace std;

void pushFront(string &strg, char c)
{
    string temp(1, c);
    strg.insert(0, temp);
}
void pushBack(string &strg, char c)
{
    string temp(1, c);
    strg.append(temp);
}
char popFront(string &strg)
{
    int index = 0;
    char temp = strg[index];
    strg.erase(index, 1);
    return temp;
}
char popBack(string &strg)
{
    int index = strg.size() - 1;
    char temp = strg[index];
    strg.erase(index, 1);
    return temp;
}
#endif