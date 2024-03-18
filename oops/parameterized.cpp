#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(int, int); // parameterized construction
    void print(string n)
    {
        cout << "the complex number is: " << a << "+" << b << "i  using "
             << n << endl;
    }
};
complex ::complex(int x, int y)
{ // parameterized construction as it takes 2 parameters
    a = x;
    b = y;
}
int main()
{
    // implicit call
    complex c1(2, 3);
    // explicit call
    complex c2 = complex(4, 9);
    string s1 = "implicit call";
    string s2 = "explicit call";
    c1.print(s1);
    c2.print(s2);

    return 0;
}