#include <iostream>
using namespace std;

class Country
{
private:
    int area, density;
    char *statename;

public:
    Country(char statename[100], int area, int density)
    {
        this->statename = statename;
        this->area = area;
        this->density = density;

        cout << "Country: INDIA" << endl 
             << "State: " << this->statename << endl 
             << "Area: " << this->area << endl 
             << "Density: " << this->density;
    }
};

int main()
{
    int area, density;
    char statename[100];
    cin >> statename >> area >> density;
    Country statesofindia(statename, area, density);
    return 0;
}