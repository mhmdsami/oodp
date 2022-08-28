#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cin >> number;
    if (number > 0)
    {
        cout << number << " is positive number";
    }
    else if (number == 0)
    {
        cout << "It is zero!";
    }
    else
    {
        cout << number << " is negative number";
    }
    return 0;
}