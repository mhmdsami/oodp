#include <iostream>
using namespace std;

class ReceiveMesurement
{
public:
    int length, breadth;

    ReceiveMesurement()
    {
        cin >> length >> breadth;
    }
};

class CalculateArea : public ReceiveMesurement
{
public:
    CalculateArea()
    {
        cout << 27 * length * breadth;
    }
};

int main()
{
    CalculateArea mt;
    return 0;
}
