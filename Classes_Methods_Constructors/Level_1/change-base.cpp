#include <iostream>
using namespace std;

class ChangeBase
{
public:
    int n, k, rem = 0;
    void sumBase(int n, int k)
    {
        while(n != 0)
        {
           rem += (n % k);
           n /= k;
        } 
       cout << rem;
    }
};

int main()
{
    int n, k;
    cin >> n >> k;
    ChangeBase Convert;
    Convert.sumBase(n, k);
    return 0;
}