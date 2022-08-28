#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    string str;
    getline(cin, str);
    str[0] = toupper(str[0]);
    for (i = 1; i < str.length(); i++)
    {
        if (isspace(str[i - 1]))
        {
            str[i] = toupper(str[i]);
        }
    }
    cout << str;
    return 0;
}