#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }

    void set_real()
    {
        cin >> real;
    }

    void set_imag()
    {
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }

    void sum(Complex num1, Complex num2)
    {
        real = num1.real + num2.real;
        imag = num1.imag + num2.imag;
    }
};

int main()
{
    Complex num1, num2, num3;
    cout << "Enter the Real part of the first number: ";
    num1.set_real();
    cout << "Enter the Imaginary part of the first number: ";
    num1.set_imag();
    cout << "Enter the Real part of the second number: ";
    num2.set_real();
    cout << "Enter the Imaginary part of the second number: ";
    num2.set_imag();
    num3.sum(num1, num2);
    cout << "The result is ";
    num3.display();
    return 0;
}