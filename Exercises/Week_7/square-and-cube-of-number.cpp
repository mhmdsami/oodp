#include <iostream>
using namespace std;

class Number
{
public:
    int num;

    void get_number()
    {
        cout << "Enter a Number: ";
        cin >> num;
    }
};

class Square : public Number
{
public:
    int get_square()
    {
        return num * num;
    }
};

class Cube : public Number
{
public:
    int get_cube()
    {
        return num * num * num;
    }
};

int main()
{
    Square s;
    Cube c;
    s.get_number();
    cout << "The square of " << s.num << " is: " << s.get_square() << endl;
    c.get_number();
    cout << "The cube of " << c.num << " is: " << c.get_cube() << endl;
    return 0;
}
