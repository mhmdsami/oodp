#include <iostream>
#include <malloc.h>
using namespace std;

class Item
{
public:
    int number_of_items, largest_element = 0, *codes; 
    float priceSum = 0, *prices;
    
    Item()
    {
        cin >> number_of_items;
        codes = (int *) malloc(sizeof(int) * number_of_items);
        prices = (float *) malloc(sizeof(float) * number_of_items);

        for (int i = 0; i < number_of_items; i++)
        {
            cin >> codes[i] >> prices[i];
        }
    }

    void largest()
    {
        largest_element = prices[0];
        for (int i = 1; i < number_of_items; i++)
        {
            if (prices[i] > largest_element)
            {
                largest_element = prices[i];
            }
        }
        cout << "Largest Price=" << largest_element << endl;
    }

    void sum()
    {
        for (int i = 0; i < number_of_items; i++)
        {
            priceSum += prices[i];
        }
        cout << "Sum of Prices=" << priceSum << endl;
    }

    void displayitems()
    {
        cout << "Code and Price" << endl;
        for (int i = 0; i < number_of_items; i++)
        {
            cout << codes[i] << " and " << prices[i] << endl;
        }
    }
};

int main()
{
    Item item;
    item.largest();
    item.sum();
    item.displayitems();
    return 0;
}
