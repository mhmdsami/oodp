#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "DivideByZeroError: Division by zero condition!";
    }

    return a / b;
}

int main()
{
    int x = 115, y = 22, z = 0;
    double res = 0;
    try
    {
        res = division(x, y);
        cout << "The result is " << res << endl;
        res = division(y, z);
        cout << "The result is" << res << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
    return 0;
}
