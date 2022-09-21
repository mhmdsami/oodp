#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char str[30];

public:
    void getString()
    {
        cin >> str;
    }

    int operator==(String s)
    {
        if (!strcmp(s.str, str))
        {
            return 1;
        }

        return 0;
    }
};

int main()
{
    String s1, s2;

    cout << "Enter first string: ";
    s1.getString();
    cout << "Enter second string: ";
    s2.getString();
    if (s1 == s2)
    {
        cout << "Strings are Equal";
    }
    else
    {
        cout << "Strings are Not Equal";
    }

    return 0;
}
