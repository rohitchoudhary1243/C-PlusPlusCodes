#include <iostream>
using namespace std;
int count = 1;
class calling
{
public:
    calling()
    {
        cout << "this is the time when constructor call " << count << endl;
        count++;
    }
    ~calling()
    {
        cout << "this is the time when distructor call " << count << endl;
        count--;
    }
};
int main()
{
    cout << "now we are insode main function" << endl;
    cout << "creating A objects " << endl;
    calling n1;
    {
        cout << "creating two more objects " << endl;
        calling n1, n2;
        cout << "Existing n1 object" << endl;
    }
    cout << "we are outside the n1 object" << endl;
    cout << "now close the function" << endl;

    return 0;
}