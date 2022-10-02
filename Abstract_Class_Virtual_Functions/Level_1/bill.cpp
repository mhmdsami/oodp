#include <iostream>
using namespace std;

class Consumer
{
public:
    string name, telephone;
    int code, quantity, price;
    virtual void getdata(){};
    virtual void display(){};
};

class Transaction : public Consumer
{
    void getdata()
    {
        cin >> name >> code >> telephone >> quantity >> price;
    }

    void display()
    {
        cout << "Name: " << name << endl
             << "Code: " << code << endl
             << "Telephone: " << telephone << endl
             << "Quantity: " << quantity << endl
             << "Price: " << price << endl
             << "Total Price: " << price * quantity << endl;
    }
};

int main()
{
    Consumer *o1;
    Transaction o2;
    o1 = &o2;
    o1->getdata();
    o1->display();
    return 0;
}
