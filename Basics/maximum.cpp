#include <iostream>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is maximum";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is maximum";
        }
        else
        {
            cout << "c is maximum";
        }
    }
}