#include <iostream>
#include <cmath>
using namespace std;
// void calc;
class point
{
    int x1, x2;
    int y1, y2;

public:
    point(int a1, int a2, int b1, int b2)
    {
        x1 = a1;
        x2 = a2;
        y1 = b1;
        y2 = b2;
    }

    void print()
    {
        cout << "x points entered by you are: (" << x1 << ", " << x2 << ")" << endl;
        cout << "y points entered by you are: (" << y1 << ", " << y2 << ")" << endl;
    }
};

class c2
{
public:
    void formula()
    {
        char yn;
        cout << "hello i'm a computer programm created by rohit i can calculate distance between two points" << endl
             << "want to calculate? y/n : ";
        cin >> yn;
        if (yn == 'y')
        {
            int x1, y1, x2, y2;
            cout << "okay! enter the x1 point: ";
            cin >> x1;
            cout << "enter the x2 point: ";
            cin >> x2;
            cout << "enter the y1 point: ";
            cin >> y1;
            cout << "enter the y2 point: ";
            cin >> y2;

            // implicit call
            point Point(x1, x2, y1, y2);
            Point.print();

            int ans = (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
            cout << "the distance between x and y cordinates is: " << sqrt(ans);
        }
        else if (yn == 'n')
        {
            cout << "okay you can calculate anytime...";
        }
        else
        {
            cout << "you entered incorrect value please enter only y/n";
        }
    }
};

int main()
{
    c2 o1;
    o1.formula();
    return 0;
}
