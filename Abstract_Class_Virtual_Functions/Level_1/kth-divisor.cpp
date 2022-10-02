#include <iostream>
using namespace std;

class Problem
{
public:
    int n, k, i;
    virtual void Divisor() = 0;
};

class Calculation : public Problem
{
public:
    void Divisor()
    {
        cin >> n >> k;
        int count;
        for (i = 1; i <= n; ++i)
        {
            if (n % i == 0)
            {
                count++;
                if (count == k)
                {
                    cout << i;
                }
            }
        }
        cout << -1;
    }
};

int main()
{
    Calculation obj;
    obj.Divisor();
    return 0;
}
