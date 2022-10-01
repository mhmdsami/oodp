#include <iostream>
using namespace std;

class Appraisal
{
private:
    int sal;

public:
    Appraisal()
    {
        sal = 30000;
        cout << "Old Salary: " << sal << endl;
    }

    Appraisal(int new_sal)
    {
        sal = 30000;
        int hike = new_sal - sal;
        cout << "New Salary: " << new_sal << endl;
        cout << "You have the Hike of Rs." << hike << endl;
    }
};

int main()
{
    int sal;
    cin >> sal;
    Appraisal oldsalary;
    Appraisal newsalary(sal);
}
