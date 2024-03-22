#include <iostream>
using namespace std;
class setDataClass // creating base class
{
    int data1;

public:
    int data2;
    void setData();
    int setData1();
    int setData2();
};

void setDataClass::setData()
{
    data1 = 100;
    data2 = 200;
}
int setDataClass::setData1()
{
    return data1;
}
int setDataClass::setData2()
{
    return data2;
}

class getDataClass : public setDataClass /* creating derived class "getData" from base class "setData" */
{
public:
    int data3;
    void process()
    {
        data3 = data2 * setData1();
    }
    void printData()
    {
        cout << "the value of data 1 is: " << setData1() << endl; /* we are calling function because data 1 directly can't accesible */
        cout << "the value of data 2 is: " << data2 << endl;
        cout << "the value of data 3 is: " << data3 << endl;
    }
};

int main()
{
    getDataClass o1;
    o1.setData();
    o1.process();
    o1.printData();

    return 0;
}