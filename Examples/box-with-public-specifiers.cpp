#include <iostream>
using namespace std;

class Box
{
public:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box box1;
    Box box2;
    double volume;

    // box1 specification
    box1.height = 4.0;
    box1.length = 7.0;
    box1.breadth = 9.0;

    // box2 specification
    box2.height = 11.0;
    box2.length = 13.0;
    box2.breadth = 15.0;

    // volume of box1
    volume = box1.height * box1.length * box1.breadth;
    cout << "Volume of Box1: " << volume << endl;

    // volume of box2
    volume = box2.height * box2.length * box2.breadth;
    cout << "Volume of Box2: " << volume << endl;
    return 0;
}
