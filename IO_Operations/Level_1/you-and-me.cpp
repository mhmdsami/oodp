#include <iostream>
using namespace std;

int main()
{
    int husband_age, wife_age, couple_avg_age;
    cin >> husband_age >> wife_age;
    couple_avg_age = (husband_age + wife_age) / 2;
    cout << "I am " << husband_age << endl;
    cout << "You are " << wife_age << endl;
    cout << "We are around " << couple_avg_age << endl;
    return 0;
}