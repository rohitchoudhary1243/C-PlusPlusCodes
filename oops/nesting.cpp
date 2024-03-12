#include <iostream>
using namespace std;

class binary
{
private: // By default private
    string s;

public:
    void chk_bin();
    void input();
    void convert();
    void display();
};

void binary::chk_bin() // we can only use private functions in class
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format";
            return;
        }
    }
    convert();
}

void binary::input()
{
    cout << "enter a binary number: ";
    cin >> s;
    if (s.empty())
    {
        cout << "Empty input!" << endl;
        return;
    }
    chk_bin(); // function calling to another
}

void binary::convert()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1'; // assign to 1
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0'; // assign to 0
        }
    }
    display();
}
void binary::display()
{
    cout << "the reverse binary is: " << s << endl;
}
int main()
{
    binary b;
    b.input();
    // b.chk_bin(); // we cannot use private functions of class
    // b.convert();
    // b.display(); // function calls to another called nesting
    return 0;
}