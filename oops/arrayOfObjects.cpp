#include <iostream>
using namespace std;

class school
{

    int idArts[10];
    int rollArts[10];
    int idMaths[10];
    int rollMaths[10];
    // static int count;

public:
    void setIdArts(int count)
    {
        // for (int i = 0; i < count; i++)  // we can put loop here
        //{
        cout << "enter id of " << count + 1 << " student: ";
        cin >> idArts[count];
        cout << "enter roll no. of " << count + 1 << " student: ";
        cin >> rollArts[count];
        // }
    }
    void getIdArts(int count)
    {
        // for (int i = 0; i < count; i++)
        //  {
        cout << "the id of " << count + 1 << " arts student is: " << idArts[count] << endl;
        cout << "the roll no. of " << count + 1 << " arts student is: " << rollArts[count] << endl;
        // }
    }
    void setIdMaths(int count)
    {

        cout << "enter id of " << count + 1 << " student: ";
        cin >> idMaths[count];
        cout << "enter roll no. of " << count + 1 << " student: ";
        cin >> rollMaths[count];
    }
    void getIdMaths(int count)
    {

        cout << "the id of " << count + 1 << " math student is: " << idMaths[count] << endl;
        cout << "the roll no. of " << count + 1 << " math student is: " << rollMaths[count] << endl;
    }
    void save(char n)
    {
        if (n == 'y')
        {
        }
    }
};

int main()
{
    int countArts;
    int countMaths;
    char yn;
    char n;
    cout << "Hello i'm a computer programm created by rohit i can store your school/college data," << endl
         << "want to use me? y/n ";
    cin >> yn;
    if (yn == 'y')
    {
        cout << "enter arts students: ";
        cin >> countArts;
        cout << "enter maths students: ";
        cin >> countMaths;
        school arts[countArts]; // array of object
        school maths[countMaths];
        school storeData;
        cout << "enter arts students data:-" << endl;
        for (int i = 0; i < countArts; i++)
        {
            arts[i].setIdArts(i);
        }
        cout << "enter maths students data:-" << endl;
        for (int i = 0; i < countMaths; i++)
        {
            arts[i].setIdMaths(i);
        }
        cout << "Arts students are: " << endl;
        for (int i = 0; i < countArts; i++)
        {
            arts[i].getIdArts(i);
        }
        cout << "maths students are: " << endl;
        for (int i = 0; i < countMaths; i++)
        {
            arts[i].getIdMaths(i);
        }
        cout << "do you want to save the data y/n ";
        cin >> n;
        if (n == 'y')
        {
            cout << "we are working on it...";
        }
        else if (n == 'n')
        {
            cout << "okay.. you can save anytime ";
        }
        else
        {
            cout << "you entered incorrect format, please enter y/n only ";
        }
    }
    else if (yn == 'n')
    {
        cout << "okay! you can use me anytime";
    }
    else
    {
        cout << "you entered an incorrect format! please enter y/n only ";
    }
}