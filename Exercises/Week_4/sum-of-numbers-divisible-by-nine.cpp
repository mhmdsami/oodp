#include <iostream>
using namespace std;

class Sum
{
private:
    int sum = 0;

public:
    Sum()
    {
        for (int i = 100; i <= 200; i++)
        {
            if (i % 9 == 0)
                sum += i;
        }
    }
    ~Sum()
    {
        cout << "The sum is " << sum;
    }
};

int main()
{
    Sum sum;
    return 0;
}
