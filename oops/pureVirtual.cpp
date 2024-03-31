#include <iostream>
using namespace std;
class base_class
{
protected:
    int id;

public:
    base_class(int i)
    {
        id = i;
    }

    virtual void display() = 0; // do nothing function --> pure virtual function
};

class price : public base_class
{
protected:
    int rate;

public:
    price(int p, int i) : base_class(i)
    {
        rate = p;
    }
    void display()
    {
        cout << "the id of product  " << id << " is: " << id << endl
             << "the price of product " << id << "  is: " << rate << endl;
    }
};

class total : public base_class
{
protected:
    int gst;
    int rate;

public:
    total(int p, int i, int g) : base_class(i)
    {
        rate = p;
        gst = g;
    }
    void display()
    {
        cout << "the id of product " << id << "  is: " << id << endl
             << "the price of product " << id << "  is: " << rate << endl
             << "the gst of product " << id << " is: " << gst << "%" << endl
             << "Total price of product " << id << "  is: " << ((rate * gst) / 100) + rate;
    }
};

int main()
{
    int id = 12121;
    int rate = 999;
    int gst = 18;
    base_class *ptr_base;

    price obj_price(rate, id);
    total obj_total(rate, id, gst);

    ptr_base = &obj_price;
    ptr_base->display();

    ptr_base = &obj_total;
    ptr_base->display();

    return 0;
}