#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int number_of_lions, number_of_available_candies;
        cin >> number_of_lions >> number_of_available_candies;
        while (number_of_lions--)
        {
            int number_of_candies;
            cin >> number_of_candies;
            number_of_available_candies -= number_of_candies;
        }
        if (number_of_available_candies >= 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}