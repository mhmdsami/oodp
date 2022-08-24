#include <iostream>
#include <malloc.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, *arr, i = 0, j = 0;
        cin >> n;
        arr = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = arr[0];
        for (i = 0; i < n; i++)
        {
            int sum = 0;
            for (j = i; j < n; j++)
            {
                sum += arr[j];
                if (sum > max)
                {
                    max = sum;
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}