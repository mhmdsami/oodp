#include <iostream>
using namespace std;

int main()
{
    int total_minutes, hours, minutes;
    cin >> total_minutes;
    hours = total_minutes / 60;
    minutes = total_minutes % 60;
    cout << hours << " Hours and " << minutes << " Minutes";
    return 0;
}