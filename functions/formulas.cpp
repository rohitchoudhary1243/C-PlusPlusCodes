#include <iostream>
using namespace std;

int volume(int l, int b, int h) // using function with 3 arguments
{
    return l * b * h;
}
int volume(int r, int h) // using function with 2 arguments
{
    return (float)3.14 * r * r * h;
}
int volume(int a) // using function with 1 arguments
{
    return a * a * a;
}
int main()
{
    int a = 4, b = 5, c = 6;
    cout << "the volume of rectangle is: " << volume(a, b, c) << " meter square" << endl;
    cout << "the volume of cylander is: " << volume(a, b) << " meter square" << endl;
    cout << "the volume of cube is: " << volume(a) << " meter square" << endl;
    return 0;
}