#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string file_name;
    fstream file;
    cout << "file name(./out.txt) ";
    getline(cin, file_name);
    file.open(file_name.length() > 0 ? file_name : "out.txt", ios::out);

    if (!file)
    {
        cout << "Error in creating file";
        return 1;
    }

    cout << "File created successfully!";
    file.close();
    return 0;
}
