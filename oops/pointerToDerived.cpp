#include <iostream>
using namespace std;
class base_class
{
public:
    int base_var;
    void display()
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

    base_class_pointer = &obj_derived; // but the base class pointer can point the derived class object
    base_class_pointer->base_var = 20; // pointing the base class pointer to derived class
    base_class_pointer->display();

    obj_base.base_var = 200;
    obj_base.display();

    derived_class *derived_class_pointer;
    // derived_class_pointer=&obj_base;    // derived class pointer can't point the base class object
    derived_class_pointer = &obj_derived; //

    derived_class_pointer->derived_var = 40;
    derived_class_pointer->display();

    obj_derived.derived_var = 400;
    obj_derived.display();

    return 0;
}