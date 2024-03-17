#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(void); // default constructor
    void print()
    {
        cout << "the complex number is: " << a << "+" << b << "i" << endl;
    }
};
complex::complex(void)
{
    a = 10;
    b = 20;
}
int main()
{
    complex c1, c2, c3;
    c1.print();

    return 0;
}