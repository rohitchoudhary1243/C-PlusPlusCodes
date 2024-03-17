#include <iostream>
using namespace std;
class y;
class x
{
    int data1;
    friend void printSum(x o1, y o2);

public:
    void setData(int v)
    {
        data1 = v;
    }
};
class y
{
    int data2;
    friend void printSum(x o1, y o2);

public:
    void setValue(int v)
    {
        data2 = v;
    }
};
void printSum(x o1, y o2)
{
    cout << "the sum is: " << o1.data1 + o2.data2 << endl;
}
int main()
{
    x x1;
    y y1;
    x1.setData(3);
    y1.setValue(10);
    printSum(x1, y1);
    return 0;
}