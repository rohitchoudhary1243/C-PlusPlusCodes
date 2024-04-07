#include <iostream>
using namespace std;
// default parameters(data types) of a template
template <class t1 = int, class t2 = float, class t3 = char>
class class1
{
public:
    t1 a;
    t2 b;
    t3 c;
    class1(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display(string str)
    {
        string st = str;
        cout << "the value of a " << st << " is: " << a << endl;
        cout << "the value of b " << st << " is: " << b << endl;
        cout << "the value of c " << st << " is: " << c << endl;
    }
};
int main()
{ /* argument list <> of class template we must have write and if we declared the template and data types
  are already default we can leave this empty (like a function) and we can overwrite (unlike a function) */
    class1<> obj1(10, 3.5, 'c');
    obj1.display("by default");
    cout << endl;
    // overwriting the default parameters of a template by seting arguments in <>
    class1<char, float, int> obj2('c', 6.12, 20);
    obj2.display("by overwrite");
    return 0;
}