#include <iostream>
using namespace std;
class classA
{
    int a;

public:
    classA &setData(int a)
    {
        // (*this).a=a;
        this->a = a;
        return *this;
    }
    /* this is a keyword which is a pointer
    which points the objects which invokes the member functions */
    void getData()
    {
        cout << "the value of a is: " << a << endl;
    }
};
int main()
{
    classA obj;
    obj.setData(4).getData();
    obj.getData();
    return 0;
}