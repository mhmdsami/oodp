#include <iostream>
using namespace std;

class Reverse
{
private:
    int num, rev = 0;

public:
    Reverse(int num)
    {
        this->num = num;
        while (num)
        {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }
    }

    ~Reverse()
    {
        cout << "The reverse of " << this->num << " is " << this->rev;
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Reverse rev(n);
    return 0;
}
