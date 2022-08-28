#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a, b;
    cout << "Enter number to be swaped: ";
    cin >> a >> b;
    cout << "Before swaping: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After swaping: " << a << " " << b;
    return 0;
}