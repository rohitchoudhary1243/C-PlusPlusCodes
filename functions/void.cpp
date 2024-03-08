#include <iostream>
using namespace std;
void print();
void sum();
void fibonacci();
int main()
{
    print();
    sum();
    fibonacci();
}
void print()
{
    string name;
    int mob;
    cout << "enter your name: ";
    cin >> name;
    cout << " enter your mob. no. : ";
    cin >> mob;
    cout << "your name is: " << name << endl;
    cout << "your mob. no. is: " << mob << endl;
}
void sum()
{
    int a, b;
    cout << "enter 2 numbers: ";
    cin >> a >> b;
    cout << "the sum is: " << a + b << endl;
}
void fibonacci()
{
    int n;
    cout << "where to end fibonacci sequence? ";
    cin >> n;
    cout << "fibonacci is: ";
    int sum;
    int t1 = 0, t2 = 2;
    for (int i = 0; i <= n; i++)
    {
        cout << t1 << " ";
        sum=t1+t2;
        t1 = t2;
        t2 = sum;
    }
}