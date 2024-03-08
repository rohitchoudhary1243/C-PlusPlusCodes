#include <iostream>
using namespace std;
union price
{ // we can use one data type at a time in union, this is important for memory allocation
    int numbers;
    char words;
    float decimal;
};
int main()
{
    price rice;
    price cofee;
    rice.numbers = 80;
    // cofee.numbers = 200;
    cofee.decimal = 200.10;
    // rice.words = 'A';
    cout << "price of rice in numbers is: " << rice.numbers << endl
         << endl;
    // cout << "price of rice in words is: " << rice.words << endl<< endl;
    // cout << "price of cofee in numbers is: " << cofee.numbers << endl;
    cout << "price of cofee in decimal is: " << cofee.decimal << endl;
    // cout << "price of rice in numbers is: " << rice.numbers << endl;

    return 0;
}