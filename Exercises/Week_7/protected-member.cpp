#include <iostream>
using namespace std;

class Secret
{
protected:
    string secret = "tbnjmpwftubm";
};

class PrintSecret : public Secret
{
public:
    void print_secret()
    {
        cout << "The secret is " << secret;
    }
};

int main()
{
    PrintSecret obj;
    obj.print_secret();
    return 0;
}
