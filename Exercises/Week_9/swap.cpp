#include <iostream>
using namespace std;

template <typename T>
void my_swap(T x, T y)
{
    cout << "Before Swaping: "
         << "\n"
         << "x = " << x << "\ty = " << y << "\n";

    T temp;
    temp = x;
    x = y;
    y = temp;

    cout << "Ater Swaping: "
         << "\n"
         << "x = " << x << "\ty = " << y << "\n";
}

int main()
{
    my_swap<int>(10, 20);
    my_swap<float>(3.5, 5.3);
    my_swap<char>('t', 's');
    return 0;
}
