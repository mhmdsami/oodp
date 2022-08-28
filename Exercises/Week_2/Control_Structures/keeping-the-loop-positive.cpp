#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 0)
        {
            cout << "You entered a negative number D:";
            break;
        }
        sum += num;
        cout << "The sum is " << sum << endl;
    }
    return 0;
}