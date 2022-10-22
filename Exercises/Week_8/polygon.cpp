#include <iostream>
using namespace std;

class Polygon
{
public:
    virtual void area() = 0;
};

class Triangle : public Polygon
{
    float base, height;
    void area()
    {
        cout << "Enter base & height: ";
        cin >> base >> height;
        cout << "The area of the triangle is " << 0.5 * base * height << endl;
    }
};

class Rectangle : public Polygon
{
    float length, breadth;
    void area()
    {
        cout << "Enter length & breadth: ";
        cin >> length >> breadth;
        cout << "The area of the rectangle is " << length * breadth << endl;
    }
};

int main()
{
    Polygon *ptr;

    ptr = new Triangle;
    ptr->area();

    ptr = new Rectangle;
    ptr->area();
    return 0;
}