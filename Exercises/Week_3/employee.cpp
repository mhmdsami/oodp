#include <iostream>
using namespace std;

class Employee
{
private:
    string name, address;
    int year_of_joining;

public:
    Employee(string name, int year_of_joining, string address)
    {
        this->name = name;
        this->year_of_joining = year_of_joining;
        this->address = address;
    }

    void display()
    {
        cout << name << "\t" << year_of_joining << "\t\t" << address << endl;
    }
};

int main()
{
    Employee employee1("Robert", 1994, "64C- Walls Street");
    Employee employee2("Sam", 2000, "68D- Walls Street");
    Employee employee3("John", 1999, "26B- Walls Street");
    cout << "Name"
         << "\t"
         << "Year of Joining"
         << "\t"
         << "Address" << endl;
    employee1.display();
    employee2.display();
    employee3.display();
    return 0;
}