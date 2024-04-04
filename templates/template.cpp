#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *ptr;
    int size;
    vector(int m)
    {
        size = m;
        ptr = new T[size];
    }
    T sumVector(vector &v)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->ptr[i] * v.ptr[i];
        }
        return sum;
    }
};

int main()
{
    vector<float> v1(3);
    v1.ptr[0] = 1.10;
    v1.ptr[1] = 2.20;
    v1.ptr[2] = 3.30;
    vector<float> v2(3);
    v2.ptr[0] = 3.30;
    v2.ptr[1] = 2.20;
    v2.ptr[2] = 1.10;
    float result = v1.sumVector(v2);
    cout << result << endl;
    return 0;
}