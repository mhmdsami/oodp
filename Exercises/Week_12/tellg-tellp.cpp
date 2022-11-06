#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    int pos;

    file.open("out.txt", ios::out);
    file << "this is a line" << endl;
    file << "another line" << endl;
    pos = file.tellp();
    cout << "end of file: " << pos << endl;
    file.close();

    file.open("out.txt", ios::in);
    string line;
    while (getline(file, line))
    {
        pos = file.tellg();
        cout << "position of line '" << line << "': " << pos << "\n";
    }
    file.close();
}
