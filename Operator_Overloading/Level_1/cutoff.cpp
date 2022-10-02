#include <iostream>
using namespace std;

class Cutoff
{
    int maths, physics, chem;

    friend void operator>>(istream &in, Cutoff &obj)
    {
        in >> obj.maths >> obj.physics >> obj.chem;
    }

public:
    int getCutoff()
    {
        return (maths + 0.5 * (physics + chem));
    }
};

int main()
{
    Cutoff marks;
    cin >> marks;
    cout << marks.getCutoff();
    return 0;
}
