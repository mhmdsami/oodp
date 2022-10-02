#include <iostream>
using namespace std;

class ISRO
{
public:
    int k, a, b, count = 0;
    virtual void ProblemSolving() = 0;
    ISRO()
    {
        cin >> k >> a >> b;
    }
};

class Preparation : public ISRO
{
public:
    void ProblemSolving()
    {
        for (int i = a; i < b + 1; i++)
            if (i % k == 0)
                count++;
        cout << count;
    }
};

int main()
{
    Preparation obj;
    obj.ProblemSolving();
    return 0;
}
