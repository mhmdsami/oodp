#include <iostream>
using namespace std;

class Binary
{
private:
    int dec = 0, bin = 0;

public:
    Binary(int dec)
    {
        int i, rem, place = 1;
        this->dec = dec;
        for (i = 0; dec > 0; i++)
        {
            rem = dec % 2;
            dec /= 2;
            bin += rem * place;
            place *= 10;
        }
        cout << "The Binary equivalent of " << this->dec << " is " << this->bin;
    }
};

int main()
{
    int n;
    cout << "Enter a Decimal Number: ";
    cin >> n;
    Binary bin(n);
    return 0;
}
