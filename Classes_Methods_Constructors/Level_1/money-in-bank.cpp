#include <iostream>
using namespace std;

class Bank
{
public:
    void totalMoney(int n)
    {
        int weeks = n / 7;
        int days = n % 7;

        int money = weeks * 28 + 7 * (weeks - 1) * weeks / 2;
        money += (days * weeks + days * (days + 1) / 2);
        cout << money;
    }
};

int main()
{
    int n;
    Bank bank;
    cin >> n;
    bank.totalMoney(n);
    return 0;
}