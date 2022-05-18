#include <iostream>
#include <iomanip>
#include <ctype.h>

using namespace std;
// Conversion from gallons to cubic feet
// int main(void)
// {
//     const float gallons = 7.4121F;           //value of 1 cubic feet in gallons
//     float foot;
//     cout << "Kindly enter the number of gallons to be converted to cubic feets: " ;
//     cin >> foot;
//     float result = foot / gallons;
//     cout << "The consversion to cubic feets is: " << result<< endl;

//     /* code */
//     return 0;
// }

// Pretty code
// int main(void)
// {
//     cout << setw(4) << 1990 << setw(10) << 135 <<endl
//          << setw(4) << 1991 << setw(10) << 7290 <<endl
//          << setw(4) << 1992 << setw(10) << 13300 <<endl
//          << setw(4) << 1993 << setw(10) << 16200;
//          return 0;
// }

// Use of postfix and prefix operators
// int main(void)
// {
//     int num1 = 10,num2 = 10;
//     num2 += num1;
//     cout << num1 << endl ;
//     cout << num2 << endl;
//     cout << --num2 << endl;
//     return 0;
// }

//  using the ctype library
// int main(void)
// {
//     char k;
//     cout << "Kindly enter a letter: ";
//     cin >> k;
//     int m = islower(k);
//     cout << m ;
//     return 0;
// }

//  Currency converter and using setfill function which takes in an input of char type

// int main(void)
// {
//     float pound = 1.4127F, franc = 0.172F, deutschemark = 0.5124F, dollar = 0.0F, yen = 0.00955;
//     cout << "kindly enter the amount you want to convert: ";
//     cin >> dollar;
//     float conv_pound = dollar / pound;
//     float conv_franc = dollar / franc;
//     float conv_deutschemark = dollar / deutschemark;
//     float conv_yen = dollar / yen;
//     cout << setw(13) << "Pounds" << setw(13) << setfill('-')<< "$"<<conv_pound << endl
//          << setw(13) << "Franc" << setw(13) << "$"<<conv_franc << endl
//          << setw(13) << "Deutschemark" << setw(13) << "$"<<conv_deutschemark << endl
//          << setw(13) << "Yen" << setw(13) << "$"<<conv_yen << endl;

//     return 0;
// }

// fraction evaluator
int main()
{
    int a, c, d, e;
    char b, f;
    cout << "Kindly enter the first fraction: ";
    cin >> a >> b >> c;
    cout << "Kindly enter the second fraction: ";
    cin >> d >> f >> e;
    int numerator = (a * e) + (d * c);
    int denominator = c * e;
    cout << "The result is: " << numerator << b << denominator << endl;
    return 0;
}

// Pounds conveter from old system to new money siystem British
// int main(void)
// {
//     const int pounds = 240,shillings= 20, pence = 12;
//     int po , sh, pe;
//     cout << "Enter pounds: ";
//     cin >> po;
//     cout << "Enter shillings: ";
//     cin >> sh;
//     cout << "Enter pence: ";
//     cin >> pe;
//     float conv_pence_to_pounds = static_cast<float>((pence * sh) + pe)/pounds;
//     float result = po + conv_pence_to_pounds;
//     cout << "Decimal pounds = " <<'\x9c'<<result<<endl;
//     return 0;
// }

// Pretty coding 
// int main(void)
// {
//     cout <<setiosflags(ios::left)<<setw(12)<<"Last name"<<setw(13)<<"First name"<<setw(19)<<"Street address"<<setw(12)<<"Town"<<setw(6)<<"State"<<endl
//     <<"--------------------------------------------------------------"<<endl
//     <<setw(12)<<"Jones"<<setw(12)<<"Bernard"<<setw(19)<<"109 Pine Lane"<<setw(15)<<"Littletown"<<setw(2)<<"MI"<<endl
//     <<setw(12)<<"O'Brian"<<setw(12)<<"Coleen"<<setw(19)<<"42 E. 99th Ave."<<setw(15)<<"Bigcity"<<setw(2)<<"NY"<<endl
//     <<setw(12)<<"Wong"<<setw(12)<<"Harry"<<setw(19)<<"121-A Alabama St."<<setw(15)<<"Lakeville"<<setw(2)<<"IL"<<endl;
//     // <<
//     return 0;
// }

// Pounds conveter from new system to old money system British Currency 
// int main(void)
// {
//     const int sh = 20;
//     float po = 0.0;
//     cout << "Enter pounds: ";
//     cin >> po;
//     int extract_pounds = static_cast<int>(po);
//     float extract_pence = po - extract_pounds;
//     float shillings = sh * extract_pence;
//     cout << "Decimal pounds  in old system=  " <<'\x9c'<<extract_pounds<<'.'<<shillings<<endl;
//     return 0;

    
// }



