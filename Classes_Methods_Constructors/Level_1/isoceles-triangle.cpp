#include <iostream>
using namespace std;

class Triangle
{
private:
    int a, b, c;
public:
    void readCoordinates()
    {
        cin >> a >> b >> c;
    }

    void isIsoceles()
    {
        if (a == b || a == c || b == c)
        {
            cout << "Can Form a ISOSCELES Triangle";
        }
        else 
        {
            cout << "Cant Form a ISOSCELES Triangle";
        }
    }
};

int main()
{
    Triangle triangle;
    triangle.readCoordinates();
    triangle.isIsoceles();
    return 0;
}
