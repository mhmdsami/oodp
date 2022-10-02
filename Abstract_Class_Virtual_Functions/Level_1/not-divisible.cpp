#include <iostream>
using namespace std;

class Employees
{
public:
    int n;
    virtual void BuyingGame() = 0;
};

class Reward : public Employees
{
public:
    void BuyingGame()
    {
        int count = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 2; j <= 10; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    break;
                }
            }
        }
        cout << n - count;
    }
};

int main()
{
    Reward obj;
    obj.BuyingGame();
    return 0;
}
