#include <iostream>
using namespace std;

class FloydTriangle
{
public:
    FloydTriangle(int n)
    {
        int i, j, num = 1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i + 1; j++)
            {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    FloydTriangle triangle(n);
    return 0;
}
