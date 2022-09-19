#include <iostream>
using namespace std;

class Volume
{
private:
    int side;

public:
    Volume(int side)
    {
        this->side = side;
    }

    ~Volume()
    {
        cout << "The volume of a cube of side length " << side << " is " << side * side * side;
    }
};

int main()
{
    int n;
    cout << "Enter the Side Length: ";
    cin >> n;
    Volume volume(n);
    return 0;
}
