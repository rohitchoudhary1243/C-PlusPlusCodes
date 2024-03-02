// reference variable & typecasting
#include <iostream>
using namespace std;
int main()
{ // reference variables
    int a = 50;
    int &b = a;
    cout << "value of a is: " << b << endl;
    // typecasting
    int x = 50;
    float y = 50.46;
    int z = (int)y;
    cout << "x is: " << float(x) << endl;
    cout << "y is:" << y << endl
         << "y in int is:" << (int)y << endl;
    cout << "z is: " << z << endl;
    cout << "sum is:" << y + x << endl;
}