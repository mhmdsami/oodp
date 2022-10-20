#include <iostream>
using namespace std;

class Mammal
{
public:
    void print()
    {
        cout << "This is a Mammal" << endl;
    }
};

class MarineAnimal
{
public:
    void print()
    {
        cout << "This is a Marine Animal" << endl;
    }
};

class Whale : public Mammal, public MarineAnimal
{
public:
    void print()
    {
        cout << "This is a Whale" << endl;
    }
};

int main()
{
    Mammal obj1;
    MarineAnimal obj2;
    Whale obj3;
    obj1.print();
    obj2.print();
    obj3.print();
    obj3.Mammal::print();
    obj3.MarineAnimal::print();
    return 0;
}
