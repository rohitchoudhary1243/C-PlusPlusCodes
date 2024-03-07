#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *b = &a;
    cout << "value of a is: " << a << endl;
    cout << "address of a is: " << &a << endl;
    cout << "address of a by pointer is: " << b << endl;
    cout << "valut at pointer b address is: " << *b << endl;

    // pointer to pointer
    int **c = &b; // pointer to pointer var store the address of another pointer var
    cout << "address of b pointer is: " << &b << endl;
    cout << "address of b pointer by c (pointer to pointer) var is: " << c << endl;
    cout << "value at address of c is address of a:" << *c << endl;
    cout << "because we are printing the value at address of c but c is storing the address of b and the value of b is address of a than the output will be address of a" << endl
         << endl;
    cout << "double value calling at address of c is value of a:" << **c << endl;
    cout << "because we are calling value at address of c 2 times hahaha" << endl;

    cout
        << "very easy";

    return 0;
}