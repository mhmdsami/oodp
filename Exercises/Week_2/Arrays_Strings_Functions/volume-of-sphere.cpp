#include <iostream>
#include <math.h>
using namespace std;

inline float volume(int radius)
{
    return 4 / 3 * 3.14159 * pow(radius, 3);
}

int main()
{
    int r;
    cout << "Enter the radius of the sphere: ";
    cin >> r;
    cout << "The volume of the sphere is " << volume(r);
    return 0;
}