#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float radius;
    float PI = 3.14, area, circumference;
    cin >> radius;
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    cout << fixed << setprecision(2) << area << endl
         << circumference;
    return 0;
}
