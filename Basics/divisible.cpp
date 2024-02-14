#include <iostream>
using namespace std;
int main()
{
    int divide;
    int a, b;
    cout << "enter divide number: ";
    cin >> divide;
    cout << "enter 2 numbers check for divisible";
    cin >> a >> b;
    if (divide % a == 0 && divide % b == 0)
    {
        cout << divide << " is divisible by " << a << " & " << b << "both!";
    }
    else if (divide % a == 0)
    {
        cout << divide << " is divisible by " << a;
    }
    else if (divide % b == 0)
    {
        cout << divide << " is divisible by " << b;
    }
    else
    {
        cout << a << " & " << b << " are both not divisible by " << divide;
    }
    return 0;
}