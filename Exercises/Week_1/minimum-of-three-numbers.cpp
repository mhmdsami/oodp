#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int min = num3;
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num3)
    {
        min = num2;
    }
    cout << min;
    return 0;
}