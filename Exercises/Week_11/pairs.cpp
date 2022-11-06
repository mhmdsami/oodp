#include <iostream>
#include <utility>
using namespace std;

template <typename T, typename U>
void print_pair(pair<T, U> p)
{
    cout << p.first << ": " << p.second << "\n";
}

int main()
{
    pair<string, int> math, chem, cs;

    math.first = "Maths";
    math.second = 95;

    chem = make_pair("Chemistry", 97);

    cs = {"Computer Science", 100};

    cout << "Marks\n";
    print_pair(math);
    print_pair(chem);
    print_pair(cs);

    return 0;
}
