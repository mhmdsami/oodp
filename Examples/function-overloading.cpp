#include <iostream>
using namespace std;

class printData
{
public:
    void print(int i)
    {
        cout << "Printing int: " << i << endl;
    }
    void print(double f)
    {
        cout << "Printing float: " << f << endl;
    }
    void print(char *c)
    {
        cout << "Printing character: " << c << endl;
    }
};

int main()
{
    printData pd;

    pd.print(1);
    pd.print(50.0);
    pd.print("help");
    return 0;
}