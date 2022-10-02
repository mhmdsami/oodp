#include <iostream>
#include <malloc.h>
using namespace std;

class Gift
{
public:
    virtual void Cubes() = 0;
};

class Birthday : public Gift
{
public:
    int *a, n;
    void Cubes()
    {
        cin >> n;
        a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n / 2; i += 2)
        {
            int temp = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = temp;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
};

int main()
{
    Birthday obj;
    obj.Cubes();
    return 0;
}
