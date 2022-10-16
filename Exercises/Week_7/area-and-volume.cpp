#include <iostream>
using namespace std;

class Radius
{
protected:
    double radius;

public:
    void set_radius()
    {
        cin >> radius;
    }

    double get_radius()
    {
        return radius;
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
        double radius = get_radius();
        return PI * radius * radius;
    }
};

class Volume : public Area
{
public:
    double get_volume()
    {
        double radius = get_radius(), area = get_area();
        return 4 * area * radius / 3;
    }
};

int main()
{
    Volume obj;
    obj.set_radius();
    cout << "The area of the circle is " << obj.get_area() << endl;
    cout << "The volume of the sphere is " << obj.get_volume() << endl;
    return 0;
}