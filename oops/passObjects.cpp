#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex c1, complex c2) // passing objects as parameters
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void print(string n)
    {
        cout << n << " your complex number is: " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    string n1 = "for c1";
    string n2 = "for c2";
    string n3 = "for c3";
    complex c1, c2, c3;
    c1.setData(2, 3);
    c2.setData(3, 4);
    c3.setDataBySum(c1, c2); // passing objects as function arguments
    c1.print(n1);
    c2.print(n2);
    c3.print(n3);
    return 0;
}