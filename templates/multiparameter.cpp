#include <iostream>
using namespace std;
// class template with multiple parameters
template <class t1, class t2>
class calculator
{
public:
    t1 n1;
    t1 n2;
    t2 op;
    calculator(t1 number1, t1 number2, t2 operation)
    {
        n1 = number1;
        n2 = number2;
        op = operation;
    }
    t1 display()
    {
        if (op == '+')
        {
            cout << "addition of " << n1 << " and " << n2 << " is: " << n1 + n2;
        }
        else if (op == '-')
        {
            cout << "substraction of " << n1 << " and " << n2 << " is: " << n1 - n2;
        }
        else if (op == '*')
        {
            cout << "product of " << n1 << " and " << n2 << " is: " << n1 * n2;
        }
        else if (op == '/')
        {
            cout << "divide of " << n1 << " and " << n2 << " is: " << n1 / n2;
        }
        else
        {
            cout << "you enteres incorrect operation";
        }
    }
};

int main()
{
    cout << "hello i'm A computer programm created by rohit, i can culaculate numbers, before this i made a scientific calculator" << endl
         << "this can be written in only one function nut now i'm practicing Templates of multi parameter. please " << endl;
    int n1, n2;
    char operation;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter operation: (+,-,*,/) ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> n2;
    // while creating an object of a class we have to specify which data type we want to use for t1 and t2 of a template
    calculator<int, char> obj(n1, n2, operation);
    obj.display();
    return 0;
}