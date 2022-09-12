#include <iostream>
#include <cstdlib>
using namespace std;

class Building {
private:
    int length, width, ratePerSqFeet;
public:
    Building(int length, int width, int ratePerSqFeet)
    {
        this->length = length;
        this->width = width;
        this->ratePerSqFeet = ratePerSqFeet;
    }

    void calculateCost()
    {
        cout << "Cost of the Building : " << length * width * ratePerSqFeet << endl;
    }

    void determineSuitability()
    {
        cout << "Stability : ";
        if (abs(length - width) > 10) 
        {
            cout << "Not Suitable" << endl;
        }
        else
        {
            cout << "Suitable" << endl;
        }
    }

};

int main()
{
    int length, width, ratePerSqFeet;
    cin >> length >> width >> ratePerSqFeet;
    Building building(length, width, ratePerSqFeet);
    building.calculateCost();
    building.determineSuitability();
    return 0;
}
