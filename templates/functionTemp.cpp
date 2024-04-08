#include <iostream>
using namespace std;
// this is the function template using for specify the function variable data types
template <class t1, class t2>
float average(t1 a, t1 b, t2 c, t2 d)
{
    t2 avg = ((((a + b) / 2) + ((c + d) / 2)) / 2);
    return avg;
}
// function template
template <class t3, class t4>
void swapp(t3 x, t4 y)
{
    t3 temp = x;
    x = y;
    y = temp;
    cout << "the value of a is: " << x << endl
         << "the value of b is: " << y;
}

int main()
{
    float x = 10, x2 = 20, y = 20, y2 = 40;
    cout << "the average is: " << average(x, y, x2, y2);
    cout << endl;
    float a = 5.5;
    int b = 3;
    // don't need the argument list of template in function template
    //  swapp<int, float>(a, b);
    swapp(a, b);
    return 0;
}