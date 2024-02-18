#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter column: ";
    cin >> c;
    cout << "enter rows: ";
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}