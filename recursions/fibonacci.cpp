#include <iostream>
using namespace std;
int fibonacci(int a)
{
    if (a < 2)
    {
        return 1;
    }
    return fibonacci(a - 2) + fibonacci(a - 1);
}
int main()
{
    int a;
    cout << "enter fibonacci sequence position: ";
    cin >> a;
    cout << "the fibonacci sequence at " << a << " is: " << fibonacci(a);

    return 0;
}