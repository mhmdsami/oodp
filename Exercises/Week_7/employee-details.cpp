#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Employee
{
public:
    int emp_id;
    string year_of_join;
};

class EmployeeDetails : public Person, Employee
{
public:
    void read_data()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Employee ID: ";
        cin >> emp_id;
        cout << "Age: ";
        cin >> age;
        cout << "Year of Join: ";
        cin >> year_of_join;
    }

    void print_data()
    {
        cout << endl
             << "Employee Details" << endl
             << "Name: " << name << endl
             << "Employee ID: " << emp_id << endl
             << "Age: " << age << endl
             << "Year of Join: " << year_of_join << endl;
    }
};

int main()
{
    EmployeeDetails employee;
    employee.read_data();
    employee.print_data();
    return 0;
}
