#include <iostream>
#define PI 3.14159
using namespace std;

void area(int side)
{
    cout << "The area of the square is " << side * side << endl;
}

void area(double radius)
{
    cout << "The area of the circle is " << PI * radius * radius << endl;
}

void area(int length, int breadth)
{
    cout << "The area of the rectangle is " << length * breadth << endl;
}

int main()
{
    area(5);
    area(5.0);
    area(3, 5);
    return 0;
}
