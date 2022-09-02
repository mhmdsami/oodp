#include <iostream>
using namespace std;

class A
{
public:
    int x;
    string name;
    A(int a)
    {
        x = a;
    }
    A(A &i)
    {
        x = i.x;
    }
};

int main()
{
    A a1(20); // calling the parameterized constructors
    A a2(a1); // calling the copy constructor
    cout << a2.x;
    return 0;
}