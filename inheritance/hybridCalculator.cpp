#include <iostream>
#include <cmath>
using namespace std;
class simple
{
protected:
    int a, b;
    float result;
    char op;

public:
    void setData()
    {
        cout << "enter 1st digit: ";
        cin >> a;
        cout << "enter operation: ";
        cin >> op;
        cout << "enter 2nd digit: ";
        cin >> b;
    }
    float calc()
    {
        switch (op)
        {
        case '+':
            result = a + b;
            cout << "the sum of " << a << " & " << b << " is: " << result;
            break;
        case '-':
            result = a - b;
            cout << "the minus of " << a << " & " << b << " is: " << result;
            break;
        case '*':
            result = a * b;
            cout << "the product of " << a << " & " << b << " is: " << result;
            break;
        case '/':
            result = a / b;
            cout << "the devide of " << a << " by " << b << " is: " << result;
            break;
        default:
            break;
        }
    }
};
class scientific
{
protected:
public:
    int n1;
    char opS;
    float ans;

    void setNumber()
    {
        cout << "enter a number: ";
        cin >> n1;
        setData2();
        calc2(n1);
    }
    void setData2()
    {
        cout << "choose an operation: " << endl
             << "(q) for square root / (s) for square / (r) for cube root / (c) for cube: ";
        cin >> opS;
    }
    float calc2(int n1)
    {
        switch (opS)
        {
        case 'q':
            ans = sqrt(n1);
            cout
                << "the square root of " << n1 << " is: " << ans;
            break;
        case 's':
            ans = n1 * n1;
            cout
                << "the square of " << n1 << " is: " << ans;
            break;
        case 'r':
            ans = cbrt(n1);
            cout
                << "the cube root of " << n1 << " is: " << ans;
            break;
        case 'c':
            ans = n1 * n1 * n1;
            cout << "the cube of " << n1 << " is: " << ans;
            break;

        default:
            break;
        }
    }
};

class hybrid : public simple, public scientific
{
public:
    int calc3()
    {
        setData();
        calc();
        setData2();
        calc2(result);
    }
};

int main()
{

    char yn;
    cout << "hello, i'm a hybrid calculator created by rohit. i can do scientific calculations" << endl
         << "want to use me y/n: ";
    cin >> yn;
    if (yn == 'y')
    {
        char type;
        cout << "which type calculator do you want to use?" << endl
             << "Enter (s) for simple / (f)for scientific / (h) for hybrid : ";
        cin >> type;
        if (type == 's')
        {
            hybrid simple;
            simple.setData();
            simple.calc();
        }
        else if (type == 'h')
        {
            hybrid hybrid;
            hybrid.calc3();
        }
        else if (type == 'f')
        {
            hybrid scientific;
            scientific.setNumber();
        }
        else
        {
            cout << "you entered an incorrect value.";
        }
    }
    else if (yn == 'n')
    {
        cout << "okay you can run me anytime";
    }
    else
    {
        cout << "you entered incorrect format please enter only y/n";
    }

    return 0;
}