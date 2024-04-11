#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v1[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1;
    display(v1);
    vector<char> v2(4);
    v2.push_back('c');
    display(v2);
    vector<string> v3;
    v3.push_back("hello");
    display(v3);
    vector<char> v4(v2);
    display(v4);
    vector<int> v5(4, 10);
    v5.push_back(11);
    display(v5);
    cout << "size of v5 is: " << v5.size();
    // int element, size;
    // cout << "enter the size of elements: ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "enter a number in element: ";
    //     cin >> element;
    //     v1.push_back(element);
    // }
    // display(v1);
    // vector<int>::iterator itr = v1.begin();
    // v1.insert(itr + 3, 10, 90);
    // v1.pop_back();
    // cout << endl;
    // display(v1);

    return 0;
}