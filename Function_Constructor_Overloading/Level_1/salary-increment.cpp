#include <iostream>
using namespace std;

class Salary
{
public:
    void increment(int cursal)
    {
        cout << cursal << endl;
    }

    void increment(int cursal, int bonus)
    {
        cout << cursal + bonus << endl;
    }
};

int main()
{
    Salary empsal;
    int cursal, bonus;
    cin >> cursal;
    empsal.increment(cursal);
    cin >> cursal >> bonus;
    empsal.increment(cursal, bonus);
    return 0;
}
