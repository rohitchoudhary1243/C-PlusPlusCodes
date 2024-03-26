#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    *ptr = 100; // dynamicallly allocation
    cout << "the value at address of ptr is: " << *ptr << endl;
    // new keyword

    int *p = new int(20);
    cout << "the value at address of p is:" << *p << endl;

    // float* arr= new float[10,20,30];
    float *arr = new float[3];
    arr[0] = 10;
    *(arr + 1) = 20; // value at arr address[0+1] =20
    arr[2] = 30;

    // delete[] arr;

    cout << "the value of arr[0] is: " << arr[0] << endl;
    cout << "the value of arr[1] is: " << arr[1] << endl;
    cout << "the value of arr[2] is: " << arr[2] << endl;

    return 0;
}