#include <iostream>
using namespace std;

class Store
{
public:
    void itemcount(int id)
    {
        cout << id << endl;
    }

    void itemcount(int total_avl, int consumed)
    {
        cout << total_avl - consumed << endl;
    }
};

int main()
{
    int id, total_avl, consumed;
    Store purchase;
    cin >> id >> total_avl >> consumed;
    purchase.itemcount(id);
    purchase.itemcount(total_avl, consumed);
    return 0;
}
