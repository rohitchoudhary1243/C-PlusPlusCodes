#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int j = 3;
    int k;
    // pre and post decrements
    k = i - j - j-- + --i + --j;
    cout << k;
    return 0;
}