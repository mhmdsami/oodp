#include <iostream>
using namespace std;

#define PI 3.14159

class Circle
{
private:
    float radius;

public:
    Circle(float radius)
    {
        this->radius = radius;
    }

    float get_perimeter()
    {
        return 2 * PI * radius;
    }

    float get_area()
    {
        return PI * radius * radius;
    }
};

int main()
{
    Circle circle(5);
    cout << "The perimeter of the circle is " << circle.get_perimeter() << endl
         << "The area of the circle is " << circle.get_area();
    return 0;
}
