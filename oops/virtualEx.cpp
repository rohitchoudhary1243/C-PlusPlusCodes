#include <iostream>
using namespace std;
class RohitDudi
{
protected:
    string title;
    int retention;

public:
    RohitDudi(string t, int re)
    {
        title = t;
        retention = re;
    }
    virtual void display()
    {
        cout << "there is no code ";
    }
};
class rating : public RohitDudi
{
protected:
    float rate;

public:
    rating(float ra, string t, int re) : RohitDudi(t, re)
    {
        rate = ra;
    }
    void display()
    {
        cout << "the title of RohitDudi's video is: " << title << endl
             << "audience retention of " << title << " video is: " << retention << "%" << endl
             << "the rating of '" << title << "' video is: " << rate;
    }
};
class impressions : public RohitDudi
{
protected:
    int impression;
    float rate;

public:
    impressions(float ra, float i, string t, int re) : RohitDudi(t, re)
    {
        impression = i;
        rate = ra;
    }
    void display()
    {
        cout << "the title of RohitDudi's video is: " << title << endl
             << "audience retention of " << title << " video is: " << retention << "%" << endl
             << "the rating of " << title << " video is: " << rate << endl
             << "the impressions of '" << title << "' video is: " << impression;
    }
};
int main()
{
    string title = "computer working";
    float rate = 4.99;
    int retention = 90;
    int imp = 1000;

    rating videoRating(rate, title, retention);
    // videoRating.display();

    impressions videoImpression(rate, imp, title, retention);
    // videoImpression.display();

    RohitDudi *videos[2];
    videos[0] = &videoRating;
    videos[1] = &videoImpression;
    videos[0]->display();
    videos[1]->display();

    return 0;
    /*
    Rules for virtual functions-
    1. they cannot be static
    2. they are accessed by pointer of objects
    3. virtual functions can be a friend of another class
    4. a virtual function in a base class might not be use
    5. if a virtual function defined in a base class, there is no neccessity of redefining it in the derived class
    */
}