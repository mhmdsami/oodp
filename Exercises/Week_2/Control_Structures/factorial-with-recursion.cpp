#include <iostream>
using namespace std;

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }

    return number * factorial(number - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 0)
    {
        cout << "The factorial of " << num << " is " << factorial(num);
    }
    else
    {
        cout << "This program does not calculate the factorial of a negative number!";
    }
    return 0;
}