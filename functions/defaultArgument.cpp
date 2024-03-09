#include <iostream>
using namespace std;

int moneyinterest(int money, float interest = 1.04)
{
    return money * interest;
}
int vipInterest(int money, float interest = 1.1) // default argument
{
    return money * interest;
}
int main()
{
    int money = 100000;
    cout << "if you have " << money << " rs in your bank then yoy will recieve " << moneyinterest(money) << endl;
    cout << "for vip: if you have " << money << " rs in your bank then yoy will recieve " << vipInterest(money) << endl;
    return 0;
}
