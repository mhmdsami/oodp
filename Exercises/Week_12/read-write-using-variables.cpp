#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string file_name, name, reg_no;
    int age;
    fstream file;

    cout << "file name(./data.txt) ";
    getline(cin, file_name);
    file_name = file_name.length() > 0 ? file_name : "data.txt";
    file.open(file_name, ios::out);

    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your Registration Number: ";
    cin >> reg_no;
    cout << "Enter your Age: ";
    cin >> age;

    file << "Student Details" << endl
         << "Name: " << name << endl
         << "Registration Number: " << endl
         << "Age: " << age;

    cout << "successfully created file! " << file_name;

    file.close();
    return 0;
}
