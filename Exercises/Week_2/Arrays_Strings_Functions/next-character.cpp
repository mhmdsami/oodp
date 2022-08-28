#include <iostream>
using namespace std;

int main()
{
    int i;
    string str;
    cin >> str;
    for (i = 0; i < str.length(); i++)
    {
        char next_char;
        if (str[i] == 'z' || str[i] == 'Z')
        {
            next_char = (int)str[i] - 25;
        }
        else
        {
            next_char = (int)str[i] + 1;
        }
        str[i] = next_char;
    }
    cout << str;
    return 0;
}