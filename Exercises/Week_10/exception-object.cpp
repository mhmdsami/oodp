#include <iostream>
#include <exception>
using namespace std;

class DivideByZeroException : public exception
{
public:
    const char *what() const throw()
    {
        return "DivideByZeroException: Cannot divide by zero!";
    }
};

double division(int a, int b)
{
    if (b == 0)
    {
        DivideByZeroException e;
        throw e;
    }

    return a / b;
}

int main()
{
    int x = 115, y = 0;
    double res = 0;
    try
    {
        res = division(x, y);
        cout << "The result is" << res << endl;
    }
    catch (DivideByZeroException &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}
