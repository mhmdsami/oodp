#include <iostream>
using namespace std;

class Area
{
private:
    int length, breadth;

public:
    Area(int length)
    {
        this->length = length;
        this->breadth = length;

        cout << "The area of the square is " << length * breadth << endl;
    }

    Area(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;

        cout << "The area of the rectangle is " << length * breadth << endl;
    }
};

int main()
{
    Area a1(2), a2(3, 5);
    return 0;
}
