#include <iostream>
using namespace std;

class Radius
{
protected:
    double radius;

public:
    void set_radius()
    {
        cout << "Enter the radius: ";
        cin >> radius;
    }
};

class PI
{
protected:
    double PI = 3.14159;
};

class Area : public Radius, PI
{
public:
    double get_area()
    {
        return PI * radius * radius;
    }
};

class Volume : public Radius, PI
{
public:
    double get_volume()
    {
        return 4 * PI * radius * radius * radius / 3;
    }
};

int main()
{
    Area area;
    Volume volume;
    area.set_radius();
    cout << "The area of the circle is " << area.get_area() << endl;
    volume.set_radius();
    cout << "The volume of the sphere is " << volume.get_volume() << endl;
    return 0;
}