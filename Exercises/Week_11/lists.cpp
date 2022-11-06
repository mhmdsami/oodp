#include <iostream>
#include <list>
using namespace std;

template <typename T>
void print_list(list<T> lst)
{
    for (auto &num : lst)
    {
        cout << num << " ";
    }
    cout << "\n";
}

int main()
{
    list<int> lst;
    lst.push_back(1);
    cout << "The list after inserting a value at end: ";
    print_list(lst);

    for (int i = 2; i <= 5; i++)
    {
        lst.push_back(i * i);
    }
    cout << "The list after inserting values: ";
    print_list(lst);

    lst.push_front(0);
    cout << "The list after inserting a value at begin: ";
    print_list(lst);

    lst.pop_back();
    cout << "The list after popping at end: ";
    print_list(lst);

    lst.remove(4);
    cout << "The list after removing a value: ";
    print_list(lst);

    return 0;
}
