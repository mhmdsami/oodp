#include <iostream>
using namespace std;

class printData
{
public:
    printData(int i)
    {
        cout << "Printing int: " << i << endl;
    }
    printData(double f)
    {
        cout << "Printing float: " << f << endl;
    }
    printData(char *c)
    {
        cout << "Printing character: " << c << endl;
    }
};

int main()
{
    printData pd1(1), pd2(08.5), pd3("hi");
    return 0;
}