#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("secret.txt"); // open a file

    string line;
    file >> line; // read the first line
    cout << line << endl;

    file.close(); // close the file
    return 0;
}
