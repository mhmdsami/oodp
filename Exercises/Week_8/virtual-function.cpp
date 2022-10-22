#include <iostream>
using namespace std;

class Base
{
public:
    virtual void say_hi()
    {
        cout << "Hi from the Base Class" << endl;
    }

    void say_hello()
    {
        cout << "Hello from the Base Class" << endl;
    }
};

class Derived : public Base
{
public:
    void say_hi()
    {
        cout << "Hi from the Derived Class" << endl;
    }

    void say_hello()
    {
        cout << "Hello from the Derived Class" << endl;
    }
};

int main()
{
    Base *ptr;
    Derived derived;

    ptr = &derived;

    ptr->say_hi();    // virtual function
    ptr->say_hello(); // non-virtual function
    return 0;
}
