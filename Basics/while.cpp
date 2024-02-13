#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    while (n > 0)
    {
        n = n / 2;
        cout << n << "\t";
    }
    cout << n;
}
