#include <iostream>
using namespace std;

class Cube
{
private:
    int n;

public:
    Cube(int n)
    {
        this->n = n;
    }

    ~Cube()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "cube of " << i << " is: " << i * i * i << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    Cube cube(n);
    return 0;
}
