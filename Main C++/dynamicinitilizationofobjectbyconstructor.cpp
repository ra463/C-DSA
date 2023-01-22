#include <iostream>
using namespace std;

class bank
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    bank(){}; // this is a default constructor
    bank(int p, int y, float r);
    bank(int p, int y, int r);

    void showdata();
};

bank::bank(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

bank::bank(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void bank::showdata()
{
    cout << "Principal amount was " << principal << endl;
    cout << "Return value after " << year << " years is " << returnvalue << endl;
    cout << "Rate of interest was " << interestrate << endl;
}

int main()
{
    // bank b1, b2, b3;
    // when we create object of class in this way, the default(which does nothing) constructor must be present/made in the class
    // if we don't make a default constructor, then we will get an error
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r" << endl;
    cin >> p >> y >> r;
    bank b1(p, y, r);
    b1.showdata();

    cout << "Enter the value of p, y and R" << endl;
    cin >> p >> y >> R;
    bank b2(p, y, R);
    b2.showdata();

    bank b3;
    b3.showdata();
    return 0;
}