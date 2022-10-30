#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
    T x, y;

public:
    Arithmetic(T x, T y)
    {
        this->x = x;
        this->y = y;
    }

    T add()
    {
        return x + y;
    }

    T subtract()
    {
        return x - y;
    }

    T multiply()
    {
        return x * y;
    }

    T divide()
    {
        return x / y;
    }
};

int main()
{
    Arithmetic<int> s(22, 6);
    Arithmetic<float> t(1.15, 0.9);

    cout << "Integer:\nx + y = " << s.add() << "\nx - y = " << s.subtract() << "\nx * y = " << s.multiply() << "\nx / y = " << s.divide() << endl;
    cout << "Float:\nx + y = " << t.add() << "\nx - y = " << t.subtract() << "\nx * y = " << t.multiply() << "\nx / y = " << t.divide() << endl;
    return 0;
}
