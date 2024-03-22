#include <iostream>
using namespace std;
// base class
class class1
{
    int data1 = 10;

protected:
    int data2 = 20;
    char a = 'a';

public:
    int data3 = 30;
    char b = 'b';
};
// class class2 : protected class1
class class2 : public class1 // public derivation of class1 protected members will be protected
{
public:
    int data = data2;
    void printData()
    {
        cout << "the data2 is: " << data2 << endl;
        cout << "the data3 is: " << data3 << endl;
    }
};

/*
data inheritable for members-
                     private derivation    protected derivation    public derivation
of private members    (not inheritable)     (not inheritable)      (not inheritable)
of protected members      private               protected             protected
of public members         private               protected             public

*/
int main()
{
    class2 o2;
    o2.printData();
    // cout<<data2; //data2 can't accesible as a protected data
    class1 o1;
    // cout<<o2.a; // protected data inaccesible for other functions
    cout << "the b of class1 public data is: " << o1.b << endl; // public data is accesible for other functions
    cout << "protected data2 in 'data' var is:  " << o2.data << endl;
    return 0;
}