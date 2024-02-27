#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
void print(int number)
{
    cout << number;
}
int add(int num1, int num2, char op)
{
    int add;
    switch (op)
    {
    case '+':
        add = num1 + num2;
        break;
    case '-':
        add = num1 - num2;
        break;
    case '*':
        add = num1 * num2;
        break;
    case '/':
        if (num1 != 0 && num2 != 0)
        {
            add = num1 / num2;
        }
        else
        {
            cout << "error! can't divisible by zero error code: ";
        }
        break;
    }

    print(add);
}
int main()
{
    int a, b;
    char op;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter operation";
    cin >> op;
    cout << "enter second number: ";
    cin >> b;

    add(a, b, op);
}