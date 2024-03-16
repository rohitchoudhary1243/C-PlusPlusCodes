#include <iostream>
#include <cmath>
using namespace std;
// forward declaration
class complex;
class calcSum
{
public:
    void add(int a, int b)
    {
        cout << "the real sum is: " << a + b;
    }
    int sumComplex(complex, complex); // it is necessary to declare it first before giving permission
    void formula(int r)
    {
        cout << "the area of circle is: " << M_PI * r * r;
    }
};

class complex
{ // member friend functions
    // friend int calcSum ::sumComplex(complex, complex); // calcSum class ke sumComlex function ko ijaajat di jaati hai
    // friend int calcSum:: formula(int n);
    // class friend
    friend class calcSum;
    int a;
    int b;
    // double pi = M_PI;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print()
    {
        cout << "the comlex no. is: " << a << "+" << b << "i" << endl;
    }
};

int calcSum::sumComplex(complex c1, complex c2)
{
    cout << "the complex sum is: " << c1.a + c2.a << "+" << c1.b + c2.b << "i" << endl;
}
// void calcSum::formula(int r)

int main()
{
    complex c1, c2;
    calcSum sum;
    c1.setData(2, 3);
    c1.print();
    c2.setData(5, 7);
    c2.print();
    sum.sumComplex(c1, c2);
    calcSum area;
    int r;
    cout << "enter the radius of circle: ";
    cin >> r;
    area.formula(r);
    return 0;
}