#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int letters_count = 0, numbers_count = 0, i;
    string str;
    getline(cin, str);
    for (i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            letters_count++;
        }
        else if (isdigit(str[i]))
        {
            numbers_count++;
        }
    }
    cout << "Letters " << letters_count << endl
         << "Numbers " << numbers_count;
    return 0;
}
