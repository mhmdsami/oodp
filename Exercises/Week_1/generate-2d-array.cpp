#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j;
    cout << "Enter Number of Rows & Columns: ";
    cin >> m >> n;
    cout << "[";
    for (i = 0; i < m; i++)
    {
        cout << "[";
        for (j = 0; j < n; j++)
        {
            cout << i * j;
            if (j != n - 1)
            {
                cout << ", ";
            }
        }
        cout << "]";
        if (i != m - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
    return 0;
}