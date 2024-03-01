#include <iostream>
using namespace std;
int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
// octal to decimal
int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}


int main()
{
    int n;
    cin >> n;
    // cout << binaryToDecimal(n);
    int ans = octalToDecimal(n);
    cout << ans;
    return 0;
}