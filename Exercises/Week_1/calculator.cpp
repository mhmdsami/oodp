#include <iostream>
using namespace std;

int main()
{
    int opt_code, num1 = 0, num2 = 0;
    cout << "MENU" << endl
         << "1. Add" << endl
         << "2. Subtract" << endl
         << "3. Multiply" << endl
         << "4. Divide" << endl
         << "5. Modulus" << endl
         << "Enter your choice: ";
    cin >> opt_code;
    cout << "Enter your two numbers: ";
    cin >> num1 >> num2;
    cout << "Result: ";
    switch (opt_code)
    {
    case 1:
        cout << num1 + num2;
        break;
    case 2:
        cout << num1 - num2;
        break;
    case 3:
        cout << num1 * num2;
        break;
    case 4:
        cout << num1 / num2;
        break;
    case 5:
        cout << num1 % num2;
        break;
    default:
        cout << "Invalid Option";
    }
    return 0;
}
