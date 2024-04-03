#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter your name: ";
    cin >> sentence;
    ofstream objOUT;
    objOUT.open("sample.txt");
    objOUT << " my name is \n";
    objOUT << sentence + "\n";
    objOUT << " how are you? \n";

    objOUT.close();

    ifstream objIN;
    objIN.open("sample.txt");
    string str;
    // getline(objIN, sentence);
    // cout << sentence;
    while (objIN.eof() == 0)
    {
        getline(objIN, str);
        cout << str;
    }
    return 0;
}