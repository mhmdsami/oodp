#include <iostream>
using namespace std;

void test_handler()
{
    try
    {
        throw "something went wrong";
    }
    catch (const char *msg)
    {
        cout << "Caught exception inside test_handler" << endl;
        throw msg; // rethrow exception out of function
    }
}

int main()
{
    try
    {
        test_handler();
    }
    catch (const char *msg)
    {
        cout << "Caught exception inside main: " << msg << endl;
    }
    return 0;
}
