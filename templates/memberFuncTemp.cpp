#include <iostream>
using namespace std;
template <class T>
class printData
{
public:
    T data;
    printData(T a)
    {
        data = a;
    }
    void display();
};
// member function template
template <class d>
void printData<d>::display()
{
    cout << "data ia: " << data;
}

void func1(int a)
{
    cout << "this is the function: " << a << endl;
}
template <class dataType1>
void func2(dataType1 a)
{
    cout << "this is the function with template: " << a;
}
int main()
{
    printData<int> obj1(6);
    // cout <<"data is: " <<obj1.data;
    obj1.display();
    cout << endl;
    // func1(1); // exact match takes the highest priority
    func2(2);
    return 0;
}
