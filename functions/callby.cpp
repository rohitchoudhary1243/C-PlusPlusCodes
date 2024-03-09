#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapPointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void referenceVar(int &a, int &b) // c++ reference var
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4;
    int y = 5;
    // call by value
    swap(x, y);
    cout << "the value of x is: " << x << " and y is : " << y << endl;

    // call by reference
    swapPointer(&x, &y);
    cout << " after pointer the value of x is: " << x << " value of y is: " << y << endl;

    // call by reference usng C++ reference var
    referenceVar(x, y);
    cout << " c++ reference value of x is: " << x << "the value of y is: " << y << endl;

    return 0;
}