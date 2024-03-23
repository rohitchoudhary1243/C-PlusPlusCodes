#include <iostream>
using namespace std;
class student
{
protected:
    int rollNumber;
    int maths;
    int physics;

public:
    void setRollNumber(int r)
    {
        rollNumber = r;
    }
    void setMarks(int m, int p)
    {
        maths = m;
        physics = p;
    }
};
class printMarks : public student // inheriting student class in public mode
{
public:
    void printData()
    {
        cout << "for roll number: " << rollNumber << endl;
        cout << " maths marks is: " << maths << endl;
        cout << " physics marks is: " << physics << endl;
    }
};
class percent : public printMarks // inheriting class from already inherited class
{
public:
    void printPerccent()
    {
        cout << "your percentage is: " << (maths + physics) / 2;
    }
};
int main()

{
    int n, m, p;
    cout << "enter your roll number: ";
    cin >> n;
    cout << "enter your maths marks: ";
    cin >> m;
    cout << "enter your physics marks: ";
    cin >> p;

    percent manish;
    manish.setRollNumber(n);
    manish.setMarks(m, p);
    manish.printData();
    manish.printPerccent();
    return 0;
}