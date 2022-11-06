#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "f335fd3b13fb2104f7fb2d429d9fb453", other_str = "other string";
    cout << "The string: " << str << "\n"
         << "The size allocated for the string: " << str.capacity() << "\n"
         << "The length of the string: " << str.length() << "\n";

    str.resize(35);
    cout << "After resize the size allocated for the string: " << str.capacity() << "\n";

    str.shrink_to_fit();
    cout << "Size of string after shrinking to fit: " << str.capacity() << "\n";

    cout << "The reverse string using reverse iterator: ";
    string::reverse_iterator it;
    for (it = str.rbegin(); it != str.rend(); it++)
        cout << *it;
    cout << "\n";

    str.swap(other_str);
    cout << "After swapping the string: " << str << "\n";

    return 0;
}
