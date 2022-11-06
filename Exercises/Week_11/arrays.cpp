#include <iostream>
#include <array>
using namespace std;

template <typename T, int n>
void print_array(array<T, n> arr)
{
    for (auto &element : arr)
    {
        cout << element << " ";
    }
    cout << "\n";
}

int main()
{
    array<int, 5> arr = {1, 2, 3};
    cout << "The element of the array: ";
    print_array<int, arr.size()>(arr);

    arr.fill(115);
    cout << "The elements of the array after filling: ";
    print_array<int, arr.size()>(arr);

    arr[1] = 22;
    arr[3] = 22;
    cout << "The elements of the array after mutating: ";
    print_array<int, arr.size()>(arr);

    cout << "The element arr[1]: " << arr.at(1) << "\n";
    cout << "The element arr[2]: " << arr.at(2) << "\n";

    return 0;
}
