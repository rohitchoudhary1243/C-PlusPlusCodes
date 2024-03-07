#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char ans;
    cout << "want to print 1-10 table y/n? ";
    cin >> ans;
    if (ans == 'y')
    {
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cout << setw(4) << j * i << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "okay!";
    }
    return 0;
}