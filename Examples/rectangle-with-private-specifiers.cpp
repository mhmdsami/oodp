#include <iostream>
using namespace std;

class Rectangle
{
public:
    double length;
    void setWidth(double wid);
    double getWidth(void);

private:
    double width;
};

double Rectangle::getWidth(void)
{
    return width;
}

void Rectangle::setWidth(double wid)
{
    width = wid;
}

int main()
{
    Rectangle rect1;

    // rect1 specification
    rect1.length = 10.0;
    cout << "Length of box: " << rect1.length << endl;

    rect1.setWidth(10.0);
    cout << "Width of the box: " << rect1.getWidth() << endl;
    return 0;
}