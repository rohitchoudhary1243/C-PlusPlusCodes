#include <iostream>
using namespace std;

/*
synatx for initialization list  in constructor-->
constructor(argument list) : intilization section{
    assignment + other code;
}



class test{
int a,b;
    test(int i,int j) : a(i),b(j){
        cout<<"the value of a is: "<<a<<endl;
        cout<<"the value of b is: "<<b<<endl;
    }
};
*/
class test
{
    int a, b;

public:
    // test(int i, int j) : b(i+a), a(j)
    // test(int i, int j) : a(i+10), b(j)
    // test(int i, int j) : b(i+10), a(j)
    /*  test(int i, int j) : b(i), a(j+b) // this will give error because a is initialized first and compilor don't know what is b*/
    test(int i, int j) : b(a + i + 10), a(j)

    {
        cout << "the value of a is: " << a << endl;
        cout << "the value of b is: " << b << endl;
    }
};

int main()
{
    test obj(3, 6);

    return 0;
}