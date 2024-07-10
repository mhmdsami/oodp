#include <iostream>
using namespace std;

class Diff
{
    int n;

public:
    int sum_of_square();
    int square_of_sum();
    friend void operator>>(istream &in, Diff &obj)
    {
        cin >> obj.n;
    }
};

int Diff::sum_of_square()
{
    return n * (n + 1) * (2 * n + 1) / 6;
}

int Diff::square_of_sum()
{
    return n * n * (n + 1) * (n + 1) / 4;
}

int main()
{
    Diff d;
    cin >> d;
    cout << d.square_of_sum() - d.sum_of_square();
    return 0;
}
