#include <iostream>
using namespace std;

int main()
{
    int i, length;
    string password;
    bool has_lowercase_letter = false, has_uppercase_letter = false, has_special_character = false, is_valid = false;
    cin >> password;
    length = password.length();
    if (length >= 6 && length <= 16)
    {
        for (i = 0; i < length; i++)
        {
            if (islower(password[i]))
            {
                has_lowercase_letter = true;
            }
            else if (isupper(password[i]))
            {
                has_uppercase_letter = true;
            }
            else if (password[i] == '$' || password[i] == '#' || password[i] == '@')
            {
                has_special_character = true;
            }
        }
        if (has_lowercase_letter && has_uppercase_letter && has_special_character)
        {
            is_valid = true;
        }
    }
    if (is_valid)
    {
        cout << "Valid Password";
    }
    else
    {
        cout << "Not a Valid Password";
    }
    return 0;
}
