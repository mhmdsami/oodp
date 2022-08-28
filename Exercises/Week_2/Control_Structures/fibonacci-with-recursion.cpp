#include <iostream>
using namespace std;

int fibo(int number)
{
    if (number <= 1)
    {
        return number;
    }

    return fibo(number - 1) + fibo(number - 2);
}

int main()
{
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    for (i = 0; i < num; i++)
    {
        cout << fibo(i) << " ";
    }
    return 0;
}