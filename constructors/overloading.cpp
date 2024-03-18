#include <iostream>
using namespace std;

class point
{
    int x;
    int y;
    string s;

public:
    // constructor overloading
    point(int a, int b, string s1) // constructor with 2 arguments
    {
        x = a;
        y = b;
        s = s1;
    }
    point(int a, int b, string s2, char c) // constructor with 3 arguments
    {
        x = a;
        y = b;
        s = s2;
    }
    void print()
    {
        cout << s << " the calue of x is : " << x << " and y is: " << y << endl;
    }
};
int main()
{
    string s1 = "with o1";

    string s2 = "with o2";
    // implicit call
    point c1(4, 6, s1);
    c1.print();
    // explicit call
    point c2 = point(2, 3, s2, 'c'); // constructor overloading 3 parameters
    c2.print();

    return 0;
}