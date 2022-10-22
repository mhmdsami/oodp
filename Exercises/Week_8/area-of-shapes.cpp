#include <iostream>
#define PI 3.14159
using namespace std;

class Shape
{
public:
    virtual void compute_area() = 0;
};

class Rectangle : public Shape
{
public:
    float length, breadth;
    void compute_area()
    {
        cout << "Enter length & breadth: ";
        cin >> length >> breadth;
        cout << length * breadth << endl;
    }
};

class Square : public Shape
{
    float side;
    void compute_area()
    {
        cout << "Enter Side: ";
        cin >> side;
        cout << side * side << endl;
    }
};

class Cricle : public Shape
{
    float radius;
    void compute_area()
    {
        cout << "Enter Radius: ";
        cin >> radius;
        cout << PI * radius * radius << endl;
    }
};

int main()
{
    Shape *ptr;

    ptr = new Rectangle;
    ptr->compute_area();

    ptr = new Square;
    ptr->compute_area();

    ptr = new Cricle;
    ptr->compute_area();
    return 0;
}