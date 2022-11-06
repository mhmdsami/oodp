#include <iostream>
#include <unordered_set>
using namespace std;

template <typename T>
void print_set(unordered_set<T> ust)
{
    for (auto &element : ust)
    {
        cout << element << " ";
    }
    cout << "\n";
}

int main()
{
    unordered_set<int> ust = {1, 2, 1, 3, 5, 7};
    cout << "The element of the unordered set: ";
    print_set(ust);

    cout << "The size of the unordered set: " << ust.size() << "\n";

    ust.clear();
    cout << "The elements of the unordered set after clearing: ";
    print_set(ust);

    ust.insert({2, 1, 5});
    cout << "The elements of the unordered set after inserting values: ";
    print_set(ust);

    ust.erase(2);
    cout << "The elements of the unordered set after removing a value:";
    print_set(ust);

    return 0;
}
