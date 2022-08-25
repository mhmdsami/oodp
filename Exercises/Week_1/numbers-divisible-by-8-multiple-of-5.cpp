#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 1000; i <= 2000; i++)
    {
        if (i % 40 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}