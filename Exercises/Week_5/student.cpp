#include <iostream>
using namespace std;

class Student
{
private:
    string name;

public:
    Student(string name = "Unknown")
    {
        this->name = name;
    }

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1("Tal"), s2;
    cout << "Details of s1" << endl;
    s1.displayName();
    cout << "Details of s2" << endl;
    s2.displayName();
    return 0;
}
