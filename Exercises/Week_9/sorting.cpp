#include <iostream>
using namespace std;

template <typename T>
void sort(T *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

template <typename T>
void print(T *arr, int len)
{
    cout << "[";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
        if (i != len - 1)
            cout << ", ";
    }
    cout << "]\n";
}

int main()
{
    int int_arr[5] = {2, 5, 10, 1, 6};
    float float_arr[3] = {2.4, 2.32, 2.36};

    sort<int>(int_arr, 5);
    print<int>(int_arr, 5);

    sort<float>(float_arr, 3);
    print<float>(float_arr, 3);
    return 0;
}
