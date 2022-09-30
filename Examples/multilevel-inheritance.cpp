#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};

class fourWheeler: public Vehicle
{
public:
    fourWheeler()
    {
        cout << "Object with four wheels are four wheeler" << endl;
    }
};

class Car: public fourWheeler
{
public:
    Car()
    {
        cout << "Car has four wheels" << endl;
    }
};

int main()
{
    Car obj;
    return 0;
}