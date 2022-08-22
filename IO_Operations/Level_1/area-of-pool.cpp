#include <iostream>
using namespace std;

int main()
{
    int radius, side, circular_pool, rectangular_pool;
    cin >> radius >> side;
    circular_pool = 3.14 * radius * radius;
    rectangular_pool = side * side;
    if (circular_pool > rectangular_pool)
        cout << "I Prefer Centre 1";
    else
        cout << "I Prefer Centre 2";
    return 0;
}