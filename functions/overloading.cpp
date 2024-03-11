#include <iostream>
using namespace std;

int sum(int x, int y) // using function with 2 arguments
{
    return x + y;
}
int sum(int x, int y, int z) // using function with 3 arguments
{
    return x + y + z;
}
int main()
{
    int a = 4, b = 5, c = 6;
    cout << "the sum of " << a << " and " << b << " is: " << sum(a, b) << endl;
    cout << "the sum of " << a << ", " << b << " and " << c << " is: " << sum(a, b, c) << endl;
    return 0;
}