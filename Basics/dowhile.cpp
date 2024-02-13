#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    do // do while first execute updation then check condition (sequence wise)
    {
        n = n / 2;
        cout << n << "\t";
    } while (n > 0);
}