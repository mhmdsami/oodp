#include <iostream>
using namespace std;

class Date
{
public:
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
};

class Check : public Date
{
private:
    int n;

public:
    void day()
    {
        cin >> n;
    }

    void display()
    {
        cout << days[n - 1];
    }
};

int main()
{
    Check obj;
    obj.day();
    obj.display();
    return 0;
}
