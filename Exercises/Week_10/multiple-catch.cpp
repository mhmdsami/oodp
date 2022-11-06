#include <iostream>

using namespace std;

void throw_exception()
{
    throw(1.15);
}

int main()
{
    try
    {
        cout << "before exception" << endl;
        throw_exception();
        cout << "after exception" << endl;
    }
    catch (int i)
    {
        cout << "integer exception caught: " << i;
    }
    catch (double d)
    {
        cout << "double exception caught: " << d;
    }
    catch (char c)
    {
        cout << "character exception caught: " << c;
    }
}
