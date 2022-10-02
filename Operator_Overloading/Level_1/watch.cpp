#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time()
    {
        cin >> hour >> minute >> second;
    }

    void is_valid()
    {
        if (hour > 23 || minute > 59 || second > 59)
            cout << "Invalid time format\n";
    }

    bool operator==(Time t2)
    {
        return (hour == t2.hour && minute == t2.minute && second == t2.second);
    }
};

int main()
{
    Time t1, t2;
    t1.is_valid();
    t2.is_valid();

    if (t1 == t2)
    {
        cout << "Both clocks are showing the same time";
    }
    else
    {
        cout << "Clocks are showing different times";
    }
    return 0;
}
