#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int j = 2;
    int k;
    // post and pre increment
    k = i + j + i++ + ++j + i++;
    cout<<k;

}