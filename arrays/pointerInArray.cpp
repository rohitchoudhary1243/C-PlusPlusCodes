#include <iostream>
using namespace std;
// printing values & address at pointer
int main()
{
    int arr[4] = {20, 30, 40, 50};
    arr[0] = 100; // pointer vlaue can change
    int *p = arr;
    // cout << *(p++) << endl;
    // cout << *(p++) << endl;
    // cout << *(p++) << endl;
    // cout << *(p++) << endl;
    cout << endl;
    cout << "address of arr is: " << p << endl;
    cout << "2nd address of arr is: " << p + 1 << endl
         << endl;
    cout << "arr[0] value is: " << *p << endl;
    cout << "arr[1] value is:" << *(p + 1) << endl;
    cout << "arr[2] value is:" << *(p + 2) << endl;
    cout << "arr[3] value is:" << *(p + 3) << endl;

    return 0;
}