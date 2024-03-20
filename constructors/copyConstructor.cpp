#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // when there is no copy constructor found compilor supply it's own copy constructor
    number(number &obj) // copy constructor
    {
        cout << "by calling copy constructor ";
        a = obj.a;
    }
    void output()
    {
        cout << "the value of a is: " << a << endl;
    }
};
int main()
{
    number x, y, z(15), z2;
    x.output();
    y.output();
    z.output();
    number z1(z); // copy constructor invoked
    z1.output();
    z2 = z; // copy constructor not invoked
    z2.output();
    number z3 = z; // copy constructor invoked
    z3.output();
    return 0;
}