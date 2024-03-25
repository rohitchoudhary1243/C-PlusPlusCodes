#include <iostream>
using namespace std;
class student
{
protected:
  int roll;

public:
  void setNumber(int n)
  {
    roll = n;
  }
  void printNumber()
  {
    cout << "your roll number is: " << roll << endl;
  }
};
class test : virtual public student
{
protected:
  float maths;
  float physics;

public:
  void setMarks(int m1, int p1)
  {
    maths = m1;
    physics = p1;
  }
  void printMarks()
  {
    cout << "your marks are: " << endl
         << "maths marks is: " << maths << endl
         << "physics marks is: " << physics << endl;
  }
};
class sports : virtual public student
{
protected:
  float score;

public:
  void setScore(int s)
  {
    score = s;
  }
  void printScore()
  {
    cout << "your score is: " << score << endl;
  }
};
class result : public sports, public test
{

public:
  void printResult()
  {
    float total = (maths + physics + score) / 3;
    printNumber();
    printMarks();
    printScore();
    cout << "your total score is: " << total << endl;
  }
};
int main()
{
  result manish;
  manish.setNumber(11221);
  manish.setMarks(90, 95);
  manish.setScore(90);
  manish.printResult();

  return 0;
}