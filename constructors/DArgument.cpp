#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(int x, int y = 6) // Default argument in constructor
    {
        a = x;
        b = y;
    }
    void print();
};
void complex::print()
{
    cout << "the complex number is: " << a << "+" << b << 'i' << endl;
}
int main()
{
    complex c1(3);
    c1.print();
    return 0;
}