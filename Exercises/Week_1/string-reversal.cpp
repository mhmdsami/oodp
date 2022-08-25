#include <iostream>
using namespace std;

string reverse_string(string str, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
    return str;
}

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    string reversed_string = reverse_string(str, len);
    cout << reversed_string;
    return 0;
}
