#include "date.h"

Date::Date(int m, int d, int y) : month(m), day(d), year(y)
{
    if (!isValid())
    {
        cout << "Date is not valid; program terminates!" << endl;
        assert(false);
    }
}

Date::Date() : month(1), day(1), year(1900) {}
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
    Date temp(month, day, year);
    ++(*this);
    return temp;
}

Date &Date::operator--(int)
{
    Date temp(month, day, year);
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

int operator-(const Date &date1, const Date &date2)
{
    return (date1.findTotalDays() - date2.findTotalDays());
}

ostream &operator<<(ostream &output, const Date &date)
{
    cout << Date::daysOfWeek[(date.findTotalDays() + Date::startWeekDay) % 7] << " ";
    cout << Date::monthsOfYear[date.month] << " ";
    cout << date.day << " ";
    cout << date.year << endl;
}

bool Date::isValid() const
{
    bool validMonth = (month >= 1) && (month <= 12);
    bool validYear = (year >= startYear);
    bool validDay = (day >= 1) && (day <= (Date::daysInMonths[month] + (isLeap(year) && month == 2)));
    return (validMonth && validYear && validDay);
}

void Date::plusReset()
{
    bool extraDay = (isLeap(year) && month == 2);
    if (day > daysInMonths[month] + extraDay)
    {
        day = 1;
        month++;
    }
    if (month > 12)
    {
        month = 1;
        year++;
    }
}

void Date::minusReset()
{
    if (day < 1)
    {
        month--;
        if (month < 1)
        {
            month = 12;
            year--;
        }
        bool extraDay = isLeap(year) && (month == 2);
        day = daysInMonths[month] + extraDay;
    }
}

int Date::findTotalDays() const
{
    int totalDays = 0;
    int currentYear = startYear;
    while (year > currentYear)
    {
        totalDays += 365 + isLeap(currentYear);
        currentYear++;
    }
    int currentMonth = 1;
    while (month > currentMonth)
    {
        totalDays += daysInMonths[currentMonth];
        if (currentMonth == 2)
        {
            totalDays += isLeap(year);
        }
        currentMonth++;
    }
    totalDays += day - 1;
    return totalDays;
}

const int Date::startWeekDay = 1;
const int Date::startYear = 1900;
const int Date::daysInMonths[] = {0, 31, 28, 31, 30, 31,
                                  30, 31, 31, 30, 31, 30, 31};
const string Date ::daysOfWeek[] = {"Sun", "Mon", "Tue", "Wed",
                                    "Thr", "Fri", "Sat"};
const string Date ::monthsOfYear[] = {"", "Jan", "Feb", "Mar", "Apr",
                                      "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
// Definition of static member function
bool Date ::isLeap(int year)
{
    return (year % 400 == 00) || ((year % 4 == 0) && (year % 100 != 0));
}