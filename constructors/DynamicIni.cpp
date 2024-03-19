// this is Dynamic initialization of constructor
#include <iostream>
#include <cmath>
using namespace std;
class BankDeposit
{
    int principle;
    float InterestRate;
    int years;
    double ReturnValue;
    int R;
    int interest;

public:
    BankDeposit(int p, int y, float R);
    BankDeposit(int p, int y, float R, string s);

    void printValue();
};
BankDeposit::BankDeposit(int p, int y, float R)
{
    principle = p;
    years = y;
    InterestRate = R;
    ReturnValue = principle + (principle * InterestRate * y / 100);
    interest = principle * InterestRate * y / 100;
}
BankDeposit::BankDeposit(int p, int y, float R, string s)
{
    principle = p;
    years = y;
    InterestRate = R;
    // int interest = (principle * InterestRate * y) / 100;
    // int compound = (interest * InterestRate * y) / 100;
    // ReturnValue = principle + interest + compound;
    ReturnValue = principle * (pow((1 + InterestRate / 100), years));
    interest = ReturnValue - principle;
}

void BankDeposit::printValue()
{
    cout << endl
         << "the amount you deposited is: " << principle << endl
         << "the amount after " << years << " years with interest rate : " << InterestRate << " is: " << ReturnValue << endl
         << "and the interest of your amount is: " << interest << endl;
    char helpful;
    cout << "was this helpful for you? y/n : ";
    cin >> helpful;
    if (helpful == 'y')
    {
        cout << "thanks for your response";
    }
    else if (helpful == 'n')
    {
        cout << "sorry to know, we are still working on it...";
    }
}
void simple()
{
    int p, y, R;
    cout << "Enter your principle: ";
    cin >> p;
    cout << "Enter years: ";
    cin >> y;
    cout << "Enter Interest rate in percent(don't enter '%' symbol) : ";
    cin >> R;
    BankDeposit c1(p, y, R);
    c1.printValue();
}
void compound()
{
    int p, y, R;
    string s = "compound";
    cout << "Enter your principle: ";
    cin >> p;
    cout << "Enter years: ";
    cin >> y;
    cout << "Enter Interest rate in percent(don't enter '%' symbol) : ";
    cin >> R;
    BankDeposit c2(p, y, R, s);
    c2.printValue();
}
int main()
{
    char yn;
    cout << "hello i'm a computer programm created by Rohit, i can calculate your simple and compound interest " << endl
         << "want to run now? y/n : " << endl;
    cin >> yn;
    if (yn == 'y')
    {
        char call;
        cout << "which type interest do you want to calculate?" << endl
             << "enter 's' for simple and 'c' for compound : ";
        cin >> call;
        if (call == 's')
        {
            simple();
        }
        else if (call == 'c')
        {
            compound();
        }
        else
        {
            cout << "you entered incorrect format please enter c/s only.";
        }
    }
    else if (yn == 'n')
    {
        cout << "okay you can use me anytime";
    }
    else
    {
        cout << "you entered incorrect format please enter y/n only.";
    }
    return 0;
}