#include <iostream>
using namespace std;
// not recommended to use below lines with inline function

inline int product(int a, int b)
{
    // static int s = 0; // this executes only ones
    // s = s + 1;        // next time this function will be run the value of s will retained
    // return s;
    int c = a * b;
    return c;
}
int main()
{
    int a = 4;
    int b = 3;
    cout << "product of a & b is: " << product(a, b) << endl;
    cout << "product of a & b is: " << product(a, b) << endl;
    cout << "product of a & b is: " << product(a, b) << endl;
    cout << "product of a & b is: " << product(a, b) << endl;
    cout << "product of a & b is: " << product(a, b) << endl;

    return 0;
}