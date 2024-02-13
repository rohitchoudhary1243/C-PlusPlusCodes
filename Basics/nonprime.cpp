#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "n is non prime";
            break;
        }
        // cout << "prime" << endl;
    }
    if (i == n)
    {
        cout << "prime" << endl;
    }
    return 0;
}