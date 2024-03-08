#include <iostream>
using namespace std;
typedef struct student
{
    int roll;
    char section;
    float cgpa;
} stu;
int main()
{
    stu rohit;
    stu kamal;
    stu sachin;
    rohit.roll = 203030;
    rohit.section = 'c';
    rohit.cgpa = 100;
    kamal.roll = 20500;
    kamal.section = 'b';
    kamal.cgpa = 90;
    sachin.roll = 506040;
    sachin.section = 'a';
    sachin.cgpa = 80;
    cout << "rohit's roll number is: " << rohit.roll << endl;
    cout << "rohit's section  is: " << rohit.section << endl;
    cout << "rohit's cgpa  is: " << rohit.cgpa << endl;
    cout << "kamal's roll number is: " << kamal.roll << endl;
    cout << "kamal's section  is: " << kamal.section << endl;
    cout << "kamal's cgpa  is: " << kamal.cgpa << endl;
    cout << "sachin's roll number is: " << sachin.roll << endl;
    cout << "sachin's section  is: " << sachin.section << endl;
    cout << "sachin's cgpa  is: " << sachin.cgpa << endl;
    cout << "It doesn't make sense without arrays";
    return 0;
}