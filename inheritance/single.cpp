#include <iostream>
using namespace std;
// base class
class employee
{
    int mobile = 1122112;

public:
    // employee() {}
    int id;
    int salary;
};
// derived inheritance
// default visibility mode is private
// public visibility mode: public members of base class becomes public members of derived class
// private visibily mode: public members of base class  becomes privae members of derived class
// private members are never inherited

// creating a forprint derived class from employee base class
class getData : public employee
{
public:
    getData(int InputId, int InputSalary)
    {
        id = InputId;
        salary = InputSalary;
    }
    void print()
    {
        cout << "the id of employee is: " << id << endl;
        {
            cout << "the salary of employee is: " << salary << endl;
        }
    }
};
int main()
{
    getData c1(1, 100), c2(2, 200);
    c1.print();

    c2.print();

    return 0;
}