#include <iostream>
using namespace std;
class c2;
class c1
{
    int value1;
    friend void swap(c1 &, c2 &);

public:
    void setData(int n1)
    {
        value1 = n1;
    }
};
class c2
{
    int value2;
    int temp;
    friend void swap(c1 &, c2 &);

public:
    void setValue(int n2)
    {
        value2 = n2;
    }
};
void swap(c1 &o1, c2 &o2) // call by reference
{
    int temp = o1.value1;
    o1.value1 = o2.value2;
    o2.value2 = temp;
    cout << "value of a is: " << o1.value1 << endl
         << "the value of b is: " << o2.value2 << endl;
}

int main()
{
    c1 o1;
    c2 o2;
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    o1.setData(a);
    o2.setValue(b);
    swap(o1, o2);

    return 0;
}