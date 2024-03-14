#include <iostream>
using namespace std;

class employee
{

    int id[5];
    static int numbers;
    static int count; // static var work for all objects in a class
public:
    void setData()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "enter " << count + 1 << " employee id: ";
            cin >> id[i];
            // getcount();
            count++;
        }
    }
    void getData()
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "employee no. " << j << " id is: " << id[j] << endl;
        }
    }

    static void getcount() // static mmember function
    {
        // cout<<id[0]; //a nonstatic member reference must be relative to a specific object
        cout << " the count is: " << count;
    }
};
int employee::count; /* =100 ;*/ // default value is 0 and initialization can do here
int employee::numbers;
int main()
{ // using static var
    employee company1, company2;
    // rohit.id=10; //
    // rohit.count=1; // cannot update because id & count are private var of class
    company1.setData();
    company1.getData();

    // using static function
    employee::getcount(); // we can call function by class reference
    return 0;
}