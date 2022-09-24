#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    int min = (x < y) ? x : y;

    for (int i = min; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
    }
    return 1;
}

class Rational
{
private:
    int p, q;

public:
    Rational(int p = 0, int q = 0)
    {
        this->p = p;
        this->q = q;
    }

    void set(int p, int q)
    {
        this->p = p;
        this->q = q;
    }

    void display()
    {
        cout << p << "/" << q << endl;
    }

    Rational operator+(const Rational &x)
    {
        Rational y;
        y.p = p * x.q + q * x.p;
        y.q = q * x.q;
        int d = gcd(y.p, y.q);
        y.p = y.p / d;
        y.q = y.q / d;
        return y;
    }

    Rational operator-(const Rational &x)
    {
        Rational y;
        y.p = p * x.q - q * x.p;
        y.q = q * x.q;
        int d = gcd(y.p, y.q);
        y.p = y.p / d;
        y.q = y.q / d;
        return y;
    }
};

int main()
{
    Rational x1(2, 3), x2(1, 2), y;
    y = x1 + x2;
    cout << "Rational Addition: ";
    y.display();
    y = x1 - x2;
    cout << "Rational Subtraction: ";
    y.display();
    return 0;
}
