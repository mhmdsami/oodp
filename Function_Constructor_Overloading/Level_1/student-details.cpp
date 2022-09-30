#include <iostream>
using namespace std;

class Student
{
public:
    void identity(string name, int id)
    {
        cout << name << " " << id << endl;
    }

    void identity(int id, string name)
    {
        cout << name << " " << id << endl;
    }
};

int main()
{
    int id;
    string name;
    Student details;
    cin >> name >> id;
    details.identity(name, id);
    cin >> id >> name;
    details.identity(id, name);
    return 0;
}