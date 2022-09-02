#include <iostream>
using namespace std;

class Student
{
public:
    int rollno;
    string name;
    Student(int x, string str)
    {
        rollno = x;
        name = str;
    }
    Student(Student &s)
    {
        rollno = s.rollno;
        name = s.name;
    }
    void display()
    {
        cout << this->rollno << " " << this->name;
    }
};

int main()
{
    Student s1(54, "Ajay"); // calling the parameterized constructors
    Student s2(s1);         // calling the copy constructor
    s2.display();
    return 0;
}