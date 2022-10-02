#include <iostream>
using namespace std;

class Diff
{
    int n;

public:
    int sumofsquare();
    int squareofsum();
    friend void operator>>(istream &in, Diff &obj)
    {
        cin >> obj.n;
    }
};

int Diff::sumofsquare()
{
    return n * (n + 1) * (2 * n + 1) / 6;
}

int Diff::squareofsum()
{
    return n * n * (n + 1) * (n + 1) / 4;
}

int main()
{
    Diff d;
    cin >> d;
    cout << d.squareofsum() - d.sumofsquare();
    return 0;
}
