#include <iostream>
using namespace std;

class student1
{
    float mathsMarks;
    float physicsMarks;

protected:
    float percent1;

public:
    void setMarks(int m, int p)
    {
        mathsMarks = m;
        physicsMarks = p;
    }
    float rank1()
    {
        float percent1 = (mathsMarks + physicsMarks) / 2;
        return percent1;
    }
};

class student2
{
    float mathsMarks2;
    float physicsMarks2;

protected:
    float percent2;

public:
    void setMarks2(int m, int p)
    {
        mathsMarks2 = m;
        physicsMarks2 = p;
    }
    float rank2()
    {
        float percent2 = (mathsMarks2 + physicsMarks2) / 2;
        return percent2;
    }
};

class school : public student1, public student2 // derived class from 2 base classes
{
public:
    void rank()
    {
        float r1 = rank1();
        float r2 = rank2();

        rank2();
        cout << "the school rank is: " << ((r1 + r2) / 2);
    }
};

int main()
{
    int m1, m2, p1, p2;
    cout << "enter 1st student maths marks: ";
    cin >> m1;
    cout << "enter 1st student physics marks: ";
    cin >> p1;
    cout << "enter 2nd student maths marks: ";
    cin >> m2;
    cout << "enter 2nd student physics marks: ";
    cin >> p2;
    school school;
    school.setMarks(m1, p1);
    school.setMarks2(m2, p2);
    school.rank();
}