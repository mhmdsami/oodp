#include <iostream>
using namespace std;

class School
{
public:
    string name, roll_no;
    virtual void getdata(){};
    virtual void display(){};
};

class District : public School
{
public:
    void getdata();
    void display();
};

void District::getdata()
{
    cin >> roll_no >> name;
}

void District::display()
{
    cout << "Student Name: " << name << endl
         << "Student Roll No: " << roll_no;
}

int main()
{
    School *ptr;
    District obj;
    ptr = &obj;
    ptr->getdata();
    ptr->display();
    return 0;
}
