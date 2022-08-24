#include <iostream>
using namespace std;

int main()
{
    int age, weight;
    cin >> age >> weight;
    if (age >= 18 && weight >= 40)
        cout << "Eligible for Donation";
    else
        cout << "Not Eligible for Donation";
    return 0;
}