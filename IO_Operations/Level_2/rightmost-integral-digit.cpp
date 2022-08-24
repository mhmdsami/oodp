#include <iostream>
using namespace std;

int main()
{
    float spacenum;
    cin >> spacenum;
    int digit = (int)spacenum % 10;
    cout << digit;
    return 0;
}