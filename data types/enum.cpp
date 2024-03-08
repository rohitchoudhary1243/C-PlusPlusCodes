#include <iostream>
using namespace std;

int main()
{
    enum students
    {
        rohit,
        rahul,
        manish
    };
    students s1 = rohit;
    cout << "rohit's position is: " << s1 << endl;
    cout << "manish's posotion is: " << manish << endl;

    return 0;
}