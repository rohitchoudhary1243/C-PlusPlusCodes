#include <iostream>
using namespace std;
typedef struct school
{
    char name[10];
    int roll;
    float cgpa;

} school;
int main()
{
    school arts[5];
    school maths[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter arts " << i << " student name: ";
        cin >> arts[i].name;
        cout << "enter arts " << i << " student roll: ";
        cin >> arts[i].roll;
        cout << "enter arts " << i << " student cgpa: ";
        cin >> arts[i].cgpa;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "enter maths " << j << " student name: ";
        cin >> maths[j].name;
        cout << "enter maths " << j << " student roll: ";
        cin >> maths[j].roll;
        cout << "enter maths " << j << " student cgpa: ";
        cin >> maths[j].cgpa;
    }
    for (int k = 0; k < 5; k++)
    {
        cout << "~ arts " << k << " student name is: " << arts[k].name << endl;
        cout << "~ arts " << k << " student roll is: " << arts[k].roll << endl;
        cout << "~ arts " << k << " student cgpa is: " << arts[k].cgpa << endl;
    }
    for (int l = 0; l < 5; l++)
    {
        cout << "~ maths " << l << " student name is: " << maths[l].name << endl;
        cout << "~ maths " << l << " student roll is: " << maths[l].roll << endl;
        cout << "~ maths " << l << " student cgpa is: " << maths[l].cgpa << endl;
    }
    cout << "this is make sense haha..";
    return 0;
}