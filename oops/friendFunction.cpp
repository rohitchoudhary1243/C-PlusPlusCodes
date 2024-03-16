#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << "the complex number is: " << a << "+" << b << "i" << endl;
    }
    friend complex sumcomplex(complex o1, complex o2); // with friend function we can access private data
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b)); // private data inaccessible without friend function
    return o3;
}

int main()
{

    complex o1, o2, sum;
    o1.setData(2, 4);
    o1.print();
    o2.setData(1, 5);
    o2.print();
    /*sum.sumcomplex(o1,o2);*/ // invalid because we cannot call friend function directly
    sum = sumcomplex(o1, o2);

    sum.print();
    return 0;
}