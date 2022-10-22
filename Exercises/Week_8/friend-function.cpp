#include <iostream>
using namespace std;

class A;
class B;

class A
{
    int num;

public:
    A(int num = 0)
    {
        this->num = num;
    }

    friend int add(A, B);
};

class B
{
    int num;
    friend int add(A, B);

public:
    B(int num = 0)
    {
        this->num = num;
    }
};

int add(A a, B b)
{
    return a.num + b.num;
}

int main()
{
    A a(22);
    B b(93);
    cout << "Sum: " << add(a, b);
    return 0;
}