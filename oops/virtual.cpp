#include <iostream>
using namespace std;
class base_class
{
public:
    int base_var;
    virtual void display() /* when we make virtual function the display function will be not execute if we points the derived class object by base class pointer, the display function of derived class object will be execute */
    {
        cout << "the value of base var is: " << base_var << endl;
    }
};
class derived_class : public base_class
{
public:
    int derived_var;
    void display()
    {
        cout << "the value of derived var is: " << derived_var << endl;
    }
};
int main()
{
    base_class *base_class_pointer;
    base_class obj_base;
    derived_class obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}