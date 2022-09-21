#include <iostream>
#define PI 3.14159
using namespace std;

void volume(int length)
{
    cout << "The volume of the cube is " << length * length * length << endl;
}

void volume(int height, int radius)
{
    cout << "The volume of the cylinder is " << PI * radius * radius * height << endl;
}

void volume(double radius)
{
    cout << "The volume of the sphere is " << 4 / 3 * PI * radius * radius * radius << endl;
}

int main()
{
    volume(5);
    volume(4, 5);
    volume(7.0);
    return 0;
}