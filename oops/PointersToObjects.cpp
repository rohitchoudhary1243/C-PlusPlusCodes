#include <iostream>
using namespace std;
class complex
{
protected:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << "the real number is: " << a << endl;
        cout << "the imaginary number is: " << b << "+i" << endl;
    }
};
int main()
{
    /* complex c1;
    complex *ptr =&c1;
    (*ptr).setData(3,6);
    (*ptr).getData(); */

    // complex *ptr =new complex;
    // (*ptr).setData(3, 6);  // dereference of pointer
    // (*ptr).getData();

    complex *ptr = new complex[3]; // array of objects using pointers
    (*ptr).setData(3, 6);
    (*ptr).getData();
    ptr[1].setData(10, 20); // syntax for call array of objects
    ptr[1].getData();
    ptr[2].setData(100, 200);
    ptr[2].getData();

    return 0;
}