#include <iostream>
using namespace std;

class Bank
{
private:
    int amount;

public:
    Bank()
    {
        this->amount = 50;
    }

    Bank(int amount)
    {
        this->amount = 50 + amount;
    }

    void displayAmount()
    {
        cout << "Amount: " << amount << endl;
    }
};

int main()
{
    Bank b1(20), b2;
    cout << "Amount in s1" << endl;
    b1.displayAmount();
    cout << "Amount in b2" << endl;
    b2.displayAmount();
    return 0;
}
