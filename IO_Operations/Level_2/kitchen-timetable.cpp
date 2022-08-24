#include <iostream>
using namespace std;

int main()
{
    int t, n, a[10002], b[10002];
    cin >> t;
    while (t--)
    {
        int i, count = 0;
        cin >> n;
        a[0] = 0;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        for (i = 1; i <= n; i++)
            cin >> b[i];
        for (i = 1; i <= n; i++)
        {
            if (a[i] - a[i - 1] >= b[i])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}