#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "enter greetings: (a for hello, b for ciao,c for namaste,d for ram ram)";
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "hello!";
        break;
    case 'b':
        cout << "ciao!";
        break;
    case 'c':
        cout << "namaste!";
        break;
    case 'd':
        cout << "ram ram!";
        break;

    default:
        cout
            << "i'm still learning as much as i can...";
        break;
    }
    return 0;
}
