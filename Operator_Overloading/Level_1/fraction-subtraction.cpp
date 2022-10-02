#include <iostream>
using namespace std;

class Fraction
{
    int p, q;

public:
    void set()
    {
        cin >> p >> q;
    }

    void display()
    {
        if (q == 0)
        {
            cout << "Error";
            return;
        }
        cout << p << "/" << q << endl;
    }

    Fraction operator-(const Fraction &x)
    {
        Fraction y;
        y.p = p * x.q - q * x.p;
        y.q = q * x.q;
        return y;
    }
};

int main()
{
    Fraction x, y, z;
    x.set();
    y.set();
    z = x - y;
    z.display();
    return 0;
}
