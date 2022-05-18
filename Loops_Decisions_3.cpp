#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <conio.h>

using namespace std;

// FIBONACCI series
// int main(void)
// {
//     const unsigned long limit = 4294967295; // largest unsigned long
//     unsigned long next = 0;                 // next-to-last term
//     unsigned long last = 1;                 // last term
//     while (next < limit / 2)
//     {
//         cout << last << "  ";   // display last term
//         long sum = next + last; // add last two terms
//         next = last;            // variables move forward
//         last = sum;             //  in the series
//     }
//     cout << endl;
//     return 0;
// }

// Program to count the number of words and characters typed in a file
// int main(void)
// {
//     int chcount = 0; // counts non_space characters
//     int wdcount = 1; // counts spaces between words
//     char ch = 'a';   // ensure it isn't '\r'

//     cout << "Enter a phrase:";
//     while (ch != '\r')
//     {
//         ch = getche();
//         if (ch == ' ')
//             wdcount++;
//         else
//             chcount++;
//     }
//     cout << "\nWords=" << wdcount << endl
//          << "Letters=" << (chcount - 1) << endl;
//     return 0;
// }

// int main(void)
// {
//     int chcount = 0; // counts non_space characters
//     int wdcount = 1; // counts spaces between words
//     char ch;   // ensure it isn't '\r'

//     while ((ch = getche()) != '\r')
//     {
//         if (ch == ' ')
//             wdcount++;
//         else
//             chcount++;
//     }
//     cout << "\nWords=" << wdcount << endl
//          << "Letters=" << (chcount - 1) << endl;
//     return 0;
// }

// An adventure game
// int main(void)
// {
//     char dir = 'a';
//     int x = 10, y = 10;

//     cout << "Type Enter to quit\n";
//     while (dir != '\r') // until Enter is typed
//     {
//         cout << "\nYour location is " << x << ", " << y;
//         cout << "\nPress direction key (n, s, e, w): ";
//         dir = getche(); // get character
//         if (dir == 'n') // go north
//             y--;
//         else if (dir == 's') // go south
//             y++;
//         else if (dir == 'e') // go east
//             x++;
//         else if (dir == 'w') // go west
//             x--;
//     }
//     return 0;
// }

// Using the switch and case statement
// int main(void)
// {
//     int speed;         //turntable speed

//     cout << "\nEnter 33, 45, or 78: ";
//     cin >> speed;        //User enters speed
//     switch (speed)
//     {
//     case 33:
//         cout << "LP album\n";
//         break;
//     case 45:
//         cout << "Single selection\n";
//         break;
//     case 78:
//         cout << "Obsolete format\n";
//         break;
//     default:
//         cout << "Invalid entry ";
//         break;
//     }
//     return 0;
// }

// switch statements with characters
// int main(void)
// {
//     char dir = 'a';
//     int x = 10, y = 10;

//     while (dir != '\r')
//     {
//         cout << "\nYour location is " << x << ", " << y;
//         cout << "\nEnter direction (n,s,e,w): ";
//         dir = getche();
//         switch (dir)
//         {
//         case 'n':
//             y--;
//             break;
//         case 's':
//             y++;
//             break;
//         case 'e':
//             x++;
//             break;
//         case 'w':
//             x--;
//             break;
//         case '\r':
//             cout << "\nExiting\n"<<endl;
//             break;
//         default:
//             cout << "\nTry again\n";
//         }
//     }

//     return 0;
// }

// int main(void)
// {
//     char dir = 'a';
//     int x = 10, y = 10;

//     while (dir != '\r')
//     {
//         cout << "\nYour location is " << x << ", " << y;
//         cout << "\nEnter direction (n,s,e,w): ";
//         dir = getche();
//         switch (dir)
//         {
//         case 'n':
//             y--;
//             break;
//         case 's':
//             y++;
//             break;
//         case 'e':
//             x++;
//             break;
//         case 'w':
//             x--;
//             break;
//         case '\r':
//             cout << "\nExiting\n"
//                  << endl;
//             break;
//         default:
//             cout << "\nTry again\n";
//         }
//         if (x == 7 && y == 11) // if x is 7 and y is 11
//         {
//             cout << "\nYou found the treasure !\n";
//             exit(0); // exit from program
//         }
//         // cout << (x == 7 && y == 11)? "\nYou found the treasure\n": "Not yet, try more\n" ;
//     }

//     return 0;
// }

// show prime program
// int main()
// {
//     const unsigned char WHITE = 219; // Solid color (primes)
//     const unsigned char GRAY = 176;  // gray (non) primes
//     unsigned char ch;

//     for (int count = 1; count < 1999; count++)
//     {
//         ch = WHITE;                     // assume it's prime
//         for (int j = 2; j < count; j++) // divide by every integer from 2 upward;
//             if (count % j == 0)         // if remainder is 0
//             {
//                 ch = GRAY;                  //it's not prime
//                 break;
//             }
//         cout << ch; // display the character
//     }
//     getch(); // freeze screen until keypress
//     return 0;
// }
