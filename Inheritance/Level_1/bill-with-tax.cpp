#include <iostream>
using namespace std;

class Market
{
public:
    int prices[5], total = 0;
};

class Customer : public Market
{
public:
    void items()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> prices[i];
            total += prices[i];
        }
    }

    void buy()
    {
        cout << "Subtotal = $" << total << endl;
        float tax = 0.06 * total;
        cout << "Tax = $" << tax << endl;
        cout << "Total = $" << total + tax << endl;
    }
};

int main()
{
    Customer c;
    c.items();
    c.buy();
    return 0;
}