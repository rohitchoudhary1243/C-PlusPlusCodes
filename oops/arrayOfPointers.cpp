#include <iostream>
using namespace std;
class shop
{
    int id;
    int size = 1;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "the id of item number " << size << "is: " << id << endl;
        cout << "the price of item number " << size++ << "is: " << price << endl;
    }
};

int main()
{
    int size, id, i;
    float price;
    cout << "how many products do you have? ";
    cin >> size;
    shop *ptr = new shop[size];
    // shop *ptr1 = ptr;
    for (i = 0; i < size; i++)
    {
        cout << "enter id of product " << i + 1 << ": ";
        cin >> id;
        cout << "enter price of product " << i + 1 << ": ";
        cin >> price;
        ptr[i].setData(id, price);
        // ptr++;
    }
    for (i = 0; i < size; i++)
    {
        ptr[i].getData();
    }
    return 0;
}