#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    cout << "factorial of " << a << " is: " << factorial(a);
    return 0;
}