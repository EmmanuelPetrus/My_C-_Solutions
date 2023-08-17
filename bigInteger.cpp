#include "BigInteger.h"
#include <iostream>
#include <string>
#include <iomanip>
BigInteger::BigInteger():lst(list<int>())
{

}



BigInteger::BigInteger(string str):lst(list <int>())
{
    for (int i = 0; i < str.length(); i++)
    {
        int num = str[i]-48;
        lst.push_back(num);
    }
    
}


BigInteger::~BigInteger()
{
}

string BigInteger::toString()
{
    string strg;
    list <int>::iterator iter;
    iter = lst.begin();
    while (iter != lst.end())
    {
        strg.append(1,*iter+48);
        iter++;
    }
    return strg;
}

BigInteger operator+(BigInteger first, BigInteger second)
{
    list <int> :: reverse_iterator iter1;
    list <int> :: reverse_iterator iter2;
    BigInteger result;
    int num1, num2, sum;
    int carry = 0;
    iter1 = first.lst.rbegin();
    iter2 = second.lst.rbegin();
    while ( (iter1 != first.lst.rend()) && (iter2 != second.lst.rend())) 
        {
            num1 = *iter1;
            num2 = *iter2;
            sum = (num1 + num2 + carry) % 10;
            carry = (num1 + num2 + carry) / 10;
            result.lst.push_front(sum);
            iter1++;
            iter2++;
        }
    while ( (iter1 != first.lst.rend())) 
        {
            num1 = *iter1;
            sum = (num1 + carry) % 10;
            carry = (num1 + carry) / 10;
            result.lst.push_front (sum);
            iter1++;
        }
    while ( (iter2 != second.lst.rend())) 
        {
            num2 = *iter2;
            sum = (num2 + carry) % 10;

        }
    carry = (num2 + carry) / 10;
    result.lst.push_front(sum);
    iter2++;

    if (carry == 1) 
    {
        result.lst.push_front(carry);
    }
    return result;

}