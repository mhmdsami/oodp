#include <iostream>
using namespace std;

class Olympic
{
public:
    void distance(int d1, int d2)
    {
        cout << d1 + d2 << " meters" << endl;
    }

    void distance(int d1, int d2, int d3)
    {
        cout << d1 + d2 + d3 << " meters" << endl;
    }
};

int main()
{
    int d1, d2, d3, d4, d5;
    Olympic medal;
    cin >> d1 >> d2 >> d3 >> d4 >> d5;
    medal.distance(d1, d2);
    medal.distance(d3, d4, d5);
    return 0;
}