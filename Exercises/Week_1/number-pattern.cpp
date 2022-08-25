#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 9; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}