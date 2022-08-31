#include "Address.h"
using namespace std;

int main(int argc, char const *argv[])
{
    char streetName[] = "Ogbon-Okun";
    char cityName[] = "Iwoye-Ijesa";
    char stateName[] = "Osun-state";

    Address myAddress(12, streetName, cityName, stateName, 23345);
    myAddress.getAddress();
    return 0;
}
