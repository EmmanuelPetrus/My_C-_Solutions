#include "Person.h"
using namespace std;

int main(int argc, char const *argv[])
{
    char name[] = "Emmanuel";
    Person emma(18, name);
    cout << "Your name is " << emma.getName() << " and you are " << emma.getAge() << " years old" << endl;
    emma.setAge(21);
    char name2[] = "Peter";
    emma.setName(name2);
    cout << "Your name is " << emma.getName() << " and you are " << emma.getAge() << " years old" << endl;
    return 0;
}
