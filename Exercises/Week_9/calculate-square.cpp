#include <iostream>
using namespace std;

template <typename T>
T calculate_square(T num)
{
    return num * num;
}

int main()
{
    cout << calculate_square<int>(5) << endl;
    cout << calculate_square<float>(3.6) << endl;
    cout << calculate_square<int>(8) << endl;
    return 0;
}
