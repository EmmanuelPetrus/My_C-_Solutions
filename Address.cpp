#include "Address.h"
using namespace std;

Address::Address(int house, char *street, char *city, char *state, int zip) : houseNo(house), streetName(street), cityName(city), stateName(state), zipCode(zip){};
Address::~Address() {}
void Address::getAddress()
{
    cout << "House Number: " << houseNo << endl
         << "Street Name: " << streetName << endl
         << "City Name: " << cityName << endl
         << "State Name: " << stateName << endl
         << "Zipcode: " << zipCode << endl;
}
