#include "duration.h"
Time::Time(/* args */) : minutes(0), seconds(0), hours(0), daytime(0)
{
    string m = (daytime != 0) ? "PM" : "AM";
}
Time::Time(int hour, int min, int sec, int day)
{
    if (hours > 12 || minutes > 59 || seconds > 59)
    {
        cout << "Hours must be between 1 and 12" << endl
             << "Minutes must be between 1 and 59" << endl
             << "Seconds must be between 1 and 59" << endl;
        assert(false);
    }
    else
    {
        hours = hour;
        minutes = min;
        seconds = sec;
        string m = (daytime != 0) ? "PM" : "AM";
    }
}

Time &Time::operator++()
{
    this->seconds++;
    return *this;
}

void Time::operator()()
{
    int conv_second = seconds + (60 * minutes) + (3600 * hours);
    cout << "The time elapsed from midnight is: " << conv_second << endl;
}

Time &Time::operator+=(const Time &a1)
{
    Time k1();

}
Time::~Time()
{
}
