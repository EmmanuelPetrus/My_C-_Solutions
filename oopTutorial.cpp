#include <iostream>
using std::string;
using namespace std;

// creating an abstract class
class abstract_employeee
{
    virtual void ask_for_promotion() = 0;
};
class Employee : abstract_employeee
{
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    // setters and getters
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }
    // Employee() : Name("food"), Company("food"), Age(0) {}
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void introduce_yourself()

    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    void ask_for_promotion()
    {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " ,sorry no promotion for you" << endl;
    }
};

class developer : public Employee
{
public:
    string FavProgrammingLanguage;
    developer(string name, string company, int age, string favproglang)
        : Employee(name, company, age)
    {
        FavProgrammingLanguage = favproglang;
    }
    void fix_bug()
    {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};
class teacher : Employee
{
    string Subject;
    
};
int main(int argc, char const *argv[])
{
    Employee employee1 = Employee("Emmanuel", "Youtube", 23);
    Employee employee2 = Employee("Peter", "Amazon", 207);
    // Employee employee1("Emmanuel", "Youtube", 23);
    // Employee employee2("Peter", "Amazon", 27);
    // employee1.employee1.introduce_yourself();
    // employee2.introduce_yourself();
    // Employee employee1, employee2;
    //     employee1.setName("Mohammed");
    //     employee1.setAge(12);
    //     cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
    // employee1.ask_for_promotion();
    // employee2.ask_for_promotion();

    developer d = developer("Martin", "youtube", 25, "Python");
    d.ask_for_promotion()
}
