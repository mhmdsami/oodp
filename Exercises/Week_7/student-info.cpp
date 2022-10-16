#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    string reg_no, dept;
    int year;

    void get_details()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Registration Number: ";
        cin >> reg_no;
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Enter Year: ";
        cin >> year;
    }

    void display_details()
    {
        cout << endl
             << "Student Details" << endl
             << "Name: " << name << endl
             << "Registration Number: " << reg_no << endl
             << "Age: " << age << endl
             << "Year: " << year << endl;
    }
};

int main()
{
    Student student;
    student.get_details();
    student.display_details();
    return 0;
}
