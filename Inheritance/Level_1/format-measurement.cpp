#include <iostream>
using namespace std;

class RecieveMeasurement
{
public:
    int length, breadth;
    RecieveMeasurement()
    {
        cin >> length >> breadth;
    }
};

class FormatMesurement : public RecieveMeasurement
{
public:
    void display()
    {
        cout << "Length: " << length << " metres" << endl
             << "Breadth: " << breadth << " metres" << endl;
    }
};

int main()
{
    FormatMesurement mt;
    mt.display();
    return 0;
}
