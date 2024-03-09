#include <iostream>
using namespace std;
int count = 0;

int strlen(const string l) // constant argument can't be change
{
    for (int i = 0; l[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    string name = "rohitn";
    cout << "my name length is: " << strlen(name) << endl;
    return 0;
}