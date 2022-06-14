#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstring>
#include <string>
// #include <basic_string.h>
// #include <basic_string.tcc>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     int age[4];
//     for (int i = 0; i < 4; i++)
//     {
//         cout << "Enter an age: ";
//         cin >> age[i];
//     }
//     for (int i = 0; i < 4; i++)

//         cout << "You entered " << age[i] << endl;

//     return 0;
// }

// sales array
// int main(int argc, char const *argv[])
// {
// const int SIZE = 6;
// double sales[SIZE];

// cout << "Enter widget sales for 6 days\n";
// for (int i = 0; i < SIZE; i++)
// {
//     cin >> sales[i];
// }
// double total = 0;
// for (int i = 0; i < SIZE; i++)
//     total += sales[i];
// double average = total / SIZE;
// cout << "Average = " << average << endl;
// float fpn = 234;
// cout << setiosflags(ios::fixed)     // fixed (not exponential)
//      << setiosflags(ios::showpoint) // always show decimal point
//      << setprecision(8)             // two decimal places
//      << setw(10)                    // field width 10
//      << fpn;
// return 0;
// }

// Initializing Multidimensional Arrays
// const int DISTRICTS = 4;
// const int MONTHS = 3;

// int main(int argc, char const *argv[])
// {
//     int d, m;
//     double sales[DISTRICTS][MONTHS] = {
//         {123.34, 234.59, 654.0},
//         {13.434, 23.59, 65.02},
//         {123.43, 34.59, 654.2},
//         {23.434, 234.5, 54.02},
//     };

//     cout << "\n\n";
//     cout << "                     Month\n";
//     cout << "                1          2          3";
//     for (d = 0; d < DISTRICTS; d++)
//     {
//         cout << "\nDistrict " << d + 1;
//         for (m = 0; m < MONTHS; m++)
//             cout << setw(10) << setiosflags(ios::fixed)
//                  << setiosflags(ios::showpoint) << setprecision(2)
//                  << sales[d][m];
//     }
//     cout << endl;

//     return 0;
// }

// Passing Arrays to Functions
// const int DISTRICTS = 4;
// const int MONTHS = 3;

// void display(double[][MONTHS]);

// int main(int argc, char const *argv[])
// {
//    double sales[DISTRICTS][MONTHS] = {
//        {123.34, 234.59, 654.0},
//        {13.434, 23.59, 65.02},
//        {123.43, 34.59, 654.2},
//        {23.434, 234.5, 54.02},
//    };
//    display(sales);
//    cout << endl;
//    return 0;
// }
// void display(double funsales[DISTRICTS][MONTHS])
// {
//    int d, m;
//    cout << "\n\n";
//    cout << "\n\n";
//    cout << "                     Month\n";
//    cout << "                1          2          3";
//    for (d = 0; d < DISTRICTS; d++)
//    {
//       cout << "\nDistrict " << d + 1;
//       for (m = 0; m < MONTHS; m++)
//          cout << setw(10) << setiosflags(ios::fixed)
//               << setiosflags(ios::showpoint) << setprecision(2)
//               << funsales[d][m];
//    }
// }

// Array of Structures
// const int SIZE = 4;
// struct part
// {
//    int modelnumber;
//    int partnumber;
//    float cost;
// };

// int main(int argc, char const *argv[])
// {
//    int n;
//    part a_part[SIZE];

//    for (n = 0; n < SIZE; n++)
//    {
//       cout << endl;
//       cout << "Enter model number: ";
//       cin >> a_part[n].modelnumber;
//       cout << "Enter part number: ";
//       cin >> a_part[n].partnumber;
//       cout << "Enter cost: ";
//       cin >> a_part[n].cost;
//    }
//    cout << endl;
//    for (n = 0; n < SIZE; n++)
//    {
//       cout << "Model " << a_part[n].modelnumber
//            << " Part " << a_part[n].partnumber
//            << " Cost " << a_part[n].cost << endl;
//    }
//    return 0;
// }

// class Stack
// {
// private:
//    enum
//    {
//       MAX = 10
//    };
//    int st[MAX];
//    int top;

// public:
//    Stack() : top(0) {}
//    void push(int var) { st[++top] = var; }
//    int pop() { return st[top--]; }
// };

// int main(int argc, char const *argv[])
// {
//    Stack s1;

//    s1.push(11);
//    s1.push(22);
//    cout << "1: " << s1.pop() << endl;
//    cout << "2: " << s1.pop() << endl;
//    s1.push(33);
//    s1.push(44);
//    s1.push(55);
//    s1.push(66);
//    cout << "3: " << s1.pop() << endl;
//    cout << "4: " << s1.pop() << endl;
//    cout << "5: " << s1.pop() << endl;
//    cout << "6: " << s1.pop() << endl;
//    return 0;
// }

// an array of classes
// class Distance
// {
// private:
//    int feet;
//    float inches;

// public:
//    void getdist()
//    {
//       cout << "\n    Enter feet: ";
//       cin >> feet;
//       cout << "     Enter inches: ";
//       cin >> inches;
//    }
//    void showdist() const
//    {
//       cout << feet << "\'-" << inches << '\"';
//    }
// };

// #define MAX 100

// int main(int argc, char const *argv[])
// {
//    Distance dist[MAX];
//    int n = 0;
//    char ans;
//    cout << endl;
//    do
//    {
//       if (n >= MAX)
//       {
//          cout << "\nThe array is full!!!";
//          break;
//       }

//       cout << "Enter distance number " << n + 1;
//       dist[n++].getdist();
//       cout << "Enter another (y/n)?: ";
//       cin >> ans;

//    } while (ans != 'n');

//    for (int i = 0; i < n; i++)
//    {
//       cout << "\nDistance number " << i + 1 << " is ";
//       dist[i].showdist();
//    }
//    cout << endl;
//    return 0;
// }

// A Card game using arrays and structures
// #include <cstdlib>
// #include <ctime>

// const int jack = 11;
// const int queen = 12;
// const int king = 13;
// const int ace = 14;

// enum Suit
// {
//     clubs,
//     diamonds,
//     hearts,
//     spades
// };
// class card
// {
// private:
//     int number;
//     Suit suit;

// public:
//     card() {}
//     void display();
//     void set(int n, Suit s)
//     {
//         suit = s;
//         number = n;
//     }
// };

// void card::display()
// {
//     if (number >= 2 && number <= 10)
//         cout << number;
//     else
//         switch (number)
//         {
//         case jack:
//             cout << "J";
//             break;
//         case queen:
//             cout << "Q ";
//             break;
//         case king:
//             cout << "K";
//             break;
//         case ace:
//             cout << "A";
//             break;
//         }
//     switch (suit)
//     {
//     case clubs:
//         cout << static_cast<char>(5);
//         break;
//     case diamonds:
//         cout << static_cast<char>(4);
//         break;
//     case hearts:
//         cout << static_cast<char>(3);
//         break;
//     case spades:
//         cout << static_cast<char>(6);
//         break;
//     }
// }

// int main()
// {
//     card deck[52];
//     int j;

//     cout << endl;
//     for (j = 0; j < 52; j++)
//     {
//         int num = (j % 13) + 2;
//         Suit su = Suit(j / 13);
//         deck[j].set(num, su);
//     }
//     cout << "\nOrdered deck:\n";
//     for (j = 0; j < 52; j++)
//     {
//         deck[j].display();
//         cout << "  ";
//         if (!(j + 1) % 13)
//             cout << endl;
//     }
//     srand(time(NULL));
//     for (j = 0; j < 52; j++)
//     {
//         int k = rand() % 52;
//         card temp = deck[j];
//         deck[j] = deck[k];
//         deck[k] = temp;
//     }
//     cout << "\nShuffled deck:\n";
//     for (j = 0; j < 52; j++)
//     {
//         deck[j].display();
//         cout << ", ";
//         if (!((j + 1) % 13))
//             cout << endl;
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     const int MAX = 20;
//     char str[MAX];

//     cout << "\nEnter a string: ";
//     cin >> setw(MAX) >> str;
//     cout << "You entered: " << str << endl;
//     return 0;
// }

// Initializing string constants
// int main(int argc, char const *argv[])
// {
//     char str[] = "Farewell! thou art too dear for my possessing.";
//     cout << str << endl;
//     return 0;
// }

// using the cin.get function
//   int main(int argc, char const *argv[])
// {
//     const int MAX = 80;
//     char str[MAX];

//     cout << "\nEnter a string: ";
//     cin.get(str,MAX,'a');
//     cout << "You entered: " << str << endl;
//     return 0;
// }

// Array of strings
// int main(int argc, char const *argv[])
// {
//     const int DAYS = 7;
//     const int MAX = 10;

//     char star[DAYS][MAX] = {"Sunday", "Monday", "Tuesday",
//                             "Wednesday", "Thursday",
//                             "Friday", "Saturday"};
//     for (int j = 0; j < DAYS; j++)
//         cout << star[j] << endl;
//     return 0;
// }

// strings as class members

// class part
// {
// private:
//     char partname[30];
//     int partnumber;
//     double cost;

// public:
//     void setpart(char pname[], int pn, double c)
//     {
//         strcpy(partname, pname);
//         partnumber = pn;
//         cost = c;
//     }
//     void showpart()
//     {
//         cout << "\nName=" << partname;
//         cout << ", number=" << partnumber;
//         cout << ", cost=$" << cost;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     part part1, part2;
//     char m[]= "handle bolt";
//     char k[] = "start lever";
//     part1.setpart(m, 4473, 217.55); // set parts
//     part2.setpart(k, 9924, 419.25);
//     cout << "\nFirst part: ";
//     part1.showpart(); // show parts
//     cout << "\nSecond part: ";
//     part2.showpart();
//     cout << endl;
//     return 0;
// }

// building our own string class
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
//         str[0] = '\0';
//     }
//     String(char s[])
//     {
//         strcpy(str, s);
//     }
//     void display()
//     {
//         cout << str;
//     }
//     void concat(String s2)
//     {
//         if (strlen(str) + strlen(s2.str) < SZ)
//             strcat(str, s2.str);
//         else
//             cout << "\nString too long";
//     }
// };

// int main(int argc, char const *argv[])
// {
//     char m[] = "Merry Christmas!  ";
//     char k[] = "Season's Greetings! ";
//     String s1(m);    // uses constructor 2;
//     String s2 = k; // alternate form of 2
//     String s3;

//     cout << "\ns1=";
//     s1.display();
//     cout << "\ns2=";
//     s2.display();
//     cout << "\ns3=";
//     s3 = s1;
//     s3.concat(s2);
//     cout << "\ns3=";
//     s3.display();
//     cout << endl;
//     return 0;
// }

// The Standard C++ string Class
// int main(int argc, char const *argv[])
// {
//     string s1("Man");
//     string s2 = "Beast";
//     string s3;

//     s3 = s1;
//     cout << "s3 = " << s3 << endl;
//     s3 = "Neither " + s1 + " nor ";
//     s3 += s2;
//     cout << "s3 = " << s3 << endl;

//     s1.swap(s2);
//     cout << s1 << " nor " << s2 << endl;
//     return 0;
// }

// Input/Output with string Objects
// int main()
// {
//     string full_name, nickname, address;
//     string greeting("Hello, ");

//     cout << "Enter your full name: ";
//     getline(cin, full_name);
//     cout << "Your full name is: " << full_name << endl;

//     cout << "Enter your nickname: ";
//     cin >> nickname;

//     greeting += nickname;
//     cout << greeting << endl;

//     cout << "Enter your address on separate lines\n";
//     cout << "Terminate with '$'\n";
//     getline(cin, address, '$');
//     cout << "Your address is: " << address << endl;
//     return 0;
// }

// Finding string Objects
// int main(int argc, char const *argv[])
// {
//     string s1 = "In Xanadu did Kubla Kahn a stately pleasure dome decree";
//     int n;
//     n = s1.find("Kubla");
//     cout << "Found Kubla at " << n << endl;

//     n = s1.find_first_of("spde");
//     cout << "First of spde at " << n << endl;

//     n = s1.find_first_not_of("aeiouAEIOU");
//     cout << "First consonant at " << n << endl;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     string s1("Quick! Send for Count Graystone.");
//     string s2("Lord");
//     string s3("Don't ");
//     s1.erase(0, 7);             // remove "Quick!"
//     s1.replace(9, 5, s2);       // replace "Count" with "Lord"
//     s1.replace(0, 1, "s");      // replace 'S' with 's'
//     s1.insert(0, s3);           // insert "Don't " at beginning
//     s1.erase(s1.size() - 1, 1); // remove  '-'
//     s1.append(3, '!');

//     int x = s1.find(' ');
//     while (x < s1.size())
//     {
//         s1.replace(x, 1, "/");
//         x = s1.find(' ');
//     }
//     cout << "s1: " << s1 << endl;
//     return 0;
// }

// Comparing strings
// int main(int argc, char const *argv[])
// {
//     string aName = "George";
//     string userName;

//     cout << "Enter your first name: ";
//     cin >> userName;
//     if (userName == aName)
//         cout << "Greetings, George\n";
//     else if (userName < aName)
//         cout << "You come before George\n";
//     else
//         cout << "You come after George\n";
//     int n = userName.compare(0, 2, aName, 0, 2);
//     cout << "The first two letters of your name ";
//     if (n == 0)
//         cout << "match ";
//     else if (n < 0)
//         cout << "come before ";
//     else
//         cout << "come after ";
//     cout << aName.substr(0, 2) << endl;
//     return 0;
// }

// Accessing individual characters in a string
// int main(int argc, char const *argv[])
// {
//     char charray[80];
//     string word;

//     cout << "Enter a word: ";
//     cin >> word;
//     int wlen = word.length();

//     cout << "One character at a time: ";
//     for (int j = 0; j < wlen; j++)
//         cout << word.at(j);

//     word.copy(charray, wlen, 0);
//     charray[wlen] = 0;

//     cout << "\nArray contains: " << charray << endl;
//     return 0;
// }

// Other string Functions
