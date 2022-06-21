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
