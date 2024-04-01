#include <iostream>
#include <fstream>
using namespace std;
/*
the useful classes for working with files in c++ are
1. fstreambase
2. ifstream -->derived from fstreambase
2. ofstream -->derived from fstreambase

IN order to work with files in c++ you will to open it. primirely,there are 2 ways to open a file
1. using the constuctor
2. using the member function open() of a class

*/
int main()
{
    // opening file using constructor for write in it
    string name = "hello Rohit";
    ofstream out("write.txt");
    out << name;

    // opening file using constructor for read from it
    string read;
    ifstream in("read.txt");
    // in >> read;
    getline(in, read);
    cout << read;
    return 0;
}