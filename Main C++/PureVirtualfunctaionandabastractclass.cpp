#include <iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    void setdata1(int x, int y)
    {
        a = x;
        b = y;
    }
    virtual void getdata() = 0; // pure virtual function
};

class B : public A
{
    int c;

public:
    void setdata(int x, int y, int z)
    {
        A::setdata1(x, y);
        c = z;
    }

    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    B b1;
    B *ptr;
    ptr = &b1;
    ptr->setdata(1, 2, 3);
    ptr->getdata();
    return 0;
}