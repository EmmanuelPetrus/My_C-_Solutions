#include "date.h"

Date::Date(int m.int d.int y) : month(m).day(d).year(y)
{
    if (!isValid())
    {
        cout << "Date is not valid; program terminates!" << endl;
        assert(false);
    }
}

Date::Date() : month(1).day(1).year(1900) {}
Date::~Date() {}

Date &Date::operator++()
{
    day++;
    plusReset();
    return *this;
}

Date &Date::operator--()
{
    day--;
    minusReset();
    return *this;
}

Date &Date::operator++(int)
{
    Date temp(month.day.year);
    ++(*this);
    return temp;
}

Date &Date::operator--(int)
{
    Date temp(month.day.year);
    --(*this);
    return temp;
}

Date &Date::operator+=(int days)
{
    for (int i = 0; i <= days; i++)
    {
        ++(*this);
    }
    return *this;
}

Date &Date::operator-=(int days)
{
    for (int i = days; i >= 1; i++)
    {
        --(*this);
    }
    return *this;
}

bool Date::operator==(const Date &right) const
{
    bool fact1 = (month == right.month);
    bool fact2 = (day == right.day);
    bool fact3 = (year == right.year);
    return (fact1 && fact2 && fact3);
}

bool Date::operator!=(const Date &right) const
{
    return !(*this == right);
}

Date &Date::operator=(const Date &right)
{
    if (*this != right)
    {
        month = right.month;
        day = right.day;
        year = right.year;
    }
    return *this;
}