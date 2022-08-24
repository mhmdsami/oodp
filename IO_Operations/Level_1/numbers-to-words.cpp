#include <iostream>
#include <math.h>
using namespace std;

int number_of_place_values(int number)
{
    int length = 0;
    while (number > 0)
    {
        number /= 10;
        length++;
    }
    return length - 1;
}

int main()
{
    int number, digit, place;
    float multiplier;
    cin >> number;
    place = number_of_place_values(number);
    while (number)
    {
        multiplier = pow(10, place);
        digit = number / multiplier;
        number = number - digit * multiplier;
        switch (digit)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
        place--;
    }

    return 0;
}