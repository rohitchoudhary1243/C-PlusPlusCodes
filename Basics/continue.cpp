#include <iostream>
using namespace std;
int main()
{
    int day;
    // cout << "enter date of today: ";
    // cin >> day;
    int pens = 10;

    for (day = 1; day <= 30; day++)
    {
        if (day % 2 != 0)
        {
            cout << "date=" << day << "today is even day"
                 << "\n";
            continue;
        }
        if (pens <= 0)
        {
            cout << "date=" << day << "your pens are empty"
                 << "\n";
            break;
        }
        cout << "date=" << day << "go to school"
             << "\n";
        pens = pens - 3;
    }
    return 0;
}