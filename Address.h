#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
class Address
{
private:
    int houseNo, zipCode;
    char *streetName, *cityName, *stateName;

public:
    Address(int house, char *street, char *city, char *state,int zip);
    ~Address();
    void getAddress();
};

#endif