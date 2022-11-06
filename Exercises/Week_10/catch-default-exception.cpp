#include <iostream>
using namespace std;

void throw_exception()
{
    throw "This is an exception";
}

int main()
{
    try
    {
        throw_exception();
    }
    catch (...) // catches any exception
    {
        cerr << "Exception caught!" << endl;
    }
    return 0;
}
