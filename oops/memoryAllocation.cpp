#include <iostream>
using namespace std;

class shop
{
    int itemId[10];
    int itemPrice[10];
    int counter = 0;

public:
    int itemCounter(int n);
    void setItem(void);
    void displayItem(void);
};
int shop::itemCounter(int n) // we can directly put in loop in setItem function
{
    for (int i = 0; i < n; i++)
    {
        setItem();
    }
}

void shop::setItem()
{
    cout << "enter item Id for item no. " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "enter item price for item no. " << counter + 1 << ": ";
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayItem()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "item Id for item no. " << i + 1 << " is: " << itemId[i] << endl
             << "item price for item no. " << i + 1 << " is: " << itemPrice[i] << endl;
    }
}
int main()
{
    shop item;
    int n;
    cout << "how many items do you have: ";
    cin >> n;
    item.itemCounter(n);
    item.displayItem();
    return 0;
}