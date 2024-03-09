#include <iostream>
using namespace std;

int & /*reference return type*/ callByValue(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 4, y = 5;
    callByValue(x, y) = 100;
    cout << "the value of x is: " << x << " and y is: " << y << endl;
    return 0;
}