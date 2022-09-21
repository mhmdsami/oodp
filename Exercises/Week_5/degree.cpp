#include <iostream>
using namespace std;

class Degree
{
public:
    void getDegree()
    {
        cout << "I got a degree" << endl;
    }
};

class Undergraduate : public Degree
{
public:
    void getDegree()
    {
        cout << "I am an Undergraduate" << endl;
    }
};

class Postgraduate : public Degree
{
public:
    void getDegree()
    {
        cout << "I am an Postgraduate" << endl;
    }
};

int main()
{
    Degree d1;
    Undergraduate d2;
    Postgraduate d3;
    d1.getDegree();
    d2.getDegree();
    d3.getDegree();
    return 0;
}