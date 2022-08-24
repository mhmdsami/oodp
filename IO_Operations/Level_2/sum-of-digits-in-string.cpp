#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0, i;
        char str[10001];
        cin >> str;
        for (i = 0; i < strlen(str); i++)
        {
            if (isdigit(str[i]))
            {
                sum += str[i] - 48;
            }
        }
        cout << sum << endl;
    }
    return 0;
}