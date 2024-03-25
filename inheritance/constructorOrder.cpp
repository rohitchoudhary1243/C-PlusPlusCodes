#include <iostream>
using namespace std;

/*
order of constructro invoke in INHERITANCE
class B: public A{
    order of execution of constructor --> first(A) than(B)
}
class C: public A,public B{
    order of execution of constructor --> first(A) than(B) than (C)
}
class C: public A, virtual public B{
    order of execution of constructor --> (B) >(A) > (C)
}

*/

class base1
{
    int base1A;

public:
    base1(int n1)
    {
        base1A = n1;
        cout << "constructor of base1 class is invoked " << endl;
        ;
    }
    void printData()
    {
        cout << "the value of base1A is: " << base1A << endl;
    }
};
class base2
{
    int base2A;

public:
    base2(int n2)
    {
        base2A = n2;
        cout << "constructor of base2 class is invoked " << endl;
    }
    void printData2()
    {
        cout << "the value of base2A is: " << base2A << endl;
    }
};

class derived : public base2, public base1 // order of constructor execution is here
{

    int derived1;
    int derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)  // syntax for resolve 
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor is invoked" << endl;
    }
    void printDerived()
    {
        cout << "the value of derived1 is: " << derived1 << endl;
        cout << "the value of derived2 is: " << derived2 << endl;
        printData();
        printData2();
    }
};

int main()
{
    derived obj(10, 20, 30, 40);
    obj.printDerived();
    return 0;
}