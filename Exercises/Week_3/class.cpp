#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;

public:
    Student(string name, int roll_no)
    {
        this->name = name;
        this->roll_no = roll_no;
    }

    void display_details()
    {
        cout << "Name: " << name << endl
             << "Roll No: " << roll_no << endl;
    }
};

int main()
{
    Student student1("John", 2);
    student1.display_details();
    return 0;
}
