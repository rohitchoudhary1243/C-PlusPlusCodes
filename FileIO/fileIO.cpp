
#include <iostream>
#include <fstream>
using namespace std;

int main()
{ // input from user and writing it into a file
    ofstream hout("name.txt");
    string name;
    cout << "enter your name: ";
    cin >> name;
    hout << ". my name is " + name;
    // closing the file after wrote in it
    hout.close();
    // opening the same file in read mode
    ifstream hin("name.txt");
    string myname;
    hin >> myname;
    // cout << "my name is: " << name;
    getline(hin, myname);
    cout << myname;
    // closing the file after read data
    hin.close();
    return 0;
}