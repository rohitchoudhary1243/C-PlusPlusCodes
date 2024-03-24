#include <iostream>
using namespace std;
class base1Class
{
public:
    void greet()
    {
        cout << "Hello from base1Class" << endl;
    }
    //  void Greeting()
    //  {
    //      cout << "Hello i'm greeting message from base1Class" << endl;
    // }
};
class base2Class
{
public:
    void greet()
    {
        cout << "Hello from base2Class" << endl;
    }
    // void greeting()
    // {
    //     cout << "Hello i'm greeting message from base2Class" << endl;
    // }
};
class DClass : public base1Class, public base2Class
{
public:
    void greet()
    {
        base1Class::greet(); // ambiguity resolve
    }
};
int main()
{
    base1Class base1obj;
    base2Class base2obj;
    DClass Dobj;
    base1obj.greet();
    base2obj.greet();
    Dobj.greet();

    return 0;
}