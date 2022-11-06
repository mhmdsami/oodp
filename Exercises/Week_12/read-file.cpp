#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string file_name;
    ifstream file;
    cout << "file name(./in.txt) ";
    getline(cin, file_name);
    file.open(file_name.length() > 0 ? file_name : "in.txt");

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
    return 0;
}
