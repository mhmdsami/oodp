#include <iostream>
using namespace std;

class PyramidPattern
{
private:
    int row;

public:
    PyramidPattern(int row)
    {
        this->row = row;
    }

    ~PyramidPattern()
    {
        for (int i = 1; i <= row; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    PyramidPattern pattern(n);
    return 0;
}
