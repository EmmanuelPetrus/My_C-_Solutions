#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     unsigned int get_count() { return count; }
//     void operator++()
//     {
//         ++count;
//     }
// };

// int main(void)
// {
//     Counter c1, c2;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();

//     ++c1;
//     ++c2;
//     ++c2;

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();
//     return 0;
// }

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     unsigned int get_count() { return count; }
//     Counter operator++()
//     {
//         ++count;
//         Counter temp;
//         temp.count = count;
//         return temp;
//     }
// };

// int main(void)
// {
//     Counter c1, c2;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();

//     ++c1;
//     c2 = ++c1;
//     ;

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count() << endl;
//     return 0;
// }

// Nameless temporary objects

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     Counter(int c) : count(c) {}
//     unsigned int get_count() { return count; }
//     Counter operator++()
//     {
//         ++count;
//         return Counter(count); // an unamed temporary object
//     }
// };

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     Counter(int c) : count(c) {}
//     unsigned int get_count() { return count; }
//     Counter operator++()
//     {
//         ++count;
//         return Counter(count); // an unamed temporary object
//     }
// };

// class Counter
// {
// private:
//     unsigned int count;

// public:
//     Counter() : count(0) {}
//     Counter(int c) : count(c) {}
//     unsigned int get_count() { return count; }
//     Counter operator++()
//     {
//         return Counter(++count); // an unamed temporary object
//     }
//     Counter operator++(int)
//     {
//         return Counter(count++); // an unamed temporary object
//     }
// };

// int main(void)
// {
//     Counter c1, c2;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count();

//     ++c1;
//     c2 = ++c1;

//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count() ;

//     c2 = c1++;
//     cout << "\nc1=" << c1.get_count();
//     cout << "\nc2=" << c2.get_count() << endl;
//     return 0;
// }

// Overloading Binary Operators
// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0)
//     {
//     } // constructor (two args)
//     Distance(int ft, float in) : feet(ft), inches(in)
//     {
//     }
//     void getdist() // get length from user
//     {
//         cout << "\nEnter feet : ";
//         cin >> feet;
//         cout << "Enter inches : ";
//         cin >> inches;
//     }
//     void showdist() const // display distance
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     Distance operator+(Distance) const; // add 2 distances
// };

// Distance Distance::operator+(Distance d2) const
// {
//     int f = feet + d2.feet;
//     float i = inches + d2.inches;
//     if (i >= 12.0)         // if total exceeds 12.0,
//     {                      // then decrease inches
//         i -= 12.0;         // by 12.0 and
//         f++;               // increase feet by 1
//     }                      // return a temporary Distance
//     return Distance(f, i); // initialized to sum
// }

// int main(int argc, char const *argv[])
// {
//     Distance dist1, dist3, dist4;
//     dist1.getdist();

//     Distance dist2(11, 6.25);

//     dist3 = dist1 + dist2;
//     dist4 = dist1 + dist2 + dist3;

//     cout << "dist1 = ";
//     dist1.showdist();
//     cout << endl;
//     cout << "dist2 = ";
//     dist2.showdist();
//     cout << endl;
//     cout << "dist3 = ";
//     dist3.showdist();
//     cout << endl;
//     cout << "dist4 = ";
//     dist4.showdist();
//     cout << endl;
//     return 0;
// }

// Concatenating Strings
// class String
// {
// private:
//     enum
//     {
//         SZ = 80
//     };
//     char str[SZ];

// public:
//     String()
//     {
//         strcpy(str, "");
//     };
//     String(char s[])
//     {
//         strcpy(str, s);
//     }
//     void display() const
//     {
//         cout << str;
//     }
//     String operator+(String ss) const
//     {
//         String temp;
//         if (strlen(str) + strlen(ss.str) < SZ)
//         {
//             strcpy(temp.str, str);
//             strcat(temp.str, ss.str);
//         }
//         else
//         {
//             cout << "\nString overflow";
//             exit(1);
//         }
//         return temp;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     // String s1 = "\nMerry Christmas!    ";
//     // String s2 = "Happy new year!";
//     // String s3;
//     char p[] = "\nMerry Christmas! ";
//     char m[] = "Happy new year!";
//     String s1(p);
//     String s2(m);
//     String s3;
//     s1.display();
//     s2.display();
//     s3.display();

//     s3 = s1 + s2;
//     s3.display();
//     cout << endl;
//     return 0;
// }

// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0)
//     {
//     } // constructor (two args)
//     Distance(int ft, float in) : feet(ft), inches(in)
//     {
//     }
//     void getdist() // get length from user
//     {
//         cout << "\nEnter feet : ";
//         cin >> feet;
//         cout << "Enter inches : ";
//         cin >> inches;
//     }
//     void showdist() const // display distance
//     {
//         cout << feet << "\'-" << inches << '\"'<<endl;
//     }
//     bool operator<(Distance) const;
// };
// bool Distance::operator<(Distance d2) const
// {
//     float bf1 = feet + inches / 12;
//     float bf2 = d2.feet + d2.inches / 12;
//     return (bf1 < bf2) ? true : false;
// }

// int main(int argc, char const *argv[])
// {
//     Distance dist1;
//     dist1.getdist();

//     Distance dist2(11, 6.25);

//     cout << "dist1 = ";
//     dist1.showdist();
//     cout << "dist2 = ";
//     dist2.showdist();
//     if (dist1 < dist2)
//         cout << "\ndist1 is less than dist2";
//     else
//         cout << "\ndist1 is greater than (or equal to) dist2";
//     cout << endl;
//     return 0;
// }

// Concatenating Strings
// class String
// {
// private:
//     enum
//     {
//         SZ = 80
//     };
//     char str[SZ];

// public:
//     String()
//     {
//         strcpy(str, "");
//     };
//     String(char s[])
//     {
//         strcpy(str, s);
//     }
//     void display() const
//     {
//         cout << str;
//     }
//     void getstr()
//     {
//         cin.get(str, SZ);
//     }
//     bool operator==(String ss) const
//     {
//         return (strcmp(str, ss.str) == 0) ? true : false;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     // String s1 = "\nMerry Christmas!    ";
//     // String s2 = "Happy new year!";
//     // String s3;
//     char p[] = "yes";
//     char m[] = "no";
//     String s1(p);
//     String s2(m);
//     String s3;
//     cout << "\nEnter 'yes' or 'no' : ";
//     s3.getstr();  // get String from user
//     if (s3 == s1) // compare with "yes"
//         cout << "You typed yes\n";
//     else if (s3 == s2) // compare with "no"
//         cout << "You typed no\n";
//     else
//         cout << "You didn't follow instructions\n";
//     return 0;
// }

// class Distance
// {
// private:
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0)
//     {
//     } // constructor (two args)
//     Distance(int ft, float in) : feet(ft), inches(in)
//     {
//     }
//     void getdist() // get length from user
//     {
//         cout << "\nEnter feet : ";
//         cin >> feet;
//         cout << "Enter inches : ";
//         cin >> inches;
//     }
//     void showdist() const // display distance
//     {
//         cout << feet << "\'-" << inches << '\"' << endl;
//     }
//     void operator+=(Distance);
// };

// void Distance::operator+=(Distance d2)
// {
//     feet += d2.feet;
//     inches += d2.inches;
//     if (inches >= 12.0)
//     {
//         inches -= 12.0;
//         feet++;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     Distance dist1;
//     dist1.getdist();
//     cout << "\ndist1 = ";
//     dist1.showdist();
//     Distance dist2(11, 6.25);
//     cout << "\ndist2 = ";
//     dist2.showdist();

//     dist1 += dist2;
//     cout << "\nAfter addition,";
//     cout << "\ndist1 = ";
//     dist1.showdist();
//     cout << endl;
//     return 0;
// }

// The subscript operator
// Separate get() and put() Functions
#include <process.h>
// const int LIMIT = 100;

// class safearray
// {
// private:
//     int arr[LIMIT];

// public:
//     void putel(int n, int elvalue)
//     {
//         if (n < 0 || n > LIMIT)
//         {
//             cout << "\nIndex out of bounds";
//             exit(1);
//         }
//         arr[n] = elvalue;
//     }
//     int getel(int n) const
//     {
//         if (n < 0 || n > LIMIT)
//         {
//             cout << "\nIndex out of bounds";
//             exit(1);
//         }
//         return arr[n];
//     }
// };

// int main(void)
// {
//     safearray sa1;

//     for (int j = 0; j < LIMIT; j++)
//         sa1.putel(j, j * 10);
//     for (int j = 0; j < LIMIT; j++)
//     {
//         int temp = sa1.getel(j);
//         cout << "Element " << j << " is " << temp << endl;
//     }
//     return 0;
// }

// Single access function returning by reference
// const int LIMIT = 100;

// class safearray
// {
// private:
//     int arr[LIMIT];

// public:
//     int &access(int n)
//     {
//         if (n < 0 || n >= LIMIT)
//         {
//             cout << "\nIndex out of bounds";
//             exit(1);
//         }
//         return arr[n];
//     }
// };

// int main(void)
// {
//     safearray sa1;

//     for (int j = 0; j < LIMIT; j++)
//         sa1.access(j) = j * 10;
//     for (int j = 0; j < LIMIT; j++)
//     {
//         int temp = sa1.access(j);
//         cout << "Element " << j << " is " << temp << endl;
//     }
//     return 0;
// }

// Overloaded operator returning by reference
// const int LIMIT = 100;
// class safearray
// {
// private:
//     int arr[LIMIT];

// public:
//     int &operator[](int n)
//     {
//         if (n < 0 || n >= LIMIT)
//         {
//             cout << "\nIndex out of bounds";
//             exit(1);
//         }
//         return arr[n];
//     }
// };

// int main(int argc, char const *argv[])
// {
//     safearray sa1;

//     for (int j = 0; j < LIMIT; j++)
//         sa1[j] = j * 10;
//     for (int j = 0; j < LIMIT; j++)
//     {
//         int temp = sa1[j];
//         cout << "Element" << j << " is " << temp << endl;
//     }
//     return 0;
// }

// Data conversion
// class Distance
// {
// private:
//     const float MTF;
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0), MTF(3.280833F)
//     {
//     } // constructor (two args)
//     Distance(float meters) : MTF(3.280833F)
//     {
//         float fltfeet = MTF * meters;
//         feet = int(fltfeet);
//         inches = 12 * (fltfeet - feet);
//     }
//     Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}
//     void getdist() // get length from user
//     {
//         cout << "\nEnter feet : ";
//         cin >> feet;
//         cout << "Enter inches : ";
//         cin >> inches;
//     }
//     void showdist() const // display distance
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     operator float() const
//     {
//         float fracfeet = inches / 12;
//         fracfeet += static_cast<float>(feet);
//         return fracfeet / MTF;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     float mtrs;
//     Distance dist1 = 2.35F;
//     cout << "\ndist 1 = ";dist1.showdist();
//     mtrs = static_cast<float>(dist1);
//     cout << "\ndist1 = "<<mtrs <<"d";
//     return 0;
// }
// conversions between objects and Basic types
// class Distance
// {
// private:
//     const float MTF;
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0), MTF(3.280833F) {} // constructor (one arg)
//     Distance(float meters) : MTF(3.280833F)
//     {
//         float fltfeet = MTF * meters;
//         feet = int(fltfeet);
//         inches = 12 * (fltfeet - feet);
//     }
//     Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}
//     void getdist()
//     {
//         cout << "\nEnter feet: ";
//         cin >> feet;
//         cout << "Enter inches: ";
//         cin >> inches;
//     }
//     void showdist() const // display distance
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
//     operator float() const                    // conversion operator
//     {                                         // converts Distance to meters
//         float fracfeet = inches / 12;         // convert the inches
//         fracfeet += static_cast<float>(feet); // add the feet
//         return fracfeet / MTF;                // convert to meters
//     }
// };

// int main()
// {
//     float mtrs;
//     Distance dist1 = Distance(2.35F); // uses 1-arg constructor to
//     // convert meters to Distance
//     cout << "\ndist1 = ";
//     dist1.showdist();
//     mtrs = static_cast<float>(dist1); // uses conversion operator
//     // for Distance to meters
//     cout << "\ndist1 = " << mtrs << " meters\n";
//     Distance dist2(5, 10.25); // uses 2-arg constructor
//     mtrs = dist2;             // also uses conversion op
//     cout << "\ndist2 = " << mtrs << " meters\n";
//     // dist2 = mtrs; //error, = won't convert
//     return 0;
// }

// Conversion between c-strings and string objects

// class String
// {
// private:
//     enum
//     {
//         SZ = 80
//     };
//     char str[SZ];

// public:
//     String() { str[0] = '\0'; }
//     String(char s[])
//     {
//         strcpy(str, s);
//     }
//     void display() const
//     {
//         cout << str;
//     }
//     operator char *() // conversion operator
//     {
//         return str;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     String s1;
//     char xstr[] = "Emmanuel Peter";
//     s1 = xstr;
//     s1.display();

//     char str[] =" How've you been boy?";
//     String s2 = str;

//     cout << static_cast<char *>(s2);
//     cout << endl;
//     return 0;
// }

// class time12
// {
// private:
//     bool pm;
//     int hrs;
//     int mins;

// public:
//     time12() : pm(true), hrs(0), mins(0) {}
//     time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m) {}
//     void display() const
//     {
//         cout << hrs << ':';
//         if (mins < 10)
//             cout << '0';
//         cout << mins << ' ';
//         string am_pm = pm ? "p.m." : "a.m.";
//         cout << am_pm;
//     }
// };

// class time24
// {
// private:
//     int hours;
//     int minutes;
//     int seconds;

// public:
//     time24() : hours(0), minutes(0), seconds(0) {}
//     time24(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
//     void display() const // format: 23:15:01
//     {
//         if (hours < 10)
//             cout << '0';
//         cout << hours << ':';
//         if (minutes < 10)
//             cout << '0';
//         cout << minutes << ':';
//         if (seconds < 10)
//             cout << '0';
//         cout << seconds;
//     }
//     operator time12() const; // conversion operator
// };

// time24::operator time12() const
// {
//     int hrs24 = hours;
//     bool pm = hours < 12 ? false : true;

//     int roundMins = seconds < 30 ? minutes : minutes + 1;
//     if (roundMins == 60)
//     {
//         roundMins = 0;
//         ++hrs24;
//         if (hrs24 == 12 || hrs24 == 24)
//             pm = (pm == true) ? false : true;
//     }
//     int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
//     if (hrs12 == 0)
//     {
//         hrs12 = 12;
//         pm = false;
//     }
//     return time12(pm, hrs12, roundMins);
// }

// int main(void)
// {
//     int h, m, s;
//     while (true)
//     {
//         cout << "Enter 24-hour time: \n";
//         cout << "    Hours (0 to 23): ";
//         cin >> h;
//         if (h > 23)
//             return (1);
//         cout << "    Minutes: ";
//         cin >> m;
//         cout << "    Seconds: ";
//         cin >> s;

//         time24 t24(h, m, s);
//         cout << "You entered: ";
//         t24.display();

//         time12 t12 = t24;

//         cout << "\n12-hour time: ";
//         t12.display();
//         cout << "\n\n";
//     }

//     return 0;
// }

// class time24
// {
// private:
//     int hours;
//     int minutes;
//     int seconds;

// public:
//     time24() : hours(0), minutes(0), seconds(0) {}
//     time24(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
//     void display() const // format: 23:15:01
//     {
//         if (hours < 10)
//             cout << '0';
//         cout << hours << ':';
//         if (minutes < 10)
//             cout << '0';
//         cout << minutes << ':';
//         if (seconds < 10)
//             cout << '0';
//         cout << seconds;
//     }
//     int getHrs() const { return hours; }
//     int getMins() const { return minutes; }
//     int getSecs() const { return seconds; }
// };

// class time12
// {
// private:
//     bool pm;
//     int hrs;
//     int mins;

// public:
//     time12() : pm(true), hrs(0), mins(0) {}
//     time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m) {}
//     time12(time24);
//     void display() const
//     {
//         cout << hrs << ':';
//         if (mins < 10)
//             cout << '0';
//         cout << mins << ' ';
//         string am_pm = pm ? "p.m." : "a.m.";
//         cout << am_pm;
//     }
// };

// time12::time12(time24 t24)
// {
//     int hrs24 = t24.getHrs();
//     pm = t24.getHrs() < 12 ? false : true;

//     mins = (t24.getSecs() < 30) ? t24.getMins() : t24.getMins() + 1;
//     if (mins == 60)
//     {
//         mins = 0;
//         ++hrs24;
//         if (hrs24 == 12 || hrs24 == 24)
//             pm = (pm == true) ? false : true;
//     }
//     hrs = (hrs24 < 13) ? hrs24 : hrs24 - 12;
//     if (hrs == 0)
//     {
//         hrs = 12;
//         pm = false;
//     }
// }

// int main(void)
// {
//     int h, m, s;
//     while (true)
//     {
//         cout << "Enter 24-hour time: \n";
//         cout << "    Hours (0 to 23): ";
//         cin >> h;
//         if (h > 23)
//             return (1);
//         cout << "    Minutes: ";
//         cin >> m;
//         cout << "    Seconds: ";
//         cin >> s;

//         time24 t24(h, m, s);
//         cout << "You entered: ";
//         t24.display();

//         time12 t12 = t24;

//         cout << "\n12-hour time: ";
//         t12.display();
//         cout << "\n\n";
//     }

//     return 0;
// }

// Explicit and mutable keyword
// class Distance
// {
// private:
//     const float MTF;
//     int feet;
//     float inches;

// public:
//     Distance() : feet(0), inches(0.0), MTF(3.280833F) {}
//     explicit Distance(float meters) : MTF(3.280833F)
//     {
//         float fltfeet = MTF * meters;
//         feet = int(fltfeet);
//         inches = 12 * (fltfeet - feet);
//     }
//     void showdist()
//     {
//         cout << feet << "\'-" << inches << '\"';
//     }
// };

// int main(int argc, char const *argv[])
// {
//     void fancyDist(Distance);
//     Distance dist1(2.35F);
//     return 0;
// }

class Scrollbar
{
private:
    int size;
    mutable string owner;

public:
    Scrollbar(int sz, string own) : size(sz), owner(own) {}
    void setSize(int sz) { size = sz; }
    void setOwner(string own) const { owner = own; }
    int getSize() const { return size; }
    string getOwner() const { return owner; }
};

int main(void)
{
    const Scrollbar sbar(60, "Window1");
    sbar.setOwner("Window2");

    cout << sbar.getSize() << ", " << sbar.getOwner() << endl;
    return 0;
}
