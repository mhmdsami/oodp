#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1, num2;
    cin >> num1 >> num2;
    cout << fixed << setprecision(6) << num1 << endl;
    cout << fixed << setprecision(6) << num2 << endl;
    return 0;
}