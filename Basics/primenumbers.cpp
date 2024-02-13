// print prime numbers between a to b
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a to b: " << endl;
    cin >> a >> b;
    cout << "prime numbers from " << a << " to " << b << "are: ";
    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }

        if (i == num)
        {
            cout << num << "\t";
        }
    }
}