#include <iostream>
using namespace std;

class Area
{
public:
    void print_area(float length, float breadth)
    {
        cout << length * breadth << endl;
    }
};

class Perimeter
{
public:
    void print_peri(float length, float breadth)
    {
        cout << 2 * (length + breadth) << endl;
    }
};

class Rectangle : private Area, private Perimeter
{
private:
    float length, breadth;

public:
    void get_data()
    {
        cin >> length >> breadth;
    }

    void area_calc()
    {
        print_area(length, breadth);
    }

    void peri_calc()
    {
        print_peri(length, breadth);
    }
};

int main()
{
    Rectangle r;
    r.get_data();
    r.area_calc();
    r.peri_calc();
    return 0;
}