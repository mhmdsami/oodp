#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }

    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(int a)
    {
        Complex result;
        result.real = real + a;
        result.imag = imag;
        return result;
    }

    Complex operator+(Complex obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Complex i1(a, b), i2(a, b);
    i2 = i2 + c;
    i1.print();
    i2.print();
    (i1 + i2).print();
    return 0;
}
