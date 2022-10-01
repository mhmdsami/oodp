#include <iostream>
using namespace std;

class Time
{
public:
    int hour, minute, second;
};

class ConvertTime : public Time
{
public:
    void intime()
    {
        cin >> hour >> minute >> second;
    }

    void outtime()
    {
        cout << hour << ":" << minute << ":" << second;
    }
};

int main()
{
    ConvertTime time;
    time.intime();
    time.outtime();
    return 0;
}
