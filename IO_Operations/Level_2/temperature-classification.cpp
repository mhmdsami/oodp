#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float celsius, fahrenheit;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << fixed << setprecision(2) << celsius << " Centigrade" << endl;
    if (celsius >= 150)
    {
        cout << "Very Hot";
    }
    else if (celsius >= 100)
    {
        cout << "Hot";
    }
    else
    {
        cout << "Moderate";
    }
    return 0;
}