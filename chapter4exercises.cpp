#include <iostream>
#include <conio.h>
using namespace std;

// struct Phone
// {
//     int area_code;
//     int exchange;
//     int number;
// };

// int main(void)
// {
//     Phone phone1, phone2;
//     phone1 = {212, 767, 8900};
//     cout << "Enter your area code, exchage, and number: ";
//     cin >> phone2.area_code >> phone2.exchange >> phone2.number;
//     cout << "My number is " << phone1.area_code << " " << phone1.exchange << " " << phone1.number << endl;
//     cout << "Your number is "
//          << "(" << phone2.area_code << ") " << phone2.exchange << "-" << phone2.number;
//     return 0;
// }

// Using struct to make dates
// struct Date
// {
//     int month;
//     int day;
//     int year;
// };
// int main(void)
// {
//     Date date1;
//     char a, b;
//     cout<<"Kindly enter the date: ";
//     cin>>date1.day>>a>>date1.month>>b>>date1.year;
//     cout <<"The date input is: "<<date1.day<<"/"<<date1.month <<"/"<< date1.year<<endl;
//     return 0;
// }

// Using enum to optimize work 
// enum etype
// {
//     laborer,
//     secretary,
//     manager,
//     accountant,
//     executive,
//     researcher
// };

// int main(void)
// {
//     etype category;
//     char choice;
//     cout << "Enter employee type (first letter only)" << endl
//          << "laborer , secretary, manager, " << endl
//          << "accountant, executive, researcher): ";
//     cin >> choice;
//     switch (choice)
//     {
//     case 'a':
//         category = accountant;
//         break;
//     case 'l':
//         category = laborer;
//         break;
//     case 'm':
//         category = manager;
//         break;
//     case 's':
//         category = secretary;
//         break;
//     case 'e':
//         category = executive;
//         break;
//     case 'r':
//         category = researcher;
//         break;
//     default:
//         cout << "Wrong choice!!!!";
//         break;
//     }
//     switch (category)
//     {
//     case laborer:
//         cout << "Laborer";
//         break;
//     case accountant:
//         cout << "Accountant";
//         break;
//     case secretary:
//         cout << "Secretary";
//         break;
//     case manager:
//         cout << "Manager";
//         break;
//     case executive:
//         cout << "Executive";
//         break;
//     case researcher:
//         cout << "Researcher";
//         break;
//     default:
//         break;
//     }
//     return 0;
// }

