#include <iostream>
using namespace std;

class Complex
{
private:
    double real, imag;

public:
    Complex(double real = 0, double imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(const Complex &comp)
    {
        Complex result;
        result.real = real + comp.real;
        result.imag = imag + comp.imag;
        return result;
    }

    Complex operator-(const Complex &comp)
    {
        Complex result;
        result.real = real - comp.real;
        result.imag = imag - comp.imag;
        return result;
    }
};

int main()
{
    Complex c1(6, 4), c2(2, 9), c3;
    c3 = c1 + c2;
    cout << "Complex Addition: ";
    c3.display();
    c3 = c1 - c2;
    cout << "Complex Subtraction: ";
    c3.display();
    return 0;
}
