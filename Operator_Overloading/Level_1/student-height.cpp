#include <iostream>
using namespace std;

class Student
{
    int feet, inches;

public:
    Student()
    {
        cin >> feet >> inches;
    }

    void is_valid()
    {
        if (inches > 11)
            cout << "Invalid" << endl;
    }

    bool operator>(Student s2)
    {
        if (feet > s2.feet)
        {
            return true;
        }
        else if (feet == s2.feet && inches > s2.inches)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Student s1, s2;
    s1.is_valid();
    s2.is_valid();

    if (s1 > s2)
    {
        cout << "Student 1 is taller";
    }
    else
    {
        cout << "Student 2 is taller";
    }
    return 0;
}
