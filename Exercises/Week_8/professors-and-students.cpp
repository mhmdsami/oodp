#include <iostream>
#include <malloc.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    virtual void getdata()
    {
        cin >> this->name >> this->age;
    }

    virtual void putdata()
    {
        cout << this->name << " " << this->age << endl;
    }
};

class Professor : public Person
{
public:
    Professor()
    {
        this->cur_id = ++id;
    }

    int publications;
    static int id;
    int cur_id;

    void getdata()
    {
        cin >> this->name >> this->age >> this->publications;
    }

    void putdata()
    {
        cout << this->name << " "
             << this->age << " "
             << this->publications << " "
             << this->cur_id << endl;
    }
};
int Professor::id = 0;

class Student : public Person
{
public:
    Student()
    {
        this->cur_id = ++id;
    }

    int marks[6];
    static int id;
    int cur_id;

    void getdata()
    {
        cin >> this->name >> this->age;
        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
        }
    }

    void putdata()
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += marks[i];
        }
        cout << this->name << " "
             << this->age << " "
             << sum << " "
             << this->cur_id << endl;
    }
};
int Student::id = 0;

int main()
{

    int n, val;
    cin >> n;
    Person **per = (Person **)malloc(sizeof(Person) * n);

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            per[i] = new Professor;
        }
        else
        {
            per[i] = new Student;
        }

        per[i]->getdata();
    }

    for (int i = 0; i < n; i++)
    {
        per[i]->putdata();
    }

    return 0;
}