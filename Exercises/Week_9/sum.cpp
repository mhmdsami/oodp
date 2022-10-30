#include <iostream>
using namespace std;

template <class T>
class Sum
{
    T num1, num2;

public:
    void get_data()
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    T sum()
    {
        return num1 + num2;
    }
};

int main()
{
    Sum<int> s;
    Sum<float> t;

    cout << "Integer Sum:\n";
    s.get_data();
    cout << "The integer sum is " << s.sum() << endl;

    cout << "Float Sum:\n";
    t.get_data();
    cout << "The float sum is " << t.sum() << endl;
    return 0;
}
