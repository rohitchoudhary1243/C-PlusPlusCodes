#include <iostream>
using namespace std;
int sumn(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int ans = sumn(n);
    cout << ans;
}