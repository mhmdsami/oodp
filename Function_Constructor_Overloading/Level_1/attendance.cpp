#include <iostream>
using namespace std;

class Attendance
{
public:
    Attendance()
    {
        cout << "No Attendance" << endl;
    }

    Attendance(string student_name)
    {
        cout << "Hello " << student_name << endl;
    }
};

int main()
{
    string student_name;
    cin >> student_name;
    Attendance stdabs;
    Attendance stdpst(student_name);
    return 0;
}