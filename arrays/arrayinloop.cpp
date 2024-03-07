#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    cout << "enter your marks: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < 4; i++)
    //{
    //     cout << arr[i] << endl;
    // }
    cout << "using while loop" << endl;
    int i = 0;
    while (i < 4)
    {
        cout << arr[i] << endl;
        i++;
    }
    // cout << "using do while" << endl;
    // int j = 0;
    // do
    //{
    //    cout << arr[j] << endl;
    //     j++;
    // } while (i < 4);

    return 0;
}