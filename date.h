#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

    static const int startWeekDay;
    static const int startYear;
    static const int daysInMonths[];
    static const string daysOfWeek[];
    static const string monthsOfYear[];
    static bool isLeap(int year);

    bool isValid() const;
    string findWeekDay();
    int findTotalDays() const;
    void plusReset();
    void minusReset();

public:
    Date(int month, int day, int year);
    Date();
    ~Date();

    Date &operator++();
    Date &operator--();
    Date &operator++(int);
    Date &operator--(int);
    Date &operator+=(int days);
    Date &operator-=(int days);
    bool operator==(const Date &right) const;
    bool operator!=(const Date &right) const;
    Date &operator=(const Date &right);
    // Friend operator functions
    friend int operator-(const Date &date1, const Date &date2);
    friend ostream &operator<<(ostream &output, const Date &date);
};

#endif