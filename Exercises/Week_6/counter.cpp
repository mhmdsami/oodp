#include <iostream>
using namespace std;

class Counter
{
private:
    int number;

public:
    Counter(int number = 0)
    {
        this->number = number;
    }

    void display()
    {
        cout << "Count: " << number << endl;
    }

    void operator++()
    {
        ++number;
    }
};

int main()
{
    Counter c1, c2(5);
    ++c1;
    ++c2;
    cout << "counter c1" << endl;
    c1.display();
    cout << "counter c2" << endl;
    c2.display();
    return 0;
}
