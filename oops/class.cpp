#include <iostream>
using namespace std;

class student
{
private:
    int mob;
    string dob;

public:
    int roll, cgpa;
    string name;

    void setdata(string dob, double mob); // declaration
    // void getdata(int roll, int cgpa)
    // {
    //     cout << "roll no. of student is: " << roll;
    //     cout << "cgpa of student is: " << cgpa;
    // }
};
void student ::setdata(string dob, double mob)
{
    dob = "01/01/2005";
    mob = 3223565889;
    cout << "student dob is: " << dob << endl;
    cout << "student mob no. is: " << mob << endl;
}

int main()

{
    student science[5];
    science[0].name = "rohit";
    science[0].cgpa = 100;
    science[0].roll = 233232;

    student alex;
    alex.roll = 211221;
    alex.cgpa = 92;

    cout << " first student name is: " << science[0].name << endl;
    cout << science[0].name << "'s cgpa is: " << science[0].cgpa << endl;
    cout << science[0].name << "'s roll is: " << science[0].roll << endl;

    student setdata(); // function is inside the class // cannot access private data types
    return 0;
}