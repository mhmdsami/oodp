#include <iostream>
using namespace std;

int main()
{
    int angle1, angle2, angle3, sum_of_angles;
    cin >> angle1 >> angle2 >> angle3;
    sum_of_angles = angle1 + angle2 + angle3;
    if (sum_of_angles == 180)
        cout << "Angles are valid";
    else
        cout << "Angles are not valid";
    return 0;
}