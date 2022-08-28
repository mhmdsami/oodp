#include <iostream>
#include <malloc.h>
using namespace std;

int largest_element(int *arr, int len)
{
    int largest = *arr, i;
    for (i = 0; i < len; i++)
    {
        if (*(arr + i) > largest)
        {
            largest = *(arr + i);
        }
    }
    return largest;
}

int main()
{
    int n, *arr, i;
    cout << "Enter the length of the array: ";
    cin >> n;
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> *(arr + i);
    }
    cout << "The largest element is " << largest_element(arr, n);
    return 0;
}