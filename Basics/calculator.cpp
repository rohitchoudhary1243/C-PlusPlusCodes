#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "enter number a: ";
    cin >> a;
    cout << "enter operation(+,-,*,/)";
    cin >> op;
    cout << "enter number b: ";
    cin >> b;
    switch (op)
    {
    case '+':
        cout << "addition of " << a << " and " << b << "is: " << a + b;
        break;
    case '-':
        cout << "substraction of " << a << " and " << b << "is: " << a - b;
        break;
    case '*':
        cout << "multiiplication of" << a << " and " << b << "is: " << a * b;
        break;
    case '/':
        cout << a << "devide by " << b << "is: " << a / b;

    default:
        cout << "you not entered correct value";
        break;
    }
}