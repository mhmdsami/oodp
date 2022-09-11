#include <iostream>
using namespace std;

class House
{
private:
    string house_name, city, state;
    int house_number, number_rooms, **room_dimensions;

public:
    void input();
    void display();
};

void House::input()
{
    cin >> house_name;
    cin >> house_number >> city >> state;
    cin >> number_rooms;
    room_dimensions = (int **)malloc(sizeof(int) * number_rooms);
    for (int i = 0; i < number_rooms; i++)
    {
        *(room_dimensions + i) = (int *)malloc(sizeof(int) * 3);
        cin >> *(*(room_dimensions + i)) >> *(*(room_dimensions + i) + 1) >> *(*(room_dimensions + i) + 2);
    }
}

void House::display()
{
    cout << "House name=" << house_name << endl
         << "House No=" << house_number << endl
         << "City=" << city << endl
         << "State=" << state << endl;
    for (int i = 0; i < number_rooms; i++)
    {
        cout << "Detail of Room " << i + 1 << endl
             << "Length=" << *(*(room_dimensions + i)) << endl
             << "Breadth=" << *(*(room_dimensions + i) + 1) << endl
             << "Height=" << *(*(room_dimensions + i) + 2) << endl;
    }
}

int main()
{
    House h;
    h.input();
    h.display();
    return 0;
}